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
You need to develop three programs: program1.c, program2.c, and project3.c.
* program1.c: This program, when compiled into program1.exe, should simply print "hello world".
* program2.c: This program, when compiled into program2.exe, should display the file header, the optional header, and the last section header of a PE (Portable Executable) file.
* project3.c: This program should take program1.exe, attach it to the end of program2.exe and display `attaching completed!`, producing program3.exe. After compilation, running program3.exe should print its own file header, optional header, and last section header.

### Example output

```
File Header
Machine: 0x8664
NumberOfSections: 5
...
```
Only three source code files program1.c, program2.c, project3.c in your submission, don’t use existing API functions and use the structures you defined.
### Troubleshooting

After I complile your source code files individually, the IDE will produce the executable files.
    I will use the command project3.exe program1.exe program2.exe in command prompt to attach program1.exe to program2.exe and run program2.exe to check for correctness.
    You can add the following codes to your project1. `Note`: Running program2.exe and program3.exe will produce different results, since the file header, optional header and section layout will change once program1.exe is appended.

   ```
       #include <stdio.h>
	   int main(int argc, char* argv[])
       {
    	if (argc < 3){
    	printf("Usage: %s filename1.exe filename2.exe",  argv[0]);
    	return 1;
       }
       return 0;    
	   }
   ```


## Grading--100 points

* 10: source file compiles without warnings
* 10: use the command project3.exe program1.exe program2.exe 
* 10: program1.exe prints out `hello world` correctly
* 20: program2.exe prints out the file header, optional header, and last section header correctly before attaching
* 10: project3.exe successfully attaches program1.exe to program2.exe and prints `attaching completed!`. 
* 10: project3.exe updates all required fields in headers.
* 30: program3.exe prints its own file header, optional header, and last section header correctly. Don’t use existing API functions, and use the structures you defined, otherwise, 10 points off from your total score.



## Grading turnaround
Scores will be uploaded to Canvas by next Tuesday.
