---
collection: teaching
title: "Classwork 14"
---

## Logistics
* Due: Wednesday, March 5th AoE.
* Submission instructions: make sure that the required file (`read.c`) is in your
	`/classwork/week8/wed/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.

## Learning outcomes
* Practice reading strings from the console and from files
* Store strings as arrays of characters

## Assignment

* Log in to the server.
* From your `csci11_spring2025` directory, navigate to `classwork/week8/wed/`, creating directories `week8` and `wed` if necessary.
* Copy the file `read.c` from the `/public/classwork/week8/wed`
	directory.

In the file `read.c`, fill in the three `TODO` lines. You should only need to
add three lines to the file. Once you have fixed the three todos, you should be
able to compile and run the executable like so:

```
[g73x595@csci112 wed]$ gcc read.c -Wall
[g73x595@csci112 wed]$ ./a.out
Enter a name: Bob
You entered: Bob

Australia - Canberra
Brazil - Brasília
Canada - Ottawa
Denmark - Copenhagen
Egypt - Cairo
France - Paris
Greece - Athens
India - New Delhi
Japan - Tokyo
Kenya - Nairobi
```

You can run the autograder by running

```
/public/classwork/week8/wed/autograder.sh
```

The file `autograder.txt` will be created with your score.

## Grading turnaround
Final scores will be run at 6am on the due date and scores will be
uploaded to D2L by the next class meeting.
