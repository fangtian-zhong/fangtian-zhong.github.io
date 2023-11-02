---
collection: teaching
title: "Classwork 20"
---

## Logistics
* Due: Monday, October 30th AoE.
* Submission instructions: make sure that the required file (`hi.c`) is in your
	`csci112_fall2023/classwork/week11/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice taking input from the command line

## Assignment

* Log in to the server.
* From your home directory, navigate to `classwork/week11/mon/`, creating directories `week11`
and `mon` if necessary.

Write a C program in the file `hi.c` that takes one argument from the command line and prints
	`Hello, <arg>`! For example, if you run it with the input `Champ`, it
	should look like this:

```
[p19t655@csci112 mon]$ gcc -o hi -Wall hi.c
[p19t655@csci112 mon]$ ./hi Champ
Hello, Champ!
```

## Autograder

You can run the autograder by running

```
/public/classwork/week11/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.


## Grading turnaround

The autograder will be run at 6am to calculate final scores. Scores will be
uploaded to D2L by the next class period.
