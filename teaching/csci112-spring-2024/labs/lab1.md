---
collection: teaching
title: "Lab 1"
---

## Logistics
* Due: Friday, September 1st AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `lab1.c` in your `~/csci112_fall2023/labs/lab1`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab1`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://lgw2.github.io/teaching/csci112-fall-2023/classwork/classwork4/).)

## Outside resources

On this assignment, you may not use the the internet or generative AI such as
ChatGPT to solicit solutions to the programming part of the assignment. If you
are having trouble writing your program, please go to lab (Fridays, 12-4 in
Roberts 111) or post in Discord to
get help.

However, you may use those resources for help with navigating the Linux
terminal, using vim, and using git, although you may get better answers to your
questions by going to lab or posting on Discord anyway.

## Learning outcomes
* Make sure that your `git` repository is set up correctly.
* Stage, commit, and tag the state of your repository.
* Use prepocessor directives (e.g., `#include`, `#define`).
* Get input from the console.
* Do a basic calculation in C.
* Print and format output.
* Become familiar with the autograder for labs.


## Assignment

In a file called `lab1.c` in your `csci112_fall2023/labs/lab1` directory, write a program that estimates the temperature in a freezer (in degrees
Celsius) given the elapsed time (hours) since a power failure. Assume this
temperature ($T$) is given by

$$T=\frac{3t^2}{t+1} - 10$$

where $t$ is the time since the power failure. Your program should prompt the
user to enter how long it has been since the start of the power failure in
whole hours and minutes. Note that you will need to convert the elapsed time
into hours. For example, if the user entered 2 30 (2 hours 30 minutes), you
would need to convert this to 2.5 hours.

### Requirements

You must:
* include the `stdio` library
* use a constant macro preprocessor directive

### Input/output format

For this assignment, you must match the output format exactly, and take input
from the user precisely as described.

You must prompt the user as follows:

```
Hours and minutes since power outage? (e.g., 2 30 for 2 hours, 30 minutes)
```
And you should print the result as follows, with exactly two numbers after the
decimal point:

```
Estimated current temperature: -4.64 degrees Celsius
```

Thus, a full run of your program might look like this:

```
Hours and minutes since power outage? (e.g., 2 30 for 2 hours, 30 minutes) 2 30
Estimated current temperature: -4.64 degrees Celsius
```

## Grading--100 points
* 10: source file exists with correct name in correct location
* 10: source file compiles
* 10: source file compiles without warnings
* 5: includes `stdio.h`
* 5: defines a constant macro
* 5: prompt to user matches exactly
* 5: output reporting temperature matches exactly
* 10: prints temperature with exactly 2 decimal places
* 10 points each: computes correct temperature for 4 test cases

### Autograder

You can run the autograder using

```
/public/labs/lab1/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time on Wednesday, September 6th.
