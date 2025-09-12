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
* project3.c: This program should take program1.exe and attach it to the end of program2.exe, producing program3.exe. After compilation, running program3.exe should print the file header, the optional header, and the last section header.

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
    You can add the following codes to your project1. `Note`: Running program2.exe before attaching and after attaching will produce different results, since the file header, optional header and section layout will change once program1.exe is appended.

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
