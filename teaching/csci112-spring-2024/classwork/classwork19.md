---
collection: teaching
title: "Classwork 19"
---

## Logistics
* Due: Wednesday, October 25th AoE.
* Submission instructions: make sure that the required files (`main.c`, `planet.c`, `planet.h`, and `Makefile`) are in your
	`csci112_fall2023/classwork/week10/wed/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice writing a Makefile

## Assignment

* Log in to the server.
* From your home directory, navigate to `/csci112_fall2023/classwork/week10/wed/`, creating directories `week10`
and `wed` if necessary.
* Copy the `main.c`, `planet.c`, and `planet.h` file from `/public/classwork/week10/wed` to your directory.

Now, write a Makefile to compile `main.c` and `planet.c` into one executable
program, `a.out`. Your Makefile should also encode the correct dependencies for
the program, which are the following:

* `a.out` depends on object files `main.o` and `planet.o` compiled from `main.c` and `planet.c`
* `main.o` depends on `main.c` and `planet.h`
* `planet.o` depends on `planet.c` and `planet.h`

Running `make` should only recompile code that has changed. (Or code that
depends on code that has changed.) For example, here is a sample sequences of
calls to make after files get "changed" using `touch`:

```
[p19t655@csci112 wed]$ ls
main.c  Makefile  planet.c  planet.h
[p19t655@csci112 wed]$ make
gcc -c main.c -Wall
gcc -c planet.c -Wall
gcc main.o planet.o -Wall
[p19t655@csci112 wed]$ ls
a.out  main.c  main.o  Makefile  planet.c  planet.h  planet.o
[p19t655@csci112 wed]$ ./a.out
Enter a planet name, diameter, num. moons, orbit time, and rotation time: Mars 6779.0 2 1.88 24.61
Enter a planet name, diameter, num. moons, orbit time, and rotation time: Earth 12756.0 1 1.0 24.0
Jupiter: 142800 diameter, 16 moons, 11.90 orbit time, 9.93 rot. time
Mars: 6779 diameter, 2 moons, 1.88 orbit time, 24.61 rot. time
Earth: 12756 diameter, 1 moons, 1.00 orbit time, 24.00 rot. time
[p19t655@csci112 wed]$ touch planet.h
[p19t655@csci112 wed]$ make
gcc -c main.c -Wall
gcc -c planet.c -Wall
gcc main.o planet.o -Wall
[p19t655@csci112 wed]$ touch main.c
[p19t655@csci112 wed]$ make
gcc -c main.c -Wall
gcc main.o planet.o -Wall
[p19t655@csci112 wed]$ touch planet.o
[p19t655@csci112 wed]$ make
gcc main.o planet.o -Wall
[p19t655@csci112 wed]$ make
make: 'a.out' is up to date.
```

## Autograder

You can run the autograder by running

```
/public/classwork/week10/wed/autograder.sh
```

The file `autograder.txt` will be created with your score.


## Grading turnaround

The autograder will be run at 6am to calculate final scores. Scores will be
uploaded to D2L by the next class period.
