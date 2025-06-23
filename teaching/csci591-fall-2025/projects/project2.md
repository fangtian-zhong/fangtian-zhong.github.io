---
collection: teaching
title: "Project 2"
---

## Logistics
* Due: Friday, January 31st AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `lab2.c` in your `~/csci112_spring2025/labs/lab2`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab2`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://fangtian-zhong.github.io/teaching/csci112-spring-2025/classwork/classwork4).)

## Learning outcomes
This project is meant to understand the major functionality of applications and the process of operating system to make addresses relocatable when applications are not loaded into their preferred memory addresses. This assignment should also give you more practice with using tools like Git, GitHub, and Markdown. 

## Assignment
* you should parse the Import Table, Import Address Table, Bound Import Table, Relocation Table, and Export Table of the applications provided in Project 1, as well as any other tables referenced by them if present.
* Each of the structures referenced by these tables may have multiple instances, and all of them should be parsed.
* Follow the format below to print out their values. For example, the DOS Header has 19 fields and should be printed like this:
  ```
  Dos Header
  e_magic: 5A4D
  e_cblp: 90
  e_cp: 3
  ...
   ```
* Some may not have names, then printing their values is okay!  
* Only one source code file project2.c in your submission, don't use existing API functions and use the structures you defined. 


### Input/output format


## Grading--100 points
* 10: source file exists with correct name in correct location
* 10: source file compiles
* 10: source file compiles without warnings
* 20: does not use `printf` in `main`
* 10: does not use a for or while loop
* 10: prompt to user matches exactly
* 10: output reporting earnings matches exactly (include linebreak and number
	of decimal places)
* 5 points each: computes correct total earnings for 4 test cases

### Autograder

You can run the autograder using

```
/public/labs/lab2/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time on February 5th.
