---
collection: teaching
title: "Classwork 23"
---

## Logistics
* Due: Monday, May 1st AoE.
* Submission instructions: make sure that the required file (`flags.c`) is in your
	`/classwork/week15/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice using bitwise operators

## Assignment

If on campus and connected to a MSU network:
* Log in to the server.
* From your home directory, navigate to `classwork/week15/mon/`, creating directories `week15`
and `mon` if necessary.
* Copy the `flags.c` file from `/public/classwork/week15/mon` and fill in the
    two TODOs. Don't change the if statements or print statements.

If off campus:
* Copy the code below. Using a C compiler of your choice (if you don't have
	one, use https://www.jdoodle.com/c-online-compiler/), fill in the
    two TODOs. Don't change the if statements or print statements. Your program
	should print
```
First flag set
Second flag set
Third flag set
Second flag set
Third flag set
```
* In a DM to Lucy on Discord, copy your code. Surround your code with three
    backticks (\`), found under the tilde (~) on your keyboard, on the first line and last line so that Discord doesn't
    think asterisks are meant to italicize. Or attach it as a file.

## Autograder

You can run the autograder yourself by running
```
/public/classwork/week15/mon/autograder.sh
```
The `autograder.txt` file will be created or
replaced. You may get a few lines of output about not being able to remove
files, etc. This is okay.

For those who DM their code, if your program has the output
```
First flag set
Second flag set
Third flag set
Second flag set
Third flag set
```
you will get full credit.

## Code to copy

```
#include <stdio.h>
#define FIRST_FLAG 0b1
#define SECOND_FLAG 0b10
#define THIRD_FLAG 0b10000

int main() {
	int flags = 0;

	// TODO: set all three flags on using bitwise or (|)

	// don't change these
	if (flags & FIRST_FLAG) {
		printf("First flag set\n");
	}
	if (flags & SECOND_FLAG) {
		printf("Second flag set\n");
	}
	if (flags & THIRD_FLAG) {
		printf("Third flag set\n");
	}

	// TODO: turn FIRST_FLAG off using bitwise and (&) and bitwise not (~)

	// don't change these
	if (flags & FIRST_FLAG) {
		printf("First flag set\n");
	}
	if (flags & SECOND_FLAG) {
		printf("Second flag set\n");
	}
	if (flags & THIRD_FLAG) {
		printf("Third flag set\n");
	}
}
```
