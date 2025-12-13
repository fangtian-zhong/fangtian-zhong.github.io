---
collection: teaching
title: "Program 1"
---

## Logistics
* Due: ~~Friday, March 24th AoE~~ extended to Wednesday, March 29th AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `program1.c` in your `~/csci112_spring2023/programs/program1`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `program1`. See the [git lecture](https://lgw2.github.io/teaching/csci112-spring-2023/lectures/lecture2) and [classwork 4](https://lgw2.github.io/teaching/csci112-spring-2023/classwork/classwork4) for more
	details.
* Note that grading will be done on D2L, so you can see comments and a
	 detailed breakdown of your score there, but you do not need to submit
	anything there.

## Learning outcomes
* Practice input and output with strings
* Practice reading from files using `fgets`
* Practice sorting
* Practice tokenizing strings using `strtok`

## Assignment

You are to write a program that will read information about Nobel prize winners
since 2002. Read the file `/public/programs/program1/nobel.csv`. Write the
winners in alphabetical order by first name to a file called `winners.txt` in
the same directory as your program. Write the first and last name, university,
and year. For example, the first line of `winners.txt` could look like:

```
Aaron Ciechanover of Technion - Israel Institute of Technology won in 2004
```

There is a full example output that you can check against in
`/public/programs/program1/winners.txt`. You do not need to match the output
format if you don't want to, but the order and data included on each line
should be correct.

### Hints

* Note that there are some special character in some names that may not display
correctly. Don't worry about that.
* There is code for selection sort on an array of integers in `/public/classwork/week7/mon/solution.c` that
you can use as a reference for sorting.

## Grading - 100 points
**If your code does not compile, has a runtime error on the sample input,
or uses global variables (variables declared outside of main), you get an
automatic 0.**
* 5 points: opens `/public/programs/program1/nobel.csv` for reading using `fopen`
* 5 points: opens `winners.txt` for writing using `fopen`
* 5 points: successfully reads input from file
* 5 points: successfully writes output to file
* 10 points: stores each line (or a string related to each line) in an array of strings
* 5 points: uses `fgets` to read each line
* 15 points: successfully sorts the data alphabetically by first name
* 10 points: uses`strtok` to separate parts of the line
* 5 points: prints the first name, last name, university, and year of each
	winner
* 5 points: prints in a pleasing manner
* 10 points: uses at least two functions in addition to main
* 10 points: source code is in a commit with tag `program1`
* 10 points: source code is in `csci112_spring2023/programs/program1` directory

## Grading turnaround
This program will be graded within one week of its due date.
