---
collection: teaching
title: "Lab 8"
---

## Logistics
* Due: Friday, October 20th AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `lab8.c` in your `~/csci112_fall2023/labs/lab8`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab8`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://lgw2.github.io/teaching/csci112-fall-2023/classwork/classwork4/).)

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
* Practice using structs.

## Assignment

In this lab, you will build off of your Lab 7 solution (or the solution
provided in `/public/labs/lab7/solution.c` by class time on Monday, October
16th) to build an interactive database of counties, where a user can
search for counties within a population range or by county seat.

**Note:** be sure to change from reading from `/public/labs/lab7/counties1.txt`
to `/public/labs/lab8/counties1.txt`. The Lab 8 version has commas removed from
the population field, which will make it easier to parse that as an
integer.

Starting from the existing code, define your own `struct` called `County`
with the following data members:
* a string `name` (you may assume name has no more than 99 characters);
* a string `seat` (you may assume seat has no more than 19 characters),
* and an int `pop`.

Then, store the data about each county as a `County` in an array of type `County`. To do so, you must define and use a
function `add_county` that returns a `County` and takes in a string for the
county name, a string for the county seat, and an int for the population, in
that order. That
is, your function header might look like

```
County add_county(char* name, char* seat, int pop)
```

or

```
County add_county(char name[100], char seat[20], int pop)
```

Additionally, you must use `sscanf` to convert the population from a string to
an `int`.

Prompt the user to interact with the database like so:

```
~~~Welcome to the county database!
~~~To search for a county by seat, press 1.
~~~To search for counties within a population range, press 2.
~~~To exit, press any other key.
```

If the user enters 1, ask for a county seat, print the result, and then give
the prompt again. If the user enters 2, ask for an upper and lower bound, and
print all counties with populations in those bounds. For example:

```
~~~Welcome to the county database!
~~~To search for a county by seat, press 1.
~~~To search for counties within a population range, press 2.
~~~To exit, press any other key.
1
Enter a county seat to search for: Helena
Lewis and Clark County has seat Helena
~~~To search for a county by seat, press 1.
~~~To search for counties within a population range, press 2.
~~~To exit, press any other key.
2
Enter an upper bound for the population (inclusive): 2000
Enter a lower bound for the population (inclusive): 0
The counties with populations between 2000 and 0 are:
Carter County, pop. 1382
Daniels County, pop. 1628
Garfield County, pop. 1218
Golden Valley County, pop. 835
Liberty County, pop. 1972
McCone County, pop. 1709
Petroleum County, pop. 524
Powder River County, pop. 1725
Prairie County, pop. 1107
Treasure County, pop. 758
Wibaux County, pop. 919
~~~To search for a county by seat, press 1.
~~~To search for counties within a population range, press 2.
~~~To exit, press any other key.
x
```

Note that if there is more than one county in the population range, they should
be printed in alphabetical order.

As always, make sure you match the output formatting exactly so that the
autograder can read your answers.

### Hints

* It's probably easier to read in an `int` than a `char` to control your loop,
	since `scanf` will read whitespace as a `char`.
* To make the prompt loop, you can use the return value of `scanf`
* If no counties match the seat or population range, you don't need to print
	anything.
* Store your structs in alphabetical order to print them in alphabetical order.

## Grading--100 points

* 10: source file exists with correct name in correct location
* 10: source file compiles without warnings
* 5: uses `sscanf` to convert the population from a string to int
* 5: defines a `County` struct with fields called `name`, `seat`, and `pop`
* 5: creates an array of `County` to store data for all counties
* 5: defines a function `add_county` that returns a `County` and takes in
	variables `name`, `seat`, and `pop`
* 5: calls `add_county`
* 5: reads from `/public/labs/lab8/counties1.txt`

For each of 2 test files,

* 10: county seat query works
* 15: population range query works

### Autograder

You can run the autograder using

```
/public/labs/lab8/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time the Wednesday after the due date.
