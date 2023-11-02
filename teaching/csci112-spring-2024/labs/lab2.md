---
collection: teaching
title: "Lab 2"
---

## Logistics
* Due: Friday, September 8th AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `lab2.c` in your `~/csci112_fall2023/labs/lab2`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab2`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://lgw2.github.io/teaching/csci112-fall-2023/classwork/classwork4/).)

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
* Practice getting input from the console using `scanf`.
* Practice printing using `printf`.
* Reuse code with functions.
* Practice function syntax in C.

## Assignment

In order to earn some extra money over the three-day holiday weekend, you take
a job working security at a music festival. However, the compensation is a bit
complex: the hourly wage is different on different days of the festival.

To make sure you are compensated fairly, you decide to write a program
to compute your total pay based on the hours you worked each day and the hourly
wage promised for that day. As a challenge, and to practice your new knowledge
of using functions to reuse code, you decide not to use the `printf` function
in `main`, nor to use for or while loops.

In a file called `lab2.c` in your `csci112_fall2023/labs/lab2` directory, write a program that computes your earnings over the course of the 3 days.

### Requirements

You must:
* not use any loops
* not use `printf` in `main`

### Input/output format

For this assignment, you must match the output format exactly, and take input
from the user precisely as described.

For each of the three days, you must prompt the user for the number of hours
they worked and the wage for that day.

After receiving information about the hours worked and wage for each day,
report the total pay that you are owed.

Thus, a full run of your program would look like this if you entered `3`,
`21.40`, `5`, `25`, `8`, and `33.33`:

```
Enter hours worked on day 1: 3
Enter hourly wage on day 1: $21.40
Enter hours worked on day 2: 5
Enter hourly wage on day 2: $25
Enter hours worked on day 3: 8
Enter hourly wage on day 3: $33.33

Your total pay is $455.84
```

You can assume that the hours worked will always be a whole number.

## Grading--100 points
* 10: source file exists with correct name in correct location
* 10: source file compiles
* 10: source file compiles without warnings
* 20: does not use `printf` in `main`
* 10: does not use a for or while loop
* 10: prompt to user matches exactly
* 10: output reporting earnings matches exactly (include linebreak and number
	of decimal places)
* 5 points each: computes correct total earnings for 4 test cases

### Autograder

You can run the autograder using

```
/public/labs/lab2/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time on Wednesday, Septmber 13th.
