---
collection: teaching
title: "Lab 4"
---

## Logistics
* Due: Friday, September 22nd AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `lab4.c` in your `~/csci112_fall2023/labs/lab4`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab4`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://lgw2.github.io/teaching/csci112-fall-2023/classwork/classwork4/).)

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
* Practice using `if` statements.
* Practice using loops.

## Assignment

Write a program to process a collection of daily high temperatures. Your
program should count  the number of hot days (high temperature 85 or
higher), the number of pleasant days (high temperature 60-84), and the number
of cold days (high temperatures less than 60). Then, it should print a
visualization of those numbers (see sample output for an example) and the
average temperature.

### Example output
If you type in the numbers directly to the console, your output should look
like this:
```
[p19t655@csci112 lab4]$ ./a.out
Enter a high temp reading (-99 to quit)> 56
Enter a high temp reading (-99 to quit)> 76
Enter a high temp reading (-99 to quit)> 12
Enter a high temp reading (-99 to quit)> 34
Enter a high temp reading (-99 to quit)> 55
Enter a high temp reading (-99 to quit)> 99
Enter a high temp reading (-99 to quit)> 101
Enter a high temp reading (-99 to quit)> 90
Enter a high temp reading (-99 to quit)> 87
Enter a high temp reading (-99 to quit)> 43
Enter a high temp reading (-99 to quit)> -12
Enter a high temp reading (-99 to quit)> 9
Enter a high temp reading (-99 to quit)> -99

H: ****
P: *
C: *******
Average temperature: 54.2
```
If you use redirection with the sample input file, it will look like this:
```
[p19t655@csci112 lab4]$ ./lab4 </public/labs/lab4/input.txt
Enter a high temp reading (-99 to quit)> Enter a high temp reading (-99 to quit)> Enter a high temp reading (-99 to quit)> Enter a high temp reading (-99 to quit)> Enter a high temp reading (-99 to quit)> Enter a high temp reading (-99 to quit)> Enter a high temp reading (-99 to quit)> Enter a high temp reading (-99 to quit)> Enter a high temp reading (-99 to quit)> Enter a high temp reading (-99 to quit)> Enter a high temp reading (-99 to quit)> Enter a high temp reading (-99 to quit)> Enter a high temp reading (-99 to quit)>
H: ****
P: *
C: *******
Average temperature: 54.2
```

## Grading--100 points

* 5: source file exists with correct name in correct location
* 5: source file compiles
* 5: source file compiles without warnings
* 10: prompts to user match exactly
* 10: outputs to user match exactly
* 5 points: the program stops collecting data when the user enters -99

For each of 3 tests,

* 5 points: hot temperatures are visualized correctly
* 5 points: pleasant temperatures are visualized correctly
* 5 points: cold temperatures are visualized correctly
* 5 points: the average temperature is correct

### Autograder

You can run the autograder using

```
/public/labs/lab4/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time the Wednesday after the due date.
