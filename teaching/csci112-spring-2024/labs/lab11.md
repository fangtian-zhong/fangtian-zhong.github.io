---
collection: teaching
title: "Lab 11"
---

## Logistics
* Due: Friday, November 17th AoE.
* Submission instructions: ensure that you have the files for this assignment in your `~/csci112_fall2023/labs/lab11`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab11`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://lgw2.github.io/teaching/csci112-fall-2023/classwork/classwork4/).)

## Outside resources

On this assignment, you may not use the internet or generative AI such as
ChatGPT to solicit solutions to the programming part of the assignment. If you
are having trouble writing your program, please go to lab (Fridays, 12-4 in
Roberts 111) or post in Discord to
get help.

However, you may use those resources for help with navigating the Linux
terminal, using vim, and using git, although you may get better answers to your
questions by going to lab or posting on Discord anyway.

## Learning outcomes
* Practice using pointers to create a linked list.
* Practice using `malloc` and `free` to dynamically allocate and deallocate
	memory.

## Assignment

Starting with files `main.c`, `team.h`, and `team.c` in `/public/labs/lab11/`,
edit the function definitions in `team.c` so that your program
uses a `Team` struct to represent a group of
people (represented with `People` structs) as a linked list, and has
functionality for adding to the list, deleting from it, and printing it out.
You should not change `main.c` or `team.h` at all.

Here's a description of the functions you need to implement:
* `create_new_person` should return a pointer to a `Person` allocated on the
	heap with the passed `name` and a `next` set to `NULL`.
* `insert_person_at_front` should put the passed `Person` pointer at the front
	of the `Team`'s linked list.
* `print_team` should print the team in the format shown in the sample output.
* `delete_person_at_front` should remove the first person in the linked list.
	Make sure to use `free` to free the memory allocated for the person you
	removed. If the list is already empty, this function should do nothing.
* `is_empty` should return `1` if the list is empty and `0` otherwise.

## Hints

You don't need to write very much code for this lab, but you do need to be
careful when thinking about when to dereference pointers, how to set `next`
pointers in your linked list, and how to free your memory correctly. Don't try
to guess in order to fix your issues! Try drawing a picture of what your code
should be doing and what it is doing as written.

### Sample runs

Here's one:

```
[p19t655@csci112 lab11]$ ./lab11
How many people are on the team? > 5
  Enter person's name > bob
  Enter person's name > sally
  Enter person's name > chris
  Enter person's name > doug
  Enter person's name > arthur

Current team:
arthur->doug->chris->sally->bob->

How many team members would you like to delete? > 2

Current team:
chris->sally->bob->

How many team members would you like to add? > 1
  Enter person's name > eustace

Current team:
eustace->chris->sally->bob->

```

And another:

```
[p19t655@csci112 lab11]$ ./lab11
How many people are on the team? > 1
  Enter person's name > Alexis

Current team:
Alexis->

How many team members would you like to delete? > 100

Current team:


How many team members would you like to add? > 1
  Enter person's name > Betty

Current team:
Betty->

```

As always, match the output format exactly.

## Grading--100 points

* 5: `team.c` defines the functions from `team.h`
* 5: `make` compiles the executable `lab11` without warnings
* 10: `main.c` and `team.h` are unchanged
* 10: no typecasts are used
* 40: correct output for four test cases
* 20: no memory leaks for four test cases
* 10: uses heap memory for `Person` nodes

### Autograder

You can run the autograder using

```
/public/labs/lab11/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time the Wednesday after the due date.
