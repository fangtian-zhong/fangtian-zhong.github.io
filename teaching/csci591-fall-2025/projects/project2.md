---
collection: teaching
title: "Project 2"
---

## Logistics
* Due: Tuesday, September 30th AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `project2.c` in your submission.

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


### Troubleshooting

    * After I run your source code, the IDE will produce a project2.exe file.
    * I will use the command project2.exe filename.exe in command prompt to check for correctness.
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
from the user like **project2.exe filename.exe**.


## Grading--100 points
* 10: source file compiles
* 5: source file compiles without warnings
* 5: input format matches 
* 10: warning matches when user does not provide filename
* 20: output format matches exactly
* 20: output is correct for one test case
* 30: output is correct for all test cases

## Grading turnaround
Scores will be uploaded to Canvas by class time on October 7th.
