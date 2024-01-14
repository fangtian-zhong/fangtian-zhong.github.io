---
collection: teaching
title: "Classwork 9"
---

## Logistics
* Due: Monday, Feburary 12th AoE.
* Submission instructions: make sure that the required file (`min.c`) is in your
	`/classwork/week5/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice using the conditional operator.
* Practice comparing `char`s by their ASCII codes.

## Assignment

* Log in to the server.
* From your home directory, navigate to `classwork/week5/mon/`, creating directories `week5` and `mon` if necessary.
* Inside this directory, create a file called `min.c`. In it, write a
	program solving the following problem.

Prompt the user to enter two characters. Use the **conditional operator** to find
the minimum (according to their ASCII codes) of the characters and print it
back to the user.

Note that the user should be able to input their characters separated by
whitespace if they would like.

For example, compiling and running your program should look like this:

```
[p19t655@csci112 mon]$ gcc -o min -Wall min.c
[p19t655@csci112 mon]$ ./min
Enter two characters: a A
Min is A
[p19t655@csci112 mon]$ ./min
Enter two characters: 6 n
Min is 6
[p19t655@csci112 mon]$ ./min
Enter two characters: y x
Min is x
[p19t655@csci112 mon]$ ./min
Enter two characters: P A
Min is A
```

You can run the autograder by running
```
/public/classwork/week5/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
