---
collection: teaching
title: "Project 3"
---

## Logistics
* Due: Thursday, October 16th AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `project3.c` in your submission.


## Learning outcomes


## Assignment
We have to develop a project3.c that first encrypt the virus (in our case, it is program1.exe) by XORing it with 0x40 and then attached the encrypted virus to the end of program2.exe. After it is compiled, producing program3.exe.


### Example output

```

```

### Hints



## Grading--100 points

* 5: source file exists with correct name in correct location
* 10: source file compiles
* 5: source file compiles without warnings
* 10: defines function `within_x_percent` to take in three doubles and return an
	int
* 10: the function `within_x_percent` returns 1 if the `data` value is within
	`percent` of the `ref` value and 0 otherwise
* 10: calls function `within_x_percent`to decide what the substance is
* 5: the user is prompted to give a custom error percent; if not, uses default
	of 5%
* 5: accepts `n` and `N` for no and `y` and `Y` for yes for giving a custom
	error percent
* 10: for everything else, prints `Error: bad input` and quits the program
* 5: prompts to user match exactly
* 5: outputs to user match exactly
* 10: prints the correct substance given the temperature and error bound. If
	multiple match, prints the one with the smaller boiling point.
* 10: prints the message `Substance unknown` if the entered temperature is not
	within the given percent of any of the substances' boiling points.



## Grading turnaround
Scores will be uploaded to Canvas by next Tuesday.
