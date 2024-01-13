---
collection: teaching
title: "Classwork 25"
---

## Logistics
* Due: Wednesday, November 15th AoE.
* Submission instructions: make sure that the required files are in your
	`csci112_fall2023/classwork/week13/wed/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Write a complex function for a linked list

## Assignment

* Log in to the server.
* From your home directory, navigate to `csci112_fall2023/classwork/week13/wed/`, creating directories `week13`
and `wed` if necessary.
* Copy the files `main.c`, `team.c`, and `team.h` from the `/public/classwork/week13/wed/` directory into your directory.

**You will only need to change `team.c`**.

Note that these files are very similar to the Lab 11 files. In this classwork,
you will implement the `insert_person_at_back` function, which is not included
in Lab 11, but is included here for practice.

This function should find the last node in the list of `Person`s at `team`'s
`head` and add a new `Person` at the end. Just like in class, make sure that
you also account for the case where the list is empty.

After you have implemented `insert_person_at_back`, compiling and running your
code should look like this:

```
[p19t655@csci112 wed]$ ls
main.c  team.c  team.h
[p19t655@csci112 wed]$ gcc main.c team.c -Wall
[p19t655@csci112 wed]$ ls
a.out  main.c  team.c  team.h
[p19t655@csci112 wed]$ ./a.out
  Enter person's name > Bob
  Enter person's name > Sally

Current team:
Bob->Sally->

```

## Autograder

You can run the autograder by running

```
/public/classwork/week13/wed/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround

The autograder will be run at 6am to calculate final scores. Scores will be
uploaded to D2L by the next class period.
