---
collection: teaching
title: "Lab 12"
---

## Logistics
* Due: Friday, December 1st AoE.
* Submission instructions: ensure that you have the files for this assignment in your `~/csci112_fall2023/labs/lab12`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab12`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://lgw2.github.io/teaching/csci112-fall-2023/classwork/classwork4/).)

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
* Practice using `calloc`, `realloc`, and `free` to dynamically allocate and deallocate
	memory.
* Implement a dynamic array in C.

## Assignment

In this assignment, you will re-implement the program from Lab 11 to use an
array to store the people on the team instead of a linked list. This array will
be stored on the heap, just like the nodes of the linked list, and the array
will be dynamic, meaning that it will use more memory or free memory as needed.

Your program will run via the Lab 12 `main.c`, found in
`/public/labs/lab12/main.c`. Only the initialization code is currently
uncommented; as you implement different parts of your program, you should
uncomment more of `main` to test them out.

Starting with your `team.h`, and `team.c` from Lab 11 (or the
solution found in  `/public/labs/lab11/solution/`),
edit the program so that it implements the list of people as a dynamic
array, rather than a linked list. To do so, implement the following `struct`s
and functions.

### Required `struct`s

Think about how you will need to change `Team` and `Person`. You can
choose exactly how you implement these, but `Team` must hold a pointer to an
array that is allocated on the heap.

You have some freedom in how you implement this lab, which means that the
instructions are less defined than in previous labs. If you have questions, ask
early!

### Functions

Note that we are now inserting and deleting at the back of the list, because it's more
efficient to insert at the back of an array.

Here's a description of the functions you need to have:
* `initialize_team` should take in a pointer to a `Team` and an integer capacity, and
    initialize a team with the given capacity, where the people on the team
    will be stored in an array on the heap. (This means you should have a call to allocate
    memory in this function, such as `calloc`.) You can assume that you will
    never be asked to initialize a team with capacity 0.
* `create_new_person` should return a pointer to a `Person` allocated on the
	heap with the passed `name`.
* `insert_person_at_back` should put the passed `Person` in the first open slot
    of the `Team`'s array. If there is no open slot, it should double the size
    of the array first and then insert it. (You will need a call to `realloc` for this.)
* `print_team` should print the team in the format shown in the sample output.
* `delete_person_at_back` should remove the last element in the array. If, after
    removing, the current size of the array is half of the capacity, you should
    shrink the memory allocated for the array by half. (You will need a call to
    `realloc` for this.) If there are no people on the team, this call should
    do nothing.
* `decommission_team` should take in a pointer to a `Team` and free any heap memory that is being used by the team.

## Hints

* You can have fields in `Team` to keep track of the capacity of the array and the current
    size of the list.
* As with Lab 11, you don't need to write much code for this lab, but you will
    need to think carefully about what your code is doing.
* Be careful about dividing by 0.
* Be careful not to let your array's capacity go down to 0, because then it
    won't double.
* You can use redirection to test your code without having to interact with the
    menu. For example, `./lab12 <<< "10 2 Abraham Sherry 0 1 Fred"` will run
    `lab12` with the input to `stdin` as `10 2 Abraham Sherry 0 1 Fred`,
    meaning that `scanf` will consume those tokens. So your program will create
    a team with capacity 10, add 2, delete 0, and then add 1. You can also use
    this with `valgrind`:
```
valgrind ./lab12 <<< "10 2 Abraham Sherry 0 1 Fred"
```
  will run the program with those inputs with `valgrind` to check for memory
  issues.

### Sample runs

Here's one:

```
[p19t655@csci112 lab12]$ make
gcc -g main.c team.c -o lab12 -Wall
[p19t655@csci112 lab12]$ ls
lab12  main.c  Makefile  team.c  team.h
[p19t655@csci112 lab12]$ ./lab12
What capacity should the team be initialized with? > 5

How many people are on the team? > 8
  Enter person's name > bob
  Enter person's name > nancy
  Enter person's name > bea
  Enter person's name > andrew
  Enter person's name > cedar
  Enter person's name > walter
  Enter person's name > jordan
  Enter person's name > alpha

Current team:
[bob, nancy, bea, andrew, cedar, walter, jordan, alpha]
Capacity is 10 and current size is 8

How many team members would you like to delete? > 2

Current team:
[bob, nancy, bea, andrew, cedar, walter]
Capacity is 10 and current size is 6

How many team members would you like to add? > 5
  Enter person's name > sal
  Enter person's name > evan
  Enter person's name > leo
  Enter person's name > llewyn
  Enter person's name > travis

Current team:
[bob, nancy, bea, andrew, cedar, walter, sal, evan, leo, llewyn, travis]
Capacity is 20 and current size is 11

```

And another:

```
[p19t655@csci112 lab12]$ ./lab12
What capacity should the team be initialized with? > 4

How many people are on the team? > 5
  Enter person's name > a
  Enter person's name > b
  Enter person's name > c
  Enter person's name > d
  Enter person's name > e

Current team:
[a, b, c, d, e]
Capacity is 8 and current size is 5

How many team members would you like to delete? > 10

Current team:
[]
Capacity is 1 and current size is 0

How many team members would you like to add? > 6
  Enter person's name > a
  Enter person's name > b
  Enter person's name > c
  Enter person's name > d
  Enter person's name > e
  Enter person's name > f

Current team:
[a, b, c, d, e, f]
Capacity is 8 and current size is 6

```

As always, match the output format exactly.

## Grading--100 points

* 10: `team.h` has function prototypes for all functions listed above
* 5: `team.c` defines the functions from `team.h`
* 5: `make` compiles the executable `lab12` without warnings
* 5: no typecasts are used
* 5: `create_new_person` creates a `Person` on the heap
* 5: uses `realloc` when the array's capacity needs to increase
* 5: uses `realloc` when the array's capacity needs to decrease
* 40: correct output for four test cases
* 20: no memory leaks for four test cases--note that there is no test for this
    in the public autograder. You will have to check for yourself using
    `valgrind`

### Autograder

You can run the autograder using

```
/public/labs/lab12/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time the Wednesday after the due date.
