---
collection: teaching
title: "Classwork 13"
---

## Logistics
* Due: ~~Wednesday, October 4th~~ Friday, October 6th AoE.
* Submission instructions: make sure that the required file (`pass_by_ref.c`) is in your
	`/classwork/week7/wed/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice using pointers to pass by reference.

## Assignment

* Log in to the server.
* From your `csci11_fall2023` directory, navigate to `classwork/week7/wed/`, creating directories `week7` and `wed` if necessary.
* Copy the file `pass_by_ref_starter.c` from the `/public/classwork/week7/wed`
	directory. Make sure to rename it to `pass_by_ref.c`.

In the file `pass_by_ref.c`, finish implementing the function `get_stats` so that it assigns the minimum and maximum values of the array (already computed as
`temp_min` and `temp_max` to what the variables `min` and `max` point to.

Then, call the function `get_stats` in main so that after it is run, the
variables `min` and `max` hold the minimum and maximum values from the array
`arr`.

Don't change anything else about the file. You can test your program by running
it with the test input in `/public/classwork/week7/wed/input.txt` like so:

```
[p19t655@csci112 wed]$ gcc pass_by_ref.c -Wall
[p19t655@csci112 wed]$ ./a.out < /public/classwork/week7/wed/test_input.txt
```

And your output should look like:

```
Enter array size: Enter 10 ints separated by whitespace: Min and max are -350 and 100
```

You can run the autograder by running

```
/public/classwork/week7/wed/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
