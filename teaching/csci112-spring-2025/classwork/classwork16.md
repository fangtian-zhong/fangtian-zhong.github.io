---
collection: teaching
title: "Classwork 16"
---

## Logistics
* Due: Wednesday, March 12th AoE.
* Submission instructions: make sure that the required file (`struct.c`) is in your
	`/classwork/week9/wed/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice defining a struct.

## Assignment

* Log in to the server.
* Copy the file `struct.c` from the `/public/classwork/week9/wed`
	directory.

In the file `struct.c`, fill the code needed to define a `Point`. You'll need to look at how a `Point` is used to see what its fields' names and data types are.

After you have
filled in the correct code, compiling and running your program should look like
this.

```
[g73x595@csci112 wed]$ gcc struct.c -Wall
[g73x595@csci112 wed]$ ./a.out
(1.30,3.56)
(3.42,-10.46)
```

You can run the autograder by running

```
/public/classwork/week9/wed/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
