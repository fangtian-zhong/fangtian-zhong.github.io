---
collection: teaching
title: "Classwork 8"
---

## Logistics
* Due: Monday, September 18th AoE.
* Submission instructions: make sure that the required file (`get_num.c`) is in your
	`/classwork/week5/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice using do-while loops.
* Practice using the value returned by `scanf`.

## Assignment

* Log in to the server.
* From your home directory, navigate to `classwork/week5/mon/`, creating directories `week5` and `mon` if necessary.
* Inside this directory, create a file called `get_num.c`. In it, write a
	program solving the following problem.

Write a program that prompts the user to enter a number between 0 and 100, and
keeps prompting them as long as they enter numbers that are outside that range.
If they don't enter a number, print a message saying so. Otherwise, once they
do enter a number in the range, print it out with two decimal places. **You may
optionally start with the code in `/public/classwork/week5/mon/starter.c`.**

Here are some example runs of the program. You must match the formatting
exactly.

```
[p19t655@csci112 mon]$ gcc get_num.c -Wall
[p19t655@csci112 mon]$ ./a.out
Enter a number between 0 and 100: (decimals okay): -95
Enter a number between 0 and 100: (decimals okay): 101.22
Enter a number between 0 and 100: (decimals okay): 55.5
You entered 55.50
[p19t655@csci112 mon]$ ./a.out
Enter a number between 0 and 100: (decimals okay): x
You didn't enter a number
```

You can run the autograder by running
```
/public/classwork/week5/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
