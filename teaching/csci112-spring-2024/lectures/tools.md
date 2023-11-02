---
collection: teaching
title: "Course server; intro Linux and vim; classwork submission setup"
---

This page gives a description of many of the tools we will use in this class.
We will refer to it multiple times throughout the semester.

Contents:
1. [Using the command line](#using-a-computer-via-the-command-line)
1. [Course server](#course-server)
1. [Vim](#vim)

## Using a computer via the command line

You are probably used to interacting with a computer via a graphical user
interface (GUI). You open files with programs like Microsoft Word, Keynote,
TextEdit, access websites through web browsers like Google Chrome or Safari,
and see your files with Finder or File Explorer.

Another way to interact with a computer is using the text-based *command line*,
which usually looks something like this:

```
luciawilliams@BZ-CS-LW-MBP ~ %
```

The part before the `@` is the username, the part after is the hostname, which
is sort of like the name of the computer, and then the part after is the
current location on the computer. The tilde (`~`) is an alias for the user's
"home".


## Course server

We will write our programs on the course server, a Linux computer that we
access remotely from our own computers. Its hostname is `csci112.cs.montana.edu`. To access it, we can
open up a terminal (on Mac or Linux) or command prompt
(on Windows) and run the `ssh`
(secure shell) command to log in using our netid, like so:

```
ssh <netid>@csci112.cs.montana.edu
```

Note that whenever you see something in angle brackets (`<` and `>`), it means you should replace whatever's in them *and* them with something else. (In this case, your netid). So, for example, with the netid `p19t655`, the command would be


```
ssh p19t655@csci112.cs.montana.edu
```

The first time you log in to the server, you will see a message like this:

```
The authenticity of host 'csci112.cs.montana.edu (153.90.127.188)' can't be established.
ECDSA key fingerprint is SHA256:HtAKyENKuEBa6mILkLwhMdqqUBvw5QYltXuq2VzEB08.
Are you sure you want to continue connecting (yes/no/[fingerprint])?
```
You should type `yes` and press enter.

When you're prompted to enter your password, nothing will show up, but you are
typing!

Note that if you have three unsuccessful login attempts, you will be blocked
from the server for one hour. Try not to mistype your password! But if this
does happen, DM me and if I'm available I will unblock you.

The data on the server is backed up every morning. If you lose your code and
want to access what you had when the backup happened, DM me on Discord and I
will help you get it.

## Using the Linux shell

The server is using an operating system called Linux. Linux can be used with a GUI, but we will use the server via the command prompt only.
The command prompt looks something like this:

```
[username@csci112 ~]$
```

Here are a number of important commands (or equivalently, programs) that you'll
want to be familiar with. After the command name, we can enter arguments
separated by spaces, just like you enter arguments to a function when you are
programming.
* `pwd`, print working (current) directory
* `ls`, list contents of current directory
* `cd <directory>`, change directory to the given path
* `mkdir <directory>`, make directory
* `rm <file>`, remove given file (or `rm -r <directory>` to remove a directory
	and all of its contents)
* `mv <path> <newpath>`, move a file or directory to a new location (can also
	be used to rename a file or directory)
* `cp <path> <newpath>`, copy a file or directory to a new location
* `clear`, clear the screen

You'll also want to be familiar with the following functionality and ideas:
* The up and down arrow keys allow you to scroll through previous commands you
	have run. You can edit these and run them again.
* `..` is the directory above the current one; `.` is the current directory.
* Tab completion: if you press tab, the shell will try to autocomplete whatever
	you have written. Use this *all of the time*.
* `Ctrl-c` quits whatever program is currently running. If you accidentally
	start something you didn't want to start, use this.
* `Ctrl-d` exits the server. (You can also just close your terminal window.)
* `~` is an alias to your home directory (`/home/yournetid/`). If you ever want
	to return there quickly, just type `cd ~`.
* The program `man` displays the documentation for any other program that you
	pass as an argument. For example, `man ls` gives the manual for the `ls`
	command. Quit with `q`.
* Most commands can be run with various options. `man` will list all of the
	options. One example is `ls -a`, for list all, which shows hidden files and
	directories as
	well as regular files and directories.

### Paths

The location of a file or directory is called its path. To access a file or
directory that is in the directory that we are currently in, we can use a
relative path. For example, if the directory `dir1` exists in my current
directory, I can run

```
cd dir1
```

to go into `dir1`, or if there is a file called `text.txt` I can open it in
`vim` (discussed later)  by running

```
vim dir1/text.txt
```

These are examples of relative paths. I can also access files and directories
from anywhere using absolute paths, which start with a `/`. For example, no
matter where I am, I can open that file using

```
/home/p19t655/dir1/text.txt
```

if it is indeed located at that path.

### Redirection

A common task in programming is to input data from a file or write data to a
file. While C has this ability built-in, we can also achieve it using the
operating system using something called redirection, where we (temporarily)
redirect the operating system's standard input (`stdin`) or standard output
(`stdout`) from the console (where we normally type) to a file.

The `>` redirects the output and `<` redirects the input.

For example, suppose I have a program that prints the numbers 1 through 5,
compiled into the executable `print_nums`:

```
[p19t655@csci112 ~]$ ./print_nums
1 2 3 4 5
```

If I want to save this to a file called `nums.txt`, I can do the following.
Note that nothing is print to the screen.

```
[p19t655@csci112 ~]$ ./print_nums > nums.txt
```

But if I `cat` the file `nums.txt`, I see that it has content:

```
[p19t655@csci112 ~]$ cat nums.txt
1 2 3 4 5
```

Similarly, if I have an executable `read_nums` that reads in five integers (for
example, using `scanf` in C), I can enter those at the console:

```
[p19t655@csci112 ~]$ ./read_nums
Enter five integers:
1 2 3 4 5
The numbers you entered are 1, 2, 3, 4, 5
```

But I can also use redirection to use a file to enter them. (Recall that our
file `nums.txt` contains `1 2 3 4 5`).

```
[p19t655@csci112 ~]$ ./read_nums < nums.txt
Enter five integers:
The numbers you entered are 1, 2, 3, 4, 5
```

### Copying files from the server to your local computer

You can use the	`scp` command to copy files from the server to your local
computer. **Note that you need to do this from your own computer, not from the
server!** The first argument is where to copy from and the second is where to
copy to. For example,
```
scp <netid>@csci112.cs.montana.edu:/home/<netid>/myfile.txt myfile.txt
```
would copy the file `myfile.txt` from your home directory (`/home/<netid>`) on
the server into a file called `myfile.txt`, *in whatever directory you are in
when you run the command on your computer*. You can add the `-r` flag after
`scp` to copy an entire directory.

To copy from your computer to the server, you would reverse the order of the
arguments.

Some useful examples:
* `scp -r <netid>@csci112.cs.montana.edu:/home/<netid>/classwork classwork`
	would copy your entire `classwork` directory to a directory called
	`classwork` on your computer
* `scp <netid>@csci112.cs.montana.edu:/public/classwork/week10/mon/solution.c program.c` would copy week 10 Monday's classwork solution to a file called `program.c`

### Additional resources

There are plenty of Linux and shell tutorials out there. The one that I
recommend most is the MIT Missing Semester [shell lecture page](https://missing.csail.mit.edu/2020/course-shell/), but Googling "Linux
tutorial" will probably do you just fine. Additionally, if you have a task you
know you want to do, Googling or using something like ChatGPT will probably work too. For example, say you
want to know how to count the number of lines in a file, you could Google
"count words in file on Linux." You are also encouraged to post in Discord if
you have any questions, or even if you just come across something interesting
that you think others might find useful.

## Vim

In this course, we want to write C programs, so our basic task is editing text
files. The recommended method for doing that is using the program `vim`, which
is a text editor that works particularly well for programming, because it's
focused on editing files, not just writing them. To do this, it has multiple
modes. The most important two to understand are:

* Insert mode: this is when you can freely write text. If you're not in insert
	mode, you get there by pressing `i`. You leave insert mode by pressing
	`esc`.
* Normal mode: this is where the power of vim lies. In normal mode, you run
	commands by pressing single keys in order to navigate, make changes, and
	more. This is where you should spend most of your time.

Here are some of the important basic keystrokes. We'll cover a lot more
later.
* Basic movement: `hjkl` (left, down, up, right) --- the arrow keys also work,
	but train yourself to use `hjkl` instead.
* `o` enters insert mode on next line; `O` on previous; `A` at end of current line.
* Words: `w` (next word), `b` (beginning of word), `e` (end of word).
* Select with `v`, or select multiple lines with `V`.
* Cut/copy/paste: `d` cuts, `y` (yank) copies, and `p` pastes.


To save and quit, you can do the following from normal mode:
* `:w` saves
* `:q` quits (but only if you have no unsaved changes)
* `:wq` writes and quits
* `:q!` quits without saving

Note that typing `:` actually puts you into another mode, called command mode.

You can customize vim by editing the file `.vimrc` in your home directory.
There is a sample vimrc to get you started at `/public/vimrc`. Copy it to your
home directory like this:

```
cp /public/vimrc ~/.vimrc
```

Note that the `.` in front of the `.vimrc` is important! Vim will only look at
your vimrc if it is saved precisely in your home directory as `.vimrc`.
However, the `.` makes it a hidden file, so it won't show up if you're in your
home (`cd ~` to get there if you aren't already) and do a plain `ls`. Instead,
you need to do `ls -a` (list all, including hidden files) to see it.

### `.swp` files

If you're using vim, you'll inevitably run into a page like this eventually:

```
E325: ATTENTION
Found a swap file by the name "/home/p19t655/classwork/week2/wed/.gotham.c.swp"
          owned by: p19t65   dated: Mon Jan 23 15:15:08 2023
         file name: ~p19t655/classwork/week2/wed/gotham.c
          modified: YES
         user name: p19t655   host name: csci112.cs.montana.edu
        process ID: 301892
While opening file "/home/p19t655/classwork/week2/wed/gotham.c"
             dated: Mon Jan 23 17:24:23 2023
      NEWER than swap file!

(1) Another program may be editing the same file.  If this is the case,
    be careful not to end up with two different instances of the same
    file when making changes.  Quit, or continue with caution.
(2) An edit session for this file crashed.
    If this is the case, use ":recover" or "vim -r /home/p19t655/classwork/week2/wed/gotham.c"
    to recover the changes (see ":help recovery").
    If you did this already, delete the swap file "/home/p19t655/classwork/week2/wed/.gotham.c.swp"
    to avoid this message.

Swap file "/home/p19t655/classwork/week2/wed/.gotham.c.swp" already exists!
[O]pen Read-Only, (E)dit anyway, (R)ecover, (D)elete it, (Q)uit, (A)bort:
```

This happens when the file you're trying to open was killed or crashed the last
time it was opened, or if someone else is currently editing the file (unlikely
on our course server, but maybe possible in other cases). One option is to
press `E`, edit as you like, and then delete the `.swp` file (`rm
.<filename>.swp`). A more detailed
explanation of the choices can be found on the [vim help site](https://vimhelp.org/usr_11.txt.html#swap-exists-choices).

### Opening multiple tabs

You can open multiple files in vim using `tabe`. With one file open in vim,
enter command mode by typing `:` while in normal mode. Then type `tabe <filename>` and press enter. This will open the other file. You can switch
between the two windows by typing `gt` in normal mode.

### Additional resources

There are many good vim tutorials. Here are some I recommend:
* `vimtutor` is a program that is already on the server. Just run `vimtutor`
	and follow the instructions on the screen.
* Browser-based vim [game](https://vim-adventures.com/) to practice the vim keystrokes (if you
	get stuck, feel free to use Google to see how you're supposed to get
	through a section...)
* MIT Missing Semester [vim lecture](https://missing.csail.mit.edu/2020/editors/).
