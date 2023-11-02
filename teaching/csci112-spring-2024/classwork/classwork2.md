---
collection: teaching
title: "Classwork 2: Getting started with Linux, vim, and the course server"
---

## Logistics
* Due: Friday, August 25th AoE (Saturday 6am Bozeman time).
* Submission instructions: make sure that the required file is in your
	`csci112_fall2023/classwork/week1/fri/` directory.
* Deadline reminder: after the deadline passes, you cannot earn any points for
	this assignment.
* You get 10 points if your file is in the correct place with the correct name
	and 0 otherwise.

## Outside resources

On this assignment, there are no restrictions on the use of outside resources
for help in any way, including use of AI tools like ChatGPT.

## Learning outcomes
* Be able to `ssh` into the course server and use basic Linux commands to
	navigate and perform basic tasks.
* Be able to read and edit files using vim.
* Understand how you will complete classwork assignments in this course.

## Assignment

* Log in to the server: open a terminal window (the Terminal program on Mac and
	the Command Prompt program on Windows) and type

```
ssh <netid>@csci112.cs.montana.edu
```

* Enter your netid password when prompted.
* Use `mkdir` to create a `csci112_fall2023` directory.
* Use `cd` to navigate into the `csci112_fall2023` directory.
* Use `mkdir` to create a `classwork` directory.
* Use `cd` to navigate into the `classwork` directory.
* Repeat the same process to create a `week1` directory and navigate into it.
* Create another directory inside `week1` called `fri` and navigate into that.
* Inside `fri`, use `vim` to create a file
	called `example.txt`. Write any text you like inside of it. Note that if
	you leave the file entirely blank, it will not be created.
* You can run the autograder by running (that is, pasting the following into
	your terminal and pressing enter)
```
/public/classwork/week1/fri/autograder.sh
```

The file `autograder.txt` will be created with your score. Use `vim
autograder.txt` to open it and read its contents.

## Grading turnaround

Final scores will be run at 6am Saturday and scores will be
uploaded to D2L by class time Monday.
