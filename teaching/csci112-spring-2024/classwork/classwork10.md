---
collection: teaching
title: "Classwork 10"
---

## Logistics
* Due: Monday, September 25th AoE.
* Submission instructions: make sure that the required file (`2d.c`) is in your
	`/classwork/week6/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice using two-dimensional arrays.

## Assignment

* Log in to the server.
* From your `csci11_fall2023` directory, navigate to `classwork/week6/mon/`, creating directories `week6` and `mon` if necessary.
* Inside this directory, create a file called `2d.c`. In it, write a
	program solving the following problem.
* Note that you can optionally start from the code in
	`/public/classwork/week6/mon/starter.c`.

Write a program that creates a 3 by 5 array of integers and uses it to store data from
`stdin`. Specifically, you should use `scanf` to read the integers. For
example, you may get input that looks like this:

```
12 15 19 0 4
17 16 13 21 4
22 27 30 32 12
```

You can assume that there will be exactly 3 rows (the first dimension of
your array) and exactly 5 columns (the second dimension of your array) in
the input.

After saving the data in the array, print the sum of the numbers in each row.

You can use redirection (`<`) with the file in `/public/classwork/week6/mon/input.txt` to test your
program as you are developing it. Specifically, if you compiled your source
code into a file called `exe`, you would run

```
./exe < /public/classwork/week6/mon/input.txt
```

For example, compiling and running your program should look like this:

```
[p19t655@csci112 mon]$ gcc -o exe -Wall 2d.c
[p19t655@csci112 mon]$ ./exe < /public/classwork/week6/mon/input.txt
Row 0 has total 50.
Row 1 has total 71.
Row 2 has total 123.
```

You can run the autograder by running
```
/public/classwork/week6/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
