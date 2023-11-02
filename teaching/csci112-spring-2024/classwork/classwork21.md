---
collection: teaching
title: "Classwork 21"
---

## Logistics
* Due: Wednesday, November 1st AoE.
* Submission instructions: make sure that the required files are in your
	`csci112_fall2023/classwork/week11/wed/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice using pointers to structs

## Assignment

* Log in to the server.
* From your home directory, navigate to `csci112_fall2023/classwork/week11/wed/`, creating directories `week11`
and `wed` if necessary.
* Copy `main.c`, `planet.c`, `sort.c`, `planet.h`, `sort.h`, and `Makefile` from
	`/public/classwork/week11/wed/`.

Fill in the `TODO`s in `main.c` so that when you compile and run the program,
you get:

```
[p19t655@csci112 wed]$ make
gcc -c main.c -Wall
gcc -c planet.c -Wall
gcc -c sort.c -Wall
gcc main.o planet.o sort.o -Wall
[p19t655@csci112 wed]$ ./a.out
The planets are:
Mercury: 4879 diameter, 0 moons, 0.25 orbit time, 1426.00 rot. time
Venus: 12104 diameter, 0 moons, 0.62 orbit time, 5832.00 rot. time
Earth: 12756 diameter, 1 moons, 1.00 orbit time, 24.00 rot. time
Mars: 6779 diameter, 2 moons, 1.88 orbit time, 24.61 rot. time
Jupiter: 142800 diameter, 16 moons, 11.90 orbit time, 9.93 rot. time
Saturn: 120536 diameter, 146 moons, 29.40 orbit time, 10.70 rot. time
Uranus: 50000 diameter, 27 moons, 84.00 orbit time, 17.23 rot. time
Neptune: 49528 diameter, 14 moons, 165.00 orbit time, 16.10 rot. time

Sorted by diameter, they are:
Mercury: 4879 diameter, 0 moons, 0.25 orbit time, 1426.00 rot. time
Mars: 6779 diameter, 2 moons, 1.88 orbit time, 24.61 rot. time
Venus: 12104 diameter, 0 moons, 0.62 orbit time, 5832.00 rot. time
Earth: 12756 diameter, 1 moons, 1.00 orbit time, 24.00 rot. time
Neptune: 49528 diameter, 14 moons, 165.00 orbit time, 16.10 rot. time
Uranus: 50000 diameter, 27 moons, 84.00 orbit time, 17.23 rot. time
Saturn: 120536 diameter, 146 moons, 29.40 orbit time, 10.70 rot. time
Jupiter: 142800 diameter, 16 moons, 11.90 orbit time, 9.93 rot. time

Sorted by name, they are:
Earth: 12756 diameter, 1 moons, 1.00 orbit time, 24.00 rot. time
Jupiter: 142800 diameter, 16 moons, 11.90 orbit time, 9.93 rot. time
Mars: 6779 diameter, 2 moons, 1.88 orbit time, 24.61 rot. time
Mercury: 4879 diameter, 0 moons, 0.25 orbit time, 1426.00 rot. time
Neptune: 49528 diameter, 14 moons, 165.00 orbit time, 16.10 rot. time
Saturn: 120536 diameter, 146 moons, 29.40 orbit time, 10.70 rot. time
Uranus: 50000 diameter, 27 moons, 84.00 orbit time, 17.23 rot. time
Venus: 12104 diameter, 0 moons, 0.62 orbit time, 5832.00 rot. time
```

## Autograder

You can run the autograder by running

```
/public/classwork/week11/wed/autograder.sh
```

The file `autograder.txt` will be created with your score.


## Grading turnaround

The autograder will be run at 6am to calculate final scores. Scores will be
uploaded to D2L by the next class period.
