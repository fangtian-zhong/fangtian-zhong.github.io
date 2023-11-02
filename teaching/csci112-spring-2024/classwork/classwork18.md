---
collection: teaching
title: "Classwork 18"
---

## Logistics
* Due: Monday, October 23rd AoE.
* Submission instructions: make sure that the required files (`mor.c`, `location.h`, and `coordinates.h`) are in your
	`csci112_fall2023/classwork/week10/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice using header files

## Assignment

* Log in to the server.
* From your home directory, navigate to `/csci112_fall2023/classwork/week10/mon/`, creating directories `week10`
and `mon` if necessary.
* Copy the `mor.c` file from `/public/classwork/week10/mon` to your directory.

Move the `Location` struct definition into a new header file called
`location.h` and move the `Coordinates` struct definition into a different file
called `coordinates.h`. Include `location.h` and `coordinates.h` where
necessary so that compiling and running `mor.c` still works as before:

```
[p19t655@csci112 mon]$ ls
coordinates.h  location.h  mor.c
[p19t655@csci112 mon]$ gcc mor.c -Wall
[p19t655@csci112 mon]$ ./a.out
Museum of the Rockies location is LAT: 45 6 N, LON: 111 4 W
```

## Autograder

You can run the autograder by running

```
/public/classwork/week10/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround

The autograder will be run at 6am to calculate final scores. Scores will be
uploaded to D2L by the next class period.
