---
collection: teaching
title: "Classwork 13"
---

## Logistics
* Due: Monday, March 3rd AoE.
* Submission instructions: make sure that the required file (`pass_by_ref.c`) is in your
	`/classwork/week8/mon/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice using pointers to pass by reference.

## Assignment

* Log in to the server.
* From your `csci11_spring2025` directory, navigate to `classwork/week8/mon/`, creating directories `week8` and `mon` if necessary.
* Copy the file `pass_by_ref_starter.c` from the `/public/classwork/week8/mon`
	directory. Make sure to rename it to `pass_by_ref.c`.

In the file `pass_by_ref.c`, finish implementing the function `get_stats` so that it assigns the minimum and maximum values of the array (already computed as
`temp_min` and `temp_max` to what the variables `min` and `max` point to.

Then, call the function `get_stats` in main so that after it is run, the
variables `min` and `max` hold the minimum and maximum values from the array
`arr`.

Don't change anything else about the file. You can test your program by running
it with the test input in `/public/classwork/week8/mon/input.txt` like so:

```
[g73x595@csci112 mon]$ gcc pass_by_ref.c -Wall
[g73x595@csci112 mon]$ ./a.out < /public/classwork/week8/mon/test_input.txt
```

And your output should look like:

```
Enter array size: Enter 10 ints separated by whitespace: Min and max are -350 and 100
```

You can run the autograder by running

```
/public/classwork/week8/mon/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
