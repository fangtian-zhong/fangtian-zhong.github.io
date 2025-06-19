---
collection: teaching
title: "Classwork 2: Hello, World!"
---

## Logistics
* Due: Tuesday, May 11th no later than 1:35pm.
* Submission instructions: push a commit with the tag `classwork2` to your git
	repository.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment. If the deadline is approaching, submit what you have in
	order to earn partial credit.

## Learning outcomes
* Practice using `ssh` to access the course server and using basic Linux
	commands.
* Practice using `git` to version control your work.
* Practice reading and editing files using vim.
* Compile and run a c program from the Linux terminal.

## Assignment

* Inside the `classwork` directory, create another directory called
	`classwork2`. Inside that directory, create a file called `hellow_world.c`.
	In that file, put the following:

```
#include <stdio.h>
/* <put your name>
* Classwork 2, CSCI 112
* <current date>
*/

int main(void) {
	// prints "Hello, World"
	printf("Hello, World\n");
	// exit with no errors
	return(0);
}
```
* Compile your program into an executable called `hello_world` and run it using `./hello_world`.

## Grading - 10 points
* 1 point - there is a file called `hello_world.c` in your
	`classwork/classwork2` directory.
* 9 points - it can be compiled and runs.

Note: you will not earn any points if your work is not committed and pushed to
Github with the tag `classwork2`.

## Grading turnaround
This classwork will be graded with scores in Brightspace by 5pm the day it is
due (May 11th).
