---
collection: teaching
title: "Project 1"
---

## Logistics
* Due: Tuesday, September 16th AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `project1.c` in your Canvas submission
	directory.

## Learning outcomes
This assignment is meant to be a low stakes way to introduce you to this course and some of the technologies we will use. You may have opportunities to complete parts of this assignment in class, but you should plan to work on this outside of class as well. Of particular importance, by the end of this assignment you should be setup with a suitable environment for completing assignments for this course. You will also have had the chance to practice with tools we’ll be using this semester. Besides, the project requires you to parse two applications with different architectures for their DOS headers, NT headers (including signature, coff header and optional header), and section headers and print out their values in a format like (field name: field value). The codes should be written in C or C++. 


## Assignment

This project requires you to parse two applications with different architectures for their DOS headers, NT headers (including signature, coff header and optional header), and section headers and print out their values in a format like (field name: field value). The codes should be written in C or C++.

* Download Microsoft Visual Studio, Community Version on your machine.To ensure the compability, all students should use the same IDE.
* Download firefox on your machine. You should use Firefox browser to download the applications because Google Chrome does not allow you to download malware
* Download applications on your machine. One application is 32-bit executable, the other 64-bit executable.
* Follow the format to print out their values. For example, Dos Header has 19 fields, you print like:
  ```
  Dos Header
  e_magic: 5A4D
  e_cblp: 90
  e_cp: 3
  ...
  ```
* Only one source code file **project1.c** in your submission, don't use existing API functions and use the structures you defined.


### Troubleshooting


    * After I run your source code, the IDE will produce a project1.exe file.
    * I will use the command project1.exe filename.exe in command prompt to check for correctness.
    * You can add the following codes to your project1.
```
#include <stdio.h>
int main(int argc, char* argv[])
{
    if (argc < 2){
    printf("Usage: %s filename.exe",  argv[0]);
    return 1;
    }
    return 0;    
}
```

### Input/output format

For this assignment, you must match the output format exactly, and take input
from the user like **project1.exe filename.exe**.


## Grading--100 points
* 10: source file compiles
* 5: source file compiles without warnings
* 5: input format matches 
* 10: warning matches when user does not provide filename
* 20: output format matches exactly
* 20: output is correct for one test case
* 30: output is correct for all test cases

## Grading turnaround
Scores will be uploaded to Canvas by class time on Tuesday, September 23rd.
