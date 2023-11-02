---
collection: teaching
title: "Classwork 12"
---

## Logistics
* Due: Monday, October 2nd AoE.
* Submission instructions: make sure that the required file (`read_file.c`) is in your
	`/classwork/week7/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice using file pointers.

## Assignment

* Log in to the server.
* From your `csci112_fall2023` directory, navigate to `classwork/week7/mon/`, creating directories `week7` and `mon` if necessary.

Use `fopen` to open the file `/public/classwork/week7/mon/input.txt`, read the
doubles it contains, and print them, one per line with 2 decimal places, to a file called `output.txt`
in the same directory as your `read_file.c` file. You should also use `fopen`
to read the file you are writing to. You can assume that the input
file contains exactly 5 doubles.

That is, if you compile your program, run your program, and then `cat` the file
that is created, it would look something like this:

```
[p19t655@csci112 mon]$ ls
read_file.c
[p19t655@csci112 mon]$ gcc read_file.c -Wall
[p19t655@csci112 mon]$ ./a.out
[p19t655@csci112 mon]$ ls
a.out  output.txt  read_file.c
[p19t655@csci112 mon]$ cat output.txt
34.50
67.29
43.00
-1202343.23
89.01
```

You can run the autograder by running

```
/public/classwork/week7/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
