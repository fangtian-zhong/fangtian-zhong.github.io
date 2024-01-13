---
collection: teaching
title: "Classwork 26"
---

## Logistics
* Due: Monday, November 27th AoE.
* Submission instructions: make sure that the required file (`realloc.c`) is in your
	`csci112_fall2023/classwork/week14/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice using `realloc`
* Practice checking whether a memory allocation was successful
* Practice freeing memory

## Assignment

* Log in to the server.
* From your home directory, navigate to `csci112_fall2023/classwork/week14/mon/`, creating directories `week14`
and `mon` if necessary.
* Copy the file `/public/classwork/week14/mon/realloc.c` into your directory.

Fill in the three `TODO` items so that the program attempts too allocate an
array of ints on the heap, and if successful, then attempts to reallocate the same data to
a different sized array of ints on the heap. Be sure to `free` memory as
needed! You may need to think about how to ensure that all memory is freed in
the event that your `realloc` call is unsuccessful.

Here are a few sample runs:

```
[p19t655@csci112 mon]$ gcc realloc.c -Wall
[p19t655@csci112 mon]$ ./a.out
How many integers would you like to store? 10
Allocating space for 10 ints
How many do you want to store now? 5000
Allocating space for 5000 ints
[p19t655@csci112 mon]$ ./a.out
How many integers would you like to store? 1000
Allocating space for 1000 ints
How many do you want to store now? 1000000000000
Allocating space for 1000000000000 ints
Not enough memory
[p19t655@csci112 mon]$ ./a.out
How many integers would you like to store? 100000000000
Allocating space for 100000000000 ints
Not enough memory
```

## Autograder

You can run the autograder by running

```
/public/classwork/week14/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround

The autograder will be run at 6am to calculate final scores. Scores will be
uploaded to D2L by the next class period.
