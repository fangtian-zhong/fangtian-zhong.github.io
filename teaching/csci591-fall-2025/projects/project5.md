---
collection: teaching
title: "Project 5"
---

## Logistics
* Due: Friday, February 21st AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `project.txt` in your submission
	directory. You need to describe what you have done and what you have observed, including relevant screenshots, command snippets, and code snippets. For any important command snippets or code snippets you must also include a supporting explanation. Simply including commands/code without any explanation will not receive credit. For any interesting or surprising observations, you also need to provide explanations. You are encouraged to pursue further investigation, beyond what is required by the lab description.


## Learning outcomes

The learning objective of this project is for students to familiarize with WinDbg commands for kernel debugging. The kernel is the heart of the operating system, and it resides in the file ntoskrnl.exe. If we want to trace back the system libraries to the kernel functions, instead of merely having its effect returned, we should utilize kernel-debugging tools. Among them, WinDbg is the most useful one provided by Microsoft.All system APIs will finally transfer the invocation to the kernel, as shown in the figure below, from the "Practical Malware Analysis" book. 

![User mode and Kernel mode](./imgs/NativeAPI.png)

## Resources
* Codes related to this project can be found in our class’s slides.
* A related video lecture for WinDbg Basics for malware Analysis, recorded by [OALabs](https://www.youtube.com/watch?v=QuFJpH3My7A).
* More information about kernel debugging with [breakpoints](https://dennisbabkin.com/blog/?t=setup-windbg-preview-for-kernel-debugging-via-fast-network-in-vmware-vm#breakpoint_bsod).
* [Checklist](https://blog.lamarranet.com/wp-content/uploads/2021/09/WinDbg-Cheat-Sheet.pdf) for WinDbg Commands


## Assignment
### Task1: Parent Process 
Launch Process Explorer as Administrator. Scroll to the bottom and find the Notepad process. (There may be more than one, as shown below.) The flag is the name of the parent process, covered by a green box in the image below.
![ctf1](./imgs/ctf1.png)

### Task 2: Crash Message 
The flag is covered by a green box in the image below.
![ctf2](./imgs/ctf2.png)

### Task 3: WarBird
Find the function shown in the image below.

The flag is covered by a green box in the image below.
![ctf3](./imgs/ctf3.png)
### Task 4:Magic 
Find the word Magic in nt.

The flag is covered by a green box in the image below.

![ctf4](./imgs/ctf4.png)

### Task 5: Module 
Find this code. The flag is covered by a green box in the image below.
![ctf5](./imgs/ctf5.png)




## Grading--100 points

* 10: source file exists with correct name in correct location
* 10: source file compiles without warnings
* 10: printing answers is formatted correctly
* 15: printing scores by ID is formatted correctly
* 10: printing number of questions missed is formatted correctly

For each of 3 tests,

* 5: answers are correct
* 5: grades are correct
* 5: number missed are correct

### Autograder

You can run the autograder using

```
/public/labs/lab5/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time the Wednesday after the due date.
