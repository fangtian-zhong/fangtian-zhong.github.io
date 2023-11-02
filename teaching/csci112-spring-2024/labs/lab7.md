---
collection: teaching
title: "Lab 7"
---

## Logistics
* Due: Friday, October 13th AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `lab7.c` in your `~/csci112_fall2023/labs/lab7`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab7`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://lgw2.github.io/teaching/csci112-fall-2023/classwork/classwork4/).)

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
* Practice using file pointers.
* Practice working with strings in C.
* Practice using `strtok` to tokenize a string.

## Assignment

In this lab, you will build off of your Lab 6 solution (or the solution
provided in `/public/labs/lab6/solution.c` by class time on Monday, October
9th) to read in a file of strings (instead of doubles), sort them, and then
print information from the strings in a pleasing manner.

Starting from your Lab 6 solution, change from reading the file
`/public/labs/lab6/numbers.txt` to `/public/labs/lab7/counties1.txt`.
This file lists all of the counties of Montana, along with information about
them: their county seat, the date they were created, an explanation of their
name, their population, and their geographical size.

```
Beaverhead County|Dillon|February 2, 1865|Beaverhead Rock in the Jefferson River, which is shaped like a beaver's head.|9,719|5,543 sq mi(14,356 km2)
Big Horn County|Hardin|January 13, 1913|Bighorn sheep in the area.|12,851|4,995 sq mi(12,937 km2)
```

Read in each line of the file using `fgets` (not `fscanf`!) so that each line
is saved as a string in an array of strings.

Then, change your existing sorting code so that it sorts your array of strings
instead of an array of doubles. Remember that you will need to use string
functions like `strcmp` and `strcpy` to do string comparison and string
assignment. For this assignment, you do not need to print out the original
array or each step of the sorting.

Finally, write the sorted list of counties to a file called `outdata_strings.txt` in
your current directory, but only print the name,
population, and county seat, like so:

```
Beaverhead County has population 9,719 and seat Dillon
Big Horn County has population 12,851 and seat Hardin
```

To do so, you should use `strtok` to parse the string.

You can see a correct output file for `counties1.txt` in
`/public/labs/lab7/outdata_strings.txt`.

As always, make sure you match the output formatting exactly so that the
autograder can read your answers.

### Hints

* To pass a two-dimensional array as a parameter in a function, you need to
	specify the size of the second dimension. For example,
``` void func(char arr[][100]) {
```
takes in a character array `arr`, which can store as many strings as needed,
but each can only take up 100 total slots.
* You can assume that there will be no more than 100 counties and that the
	lines are no more than 499 characters long.

## Grading--100 points

* 10: source file exists with correct name in correct location
* 10: source file compiles without warnings
* 5: reads from `/public/labs/lab7/counties1.txt`
* 5: uses `fgets` to read from `/public/labs/lab7/counties1.txt`
* 5: uses `fprintf` to write to `outdata_strings.txt`
* 10: uses `strtok` to separate parts of the line
* 5: printing is formatted correctly in `outdata_strings.txt`

For each of 2 tests,

* 15: `outdata_strings.txt` is sorted
* 10: `outdata_strings.txt` includes correct county name, population, and county seat

### Autograder

You can run the autograder using

```
/public/labs/lab7/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time the Wednesday after the due dat.
