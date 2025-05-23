---
collection: teaching
title: "Classwork 11"
---

## Logistics
* Due: Monday, February 24th AoE.
* Submission instructions: make sure that the required file (`sum.c`) is in your
	`/classwork/week7/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice functions with arrays.

## Assignment

* Log in to the server.
* From your `csci11_spring2025` directory, navigate to `classwork/week7/mon/`, creating directories `week7` and `mon` if necessary.
* Copy the file `/public/classwork/week7/mon/sum.c` to your
	`csci112_spring2025/classwork/week7/mon` directory.

Write the function `cumulative_sum` to match the call in `main`; that is, it
must take in two double arrays and an integer.

The function `cumulative_sum` should change the array `result` so that its
entries are the cumulative sum of `arr`. For example, for the data in the file,

```
double arr[] = {65.4, 76.8, 9.2, 54.01};
```

the cumulative sum is

```
65.40 142.20 151.40 205.41
```

because the first entry is 65.4, the second entry is 65.4+76.8=142.20, the
third entry is 65.4+76.8+9.2=151.40, etc.

You can run the autograder by running
```
/public/classwork/week7/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
