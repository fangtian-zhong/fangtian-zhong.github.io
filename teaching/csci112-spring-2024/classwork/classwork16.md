---
collection: teaching
title: "Classwork 16"
---

## Logistics
* Due: Monday, October 16th AoE.
* Submission instructions: make sure that the required file (`struct.c`) is in your
	`/classwork/week9/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice defining a struct.

## Assignment

* Log in to the server.
* Copy the file `struct.c` from the `/public/classwork/week9/mon`
	directory.

In the file `struct.c`, fill the code needed to define a `Point`. You'll need to look at how a `Point` is used to see what its fields' names and data types are.

After you have
filled in the correct code, compiling and running your program should look like
this.

```
[p19t655@csci112 mon]$ gcc struct.c -Wall
[p19t655@csci112 mon]$ ./a.out
(1.30,3.56)
(3.42,-10.46)
```

You can run the autograder by running

```
/public/classwork/week9/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
