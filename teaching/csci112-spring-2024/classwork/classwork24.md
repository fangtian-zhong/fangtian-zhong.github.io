---
collection: teaching
title: "Classwork 24"
---

## Logistics
* Due: Monday, November 13th AoE.
* Submission instructions: make sure that the required file (`digit.c`) is in your
	`csci112_fall2023/classwork/week13/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice creating a simple linked list

## Assignment

* Log in to the server.
* From your home directory, navigate to `csci112_fall2023/classwork/week13/mon/`, creating directories `week13`
and `mon` if necessary.
* Copy the file `/public/classwork/week13/mon/digit.c` into your directory.

Fill in the three `TODO` items so that the program defines a `digit` struct
with an `int` field called `d` and a pointer to another `digit` called `next`,
and then creates three `digit` nodes in `main` and connects them to form a
linked list. When you are finished, the compiling and running the program
should look like this:

```
[p19t655@csci112 mon]$ gcc digit.c -Wall
[p19t655@csci112 mon]$ ./a.out
1->2->3->
```

## Autograder

You can run the autograder by running

```
/public/classwork/week13/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround

The autograder will be run at 6am to calculate final scores. Scores will be
uploaded to D2L by the next class period.
