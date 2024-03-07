---
collection: teaching
title: "Classwork 24"
---

## Logistics
* Due: Monday, April 15th AoE.
* Submission instructions: make sure that the required file (`digit.c`) is in your
	`csci112_spring2024/classwork/week14/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice creating a simple linked list

## Assignment

* Log in to the server.
* From your home directory, navigate to `csci112_spring2024/classwork/week14/mon/`, creating directories `week14`
and `mon` if necessary.
* Copy the file `/public/classwork/week14/mon/digit.c` into your directory.

Fill in the three `TODO` items so that the program defines a `digit` struct
with an `int` field called `d` and a pointer to another `digit` called `next`,
and then creates three `digit` nodes in `main` and connects them to form a
linked list. When you are finished, the compiling and running the program
should look like this:

```
[g73x595@csci112 mon]$ gcc digit.c -Wall
[g73x595@csci112 mon]$ ./a.out
1->2->3->
```

## Autograder

You can run the autograder by running

```
/public/classwork/week14/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround

The autograder will be run at 6am to calculate final scores. Scores will be
uploaded to D2L by the next class period.
