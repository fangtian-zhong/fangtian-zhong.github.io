---
collection: teaching
title: "Lab 6"
---

## Logistics
* Due: Friday, October 6th AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `lab6.c` in your `~/csci112_fall2023/labs/lab6`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab6`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://lgw2.github.io/teaching/csci112-fall-2023/classwork/classwork4/).)

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
* Practice using file pointers.
* Practice sorting an array.

## Assignment

In this lab, you will write a program that can read in unsorted doubles from a file and print them
out in sorted order in a different file.

For this assignment, you can hard-code the input filename into your program.
The input file can be found in `/public/labs/lab6/numbers.txt` and it looks like this:

```
[p19t655@csci112 lab6]$ cat /public/labs/lab6/numbers.txt
34.56 -0.01 9.7
5.55 3.14 3.3303330303 1.0 -45.99
18.1
```

In general, the file will have up to 100 doubles separated by whitespace. You must
read the file using `fscanf`, *not* using redirection and `scanf`, and you
should store the doubles in an array.

Your program must use selection sort (see [slides on arrays](https://lgw2.github.io/teaching/csci112-fall-2023/lectures/Chapter7.pdf)) to sort the numbers in ascending order (smallest first) and
write them to a new file called `outdata.txt` in the directory where the program
is being run. You should use `fprintf` to write to the file.

As your program runs, it should print out the current state of
the array, like so:

```
[p19t655@csci112 lab6]$ gcc lab6.c -Wall
[p19t655@csci112 lab6]$ ./a.out
Before sorting, arr of numbers is
34.56 -0.11 9.70 5.55 3.14 3.33 1.00 -45.99 18.10
Now performing selection sort:
-45.99 -0.11 9.70 5.55 3.14 3.33 1.00 34.56 18.10
-45.99 -0.11 9.70 5.55 3.14 3.33 1.00 34.56 18.10
-45.99 -0.11 1.00 5.55 3.14 3.33 9.70 34.56 18.10
-45.99 -0.11 1.00 3.14 5.55 3.33 9.70 34.56 18.10
-45.99 -0.11 1.00 3.14 3.33 5.55 9.70 34.56 18.10
-45.99 -0.11 1.00 3.14 3.33 5.55 9.70 34.56 18.10
-45.99 -0.11 1.00 3.14 3.33 5.55 9.70 34.56 18.10
-45.99 -0.11 1.00 3.14 3.33 5.55 9.70 18.10 34.56
```

Then, you should also write the sorted array to `outdata.txt` with one number
per line, like this:

```
[p19t655@csci112 lab6]$ cat outdata.txt
-45.99
-0.01
1.00
3.14
3.33
5.55
9.70
18.10
34.56
```

As always, make sure you match the output formatting exactly so that the
autograder can read your answers.

### Hints

* Since you know you will get no more than 100 doubles in the input file, you
	can declare an array to store the numbers with 100 slots.
* Follow the selection sort pseudocode from the slides carefully.

## Grading--100 points

* 10: source file exists with correct name in correct location
* 10: source file compiles without warnings
* 5: uses `fscanf` to read from `/public/labs/lab6/numbers.txt`
* 5: uses `fprintf` to write to `outdata.txt`
* 5: printing arrays is formatted correctly in output to console
* 5: printing arrays is formatted correctly in `outdata.txt`

For each of 3 tests,

* 5: numbers are read in correctly
* 5: intermediate sorting steps are correct in output to console
* 10: final sorted output in `outdata.txt` is correct

### Autograder

You can run the autograder using

```
/public/labs/lab6/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time the Wednesday after the due date.
