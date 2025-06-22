---
collection: teaching
title: "Lab 1"
---

## Logistics
* Due: Friday, January 24th AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `project1.c` in your Canvas submission
	directory.

## Learning outcomes
This assignment is meant to be a low stakes way to introduce you to this course and some of the technologies we will use. You may have opportunities to complete parts of this assignment in class, but you should plan to work on this outside of class as well. Of particular importance, by the end of this assignment you should be setup with a suitable environment for completing assignments for this course. You will also have had the chance to practice with tools we’ll be using this semester. Besides, the project requires you to parse two applications with different architectures for their DOS headers, NT headers (including signature, coff header and optional header), and section headers and print out their values in a format like (field name: field value). The codes should be written in C or C++. 


## Assignment

This project requires you to parse two applications with different architectures for their DOS headers, NT headers (including signature, coff header and optional header), and section headers and print out their values in a format like (field name: field value). The codes should be written in C or C++.

* Download Microsoft Visual Studio, Community Version on your machine.To ensure the compability, all students should use the same IDE.
* Download firefox on your machine. You should use Firefox browser to download the applications because Google Chrome does not allow you to download malware
* Download applications on your machine. One application is 32-bit executable, the other 64-bit executable.
* Follow the format to print out their values.
  ** For example, Dos Header has 19 fields, you print like:
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
Scores will be uploaded to D2L by class time on Wednesday, January 29th.
