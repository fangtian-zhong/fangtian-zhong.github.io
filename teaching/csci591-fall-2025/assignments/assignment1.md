---
collection: teaching
title: "Assignment 1: Assembly Programs"
---

## Logistics
* Due: Thursday, September 4th, AOE (Friday 6am Bozeman time).
* Submission instructions: make sure that the required file (name matched) is submitted to Canvas.
  
## Learning outcomes
* Understand assembly grammar and develop assembly programs
* Learn how to search online materials

## Assignment


### 1.1 Develop a assembly program named assignment1-1.asm to print different types of numbers. For instance:

* real_number1 dd 1.234 ; floating-point constant
* real_number2 dq 123.456 ; double-precision float
* real_number_3 dt 1.234567e20 ; extended-precision float

After compiling and linking the assembly program to produce assignment1-1.exe, double clicked
assignment1-1.exe, it is gonna print out their values:

* real_number1: 1.234, 
* real_number2:123.456 ,
* real_number_3: 1.234567e20

### 1.2 Develop a assembly program named assignment1-2.asm to read int numbers from keyboard and save them to uninitialized variables with different storage spaces and print out their values. resw, resd, resq, rest. That is, we need to read 4 numbers from key board and save their values to uninitiated variables uninitializedData1, uninitializedData2, uninitializedData3, uninitializedData4. Finally, we have to print them out in their corresponding type formats. After compiling and linking the assembly program to produce assignment1-2.exe, double clicked assignment1-2.exe, it is gonna show you to give numbers:

 Enter the first number:
 Enter the second number:
 Enter the third number:
 Enter the last number:
 After you give the last number, enter it and then print out them.
* first number: 
* second number:
* third number:
* last number:
  
### 1.3 Develop a assembly program named assignment2-1.asm that reads two int numbers from keyboard and save them to uninitialized variables (uninitializedData1, uninitializedData2) with different storage spaces (resd, resq). Then it correctly calculates their sum and subtraction and prints them out. Finally, we have to print them out in their corresponding formats.

After compiling and linking the assembly program to produce assignment2-1.exe, double clicked
assignment2-1.exe, it is gonna show you to give numbers (5, 10):
* Enter the first number:
* Enter the second number:
* Their sum is:
* Their subtraction is:

## Grading--30 points
   For each subassignment, you get 10 points if your solution is correct and 0 otherwise.

## Grading turnaround

Scores will be on Canvas before the next class period.

