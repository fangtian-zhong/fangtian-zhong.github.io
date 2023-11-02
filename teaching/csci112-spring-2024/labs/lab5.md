---
collection: teaching
title: "Lab 5"
---

## Logistics
* Due: Friday, September 29th AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `lab5.c` in your `~/csci112_fall2023/labs/lab5`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab5`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://lgw2.github.io/teaching/csci112-fall-2023/classwork/classwork4/).)

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
* Practice using arrays.
* Practice using loops.

## Assignment

Write a program that can compute the grades and some summary statistics for an
exam with up to 9 questions for up to 9 students. You receive the information about the exam from standard input (so you
should use `scanf`), but you should read it using file redirection instead of
typing the input.

The first line of the input file contains the number of questions followed by the correct
answer for each question. All of the following lines contain a student id
number followed by that student's answers to each question.

An example input
file can be found in `/public/labs/lab5/results.txt`. It looks like this:

```
7 ccddabc
100 bcddabc
107 ccddcba
112 aaddabc
115 bbccabc
120 cdcdabd
87 ccddabc
```
meaning that there were 7 questions on the exam and six students took it.

Your program should print out a report about the exam that shows the correct
answer for each question, the grade for each student (by ID and in the same
order that they were passed in), and a count of the number of students who
missed each question. For example,
your program should output the following
given the provided `results.txt` file.

```
Question : 1 2 3 4 5 6 7
Answer   : c c d d a b c
ID    Grade(%)
100   85.71
107   71.43
112   71.43
115   42.86
120   57.14
87    100.00
Question : 1 2 3 4 5 6 7
Missed by: 3 3 2 1 1 0 2
```

As always, make sure you match the output formatting exactly so that the
autograder can read your answers.

### Hints

* There is some code to get you started in `/public/labs/lab5/lab5_starter.c`
	if you would like to use it.
* Note that you can specify the field width in `printf`, similar to how you
	specify the precision (or number of decimal places). For example,
	```
    printf("The answer is %5d\n", 42);
	```
	prints
	```
	The answer is    42
	```
	You can left-justify the output by putting a negative in front of the
	field width, like so:
	```
    printf("The answer is %-5d\n", 42);
	```
* You can assume that there are between 1 and 9 students.
* Some more example inputs can be found in `/public/labs/lab5/`.


## Grading--100 points

* 10: source file exists with correct name in correct location
* 10: source file compiles without warnings
* 10: printing answers is formatted correctly
* 15: printing scores by ID is formatted correctly
* 10: printing number of questions missed is formatted correctly

For each of 3 tests,

* 5: answers are correct
* 5: grades are correct
* 5: number missed are correct

### Autograder

You can run the autograder using

```
/public/labs/lab5/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time the Wednesday after the due date.
