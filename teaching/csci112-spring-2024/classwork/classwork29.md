---
collection: teaching
title: "Classwork 29"
---

## Logistics
* Due: Wednesday, December 6th AoE.
* Submission instructions: make sure that the required files are in your
	`csci112_fall2023/classwork/week15/wed/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* use bit operators to print the decimal representation of an integer

## Assignment

* Log in to the server.
* From your home directory, navigate to `csci112_fall2023/classwork/week15/wed/`, creating directories `week15`
and `wed` if necessary.
* Copy the file `binary.c` from the `/public/classwork/week15/wed/` directory into your directory.

Implement the function `print_binary` so that it prints all 32 bits of the
number passed in. For example, the decimal number 50 should print

```
0000 0000 0000 0000 0000 0000 0011 0010
```

There is a short solution using bitwise operators and bit masking and
one for loop.

### Hints

* You can't access a bit position by indexing like you could an array--instead,
	use a shift operator

## Autograder

You can run the autograder by running

```
/public/classwork/week15/wed/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround

The autograder will be run at 6am to calculate final scores. Scores will be
uploaded to D2L by the next class period.
