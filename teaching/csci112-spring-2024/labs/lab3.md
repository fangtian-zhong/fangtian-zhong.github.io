---
collection: teaching
title: "Lab 3"
---

## Logistics
* Due: Friday, September 15th AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `lab3.c` in your `~/csci112_fall2023/labs/lab3`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab3`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://lgw2.github.io/teaching/csci112-fall-2023/classwork/classwork4/).)

## Outside resources

On this assignment, you may not use the the internet or generative AI such as
ChatGPT to solicit solutions to the programming part of the assignment. If you
are having trouble writing your program, please go to lab (Fridays, 12-4 in
Roberts 111) or post in Discord to
get help.

However, you may use those resources for help with navigating the Linux
terminal, using vim, and using git, although you may get better answers to your
questions by going to lab or posting on Discord anyway.

## Learning outcomes
* Practice using `if` and/or `switch` statements.
* Practice using functions to organize your code.
* Get input from the user.
* Practice writing complicated output.

## Assignment

As a software developer for a chemistry lab, you have been asked to write a
program that helps chemists identify a substance given its boiling point. Here
is a table of the substances that your lab is interested in, and their boiling
points:

|Substance|Normal Boiling Point (degrees Celsius)|
|:---|:---|
|Water|100|
|Mercury|357|
|Copper|1187|
|Silver|2193|
|Gold|2660|

Write a
program that prompts the user for the observed boiling point of a substance in
degrees Celsius, prints the number they entered with only two decimal places,
and then prompts them enter a custom error percent. Then, identify the substance
if the observed boiling point is within that percent of the expected boiling
point. If the data input is outside of range for all of the boiling points in
the table, the program should
output the message `Substance unknown`.

For example, if the user selects an error percent of 5%,
your program should identify the substance that is
within 5% of the expected boiling point. If the data input is more than 5%
higher or lower than any of the boiling points in the table, print the above
message.

You should use a default percent of 5 if the user does not want to enter a
custom percent.

Because your boss anticipates that you and your fellow software engineers will
need to write many programs that check whether a given value is inside some
range, they have asked that you write and call a specific function that can be reused in other programs.

Your program must define and call a function `within_x_percent` that takes as
a parameter a reference value `ref`, a data value `data`, and a percentage
value `x` and returns 1 meaning true if `data` is within `x`% of `ref` --- that
is, (`ref - x% * ref`) $\leq$ `data` $\leq$  (`ref + x% * ref`). Otherwise
`within_x_percent` should return zero, meaning false. For example, the call
`within_x_percent(357, 323, 10)` would return 1 for true, since 10% of 357 is 35.7,
and 323 falls between 321.3 and 392.7. **You must use this function to decide
what the substance is.**

You may optionally start from the starter code in
`/public/labs/lab3/lab3_starter.c`, which gives a skeleton of the program and
an example of how you would use `within_x_percent` to decide whether your
observed substance is water.

### Example output

```
[p19t655@csci112 lab3]$ pwd
/home/p19t655/csci112_spring2023/labs/lab3
[p19t655@csci112 lab3]$ gcc -o lab3 -Wall lab3.c
[p19t655@csci112 lab3]$ ./lab3
Observed boiling point (in deg. C)? 101
You entered 101.00
Custom error percent? n for no (5% default), y for yes: n
Substance is water
[p19t655@csci112 lab3]$ ./lab3
Observed boiling point (in deg. C)? 500
You entered 500.00
Custom error percent? n for no (5% default), y for yes: n
Substance unknown
[p19t655@csci112 lab3]$ ./lab3
Observed boiling point (in deg. C)? 400
You entered 400.00
Custom error percent? n for no (5% default), y for yes: y
Enter error percent: 10
You entered 10.00 percent
Substance unknown
[p19t655@csci112 lab3]$ ./lab3
Observed boiling point (in deg. C)? 400
You entered 400.00
Custom error percent? n for no (5% default), y for yes: y
Enter error percent: 15
You entered 15.00 percent
Substance is mercury
[p19t655@csci112 lab3]$ ./lab3
Observed boiling point (in deg. C)? 400
You entered 400.00
Custom error percent? n for no (5% default), y for yes: 15
Error: bad input
[p19t655@csci112 lab3]$ ./lab3
Observed boiling point (in deg. C)? 2200
You entered 2200.00
Custom error percent? n for no (5% default), y for yes: y
Enter error percent: 50
You entered 50.00 percent
Substance is silver
```

### Hints
* If you are having trouble reading in a `char`, you may need to add a space so
	that `scanf` doesn't consume whitespace from a previous `printf`. See [this
	stackoverlow
	post](https://stackoverflow.com/questions/13542055/how-to-do-scanf-for-single-char-in-c/13543113).
* To print a `%`, use the format `%%`. For example, `printf("5%%")` would print
	`5%`.
* Think about what `main` returns in order to quit the program early.


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

### Autograder

You can run the autograder using

```
/public/labs/lab3/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time on Wednesday, September 20th.
