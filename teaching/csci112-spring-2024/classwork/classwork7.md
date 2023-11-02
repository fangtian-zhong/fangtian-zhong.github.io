---
collection: teaching
title: "Classwork 7"
---

## Logistics
* Due: Wednesday, September 13th AoE.
* Submission instructions: make sure that the required file (`grade.c`) is in your
	`/classwork/week4/wed/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice using a `switch` statement.

## Assignment

* Log in to the server.
* From your home directory, navigate to `classwork/week4/wed/`, creating directories `week4` and `wed` if necessary.
* You may optionally start with starter code in
	`/public/classwork/week4/wed/grade_starter.c`.
* Inside this directory, create a file called `grade.c`. In it, write a
	program solving the following problem.

Prompt the user for their grade. Then, using a `switch` statement, report back
the minimum points they earned in the course. (Consult the [grades section of the syllabus]( https://lgw2.github.io/teaching/csci112-spring-2023/syllabus/#grading).)
You should allow both capital and lowercase letters for grades A, B, C, and D. You must match the output
formatting below and you must use a `switch` statement. If they enter something
other than the allowed grades, print "You earned an unknown number of points in
the class."

```
[p19t655@csci112 wed]$ ./exe
Enter the grade you got: 5
You earned an unknown number of points in the class.
[p19t655@csci112 wed]$ ./exe
Enter the grade you got: A
You earned at least 93 points in the class.
[p19t655@csci112 wed]$ ./exe
Enter the grade you got: f
You earned an unknown number of points in the class.
[p19t655@csci112 wed]$ ./exe
Enter the grade you got: d
You earned at least 63 points in the class.
```

You can run the autograder by running
```
/public/classwork/week4/wed/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
