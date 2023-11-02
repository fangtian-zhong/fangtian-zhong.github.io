---
collection: teaching
title: "Lab 9"
---

## Logistics
* Due: Friday, October 27th AoE.
* Submission instructions: ensure that you have the eight files for this assignment in your `~/csci112_fall2023/labs/lab9`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab9`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://lgw2.github.io/teaching/csci112-fall-2023/classwork/classwork4/).)

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
* Practice splitting a C program into separate files.
* Practice writing a `Makefile`.
* Practice compiling a C program with `make`.

## Assignment

In this lab, you split your Lab 8 solution (or the solution
provided in `/public/labs/lab8/solution.c` by class time on Monday, October
23rd) into multiple header (`.h`) and source code (`.c`) files. You will also
write a `Makefile` so that you can recompile only code that is affected by a
change.

**Note:** you should not need to write any new code in this assignment, except
perhaps function prototypes. If you use your own Lab
8 solution and you don't have functions for sorting or any additional utility functions, you
can add those so that you have things to put in the sorting and utility files
described below. But you should not change the functionality of the program.

### Files

You will need eight total files for this assignment.

* `lab9.c` should contain your `main` function and no other C code. (It should
	also contain some `#include` preprocessor directives.)
* `county.h` should hold the `County` struct definition and function prototypes
	for any county-related functions; at minimum, it should have a function
	prototype for `add_county`.
* `county.c` should contain the definition of any functions in `county.h`.
* `sort.h` should contain function prototypes for any sorting-related
	functions. If you are using the provided Lab 8 solution, these are
	`get_min_in_range` and `sort`.
* `sort.c` should contain the definitions of any functions in `sort.h`.
* `utils.h` should contain prototypes for any extra "utility" functions. If
	you are using the provided Lab 8 solution, these are `menu`, `find_seat`,
	and `find_range`.
* `utils.c` should contain the definitions of any functions in `utils.h`.
* `Makefile` should provide a set of rules for compiling your program.

### Header guards

All `.h` files should include header guards.

### Makefile

Your makefile should encode the dependencies of your program and result in a
final executable called `lab9`. If you used the
Lab 8 solution, your dependencies are:

* the Lab 9 executable `lab9` depends on object files compiled from `lab9.c`,
	`sort.c`, `county.c`, and `utils.c`.
* the lab 9 object file depends on `lab9.c` and `county.h`
* the sort object file depends on `sort.c` and `sort.h`
* the county object file depends on `county.c` and `county.h`
* the utils object file depends on `utils.c`, `utils.h`, and `county.h`

### Hints

## Grading--100 points

* 10: all eight files exists with correct name in correct location
* 20: `make` compiles `lab9` without warnings
* 20: `lab9` still works as Lab 8 (passes tests from Lab 8 autograder)
* 10: all header files have header guards
* 10: `lab9.c` contains `main` and no other source code
* 5 each: `county.c` defines functions in `county.h`, `sort.c` defines
	functions in `sort.h`, `utils.c` defines functions in `utils.h`.
* 10: `Makefile` encodes the dependencies of the program so that only code that
	needs to be recompiled is recompiled
* 5: `county.h` contains the definition for a `County` struct

### Autograder

You can run the autograder using

```
/public/labs/lab9/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time the Wednesday after the due date.
