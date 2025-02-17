---
collection: teaching
title: "Classwork 12"
---

## Logistics
* Due: Wednesday, February 26th AoE.
* Submission instructions: make sure that the required file (`read_file.c`) is in your
	`/classwork/week7/wed/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice using file pointers.

## Assignment

* Log in to the server.
* From your `csci112_spring2025` directory, navigate to `classwork/week7/wed/`, creating directories `week7` and `wed` if necessary.

Use `fopen` to open the file `/public/classwork/week7/wed/input.txt`, read the
doubles it contains, and print them, one per line with 2 decimal places, to a file called `output.txt`
in the same directory as your `read_file.c` file. You should also use `fopen`
to read the file you are writing to. You can assume that the input
file contains exactly 5 doubles.

That is, if you compile your program, run your program, and then `cat` the file
that is created, it would look something like this:

```
[g73x595@csci112 wed]$ ls
read_file.c
[g73x595@csci112 wed]$ gcc read_file.c -Wall
[g73x595@csci112 wed]$ ./a.out
[g73x595@csci112 wed]$ ls
a.out  output.txt  read_file.c
[g73x595@csci112 wed]$ cat output.txt
34.50
67.29
43.00
-1202443.23
89.01
```

You can run the autograder by running

```
/public/classwork/week7/wed/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
