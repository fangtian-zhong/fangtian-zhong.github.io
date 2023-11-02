---
collection: teaching
title: "Classwork 3: Hello, world!"
---

## Logistics
* Due: Monday, August 28th AoE (Tuesday 6am Bozeman time).
* Submission instructions: make sure that the required file (`hello_world.c`) is in your
	`csci112_fall2023/classwork/week2/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Outside resources

On this assignment, there are no restrictions on the use of outside resources
for help in any way, including use of AI tools like ChatGPT.

## Learning outcomes
* Write, compile, and run your first C program.

## Assignment

* Log in to the server.
* From your home directory, navigate to `csci112_fall2023/classwork/week2/mon/` creating directories `week2` and `mon` if necessary.
* Inside this directory, create a file called `hello_world.c`.
* Type or paste the following:

```c
#include <stdio.h>

int main(void) {

     // prints "Hello, world!"
     printf("Hello, world!\n");

     // exit with no errors
     return(0);
}
```
* Compile your program to the executable file `exe` (or other filename of your
	choice) using `gcc -o exe -Wall hello_world.c`.
* Run your program using `./exe`.

* You can run the autograder by running
```
/public/classwork/week2/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
