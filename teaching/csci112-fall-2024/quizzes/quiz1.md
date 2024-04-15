---
geometry: margin=3cm
---

On the bubble sheet, please write your full name (as it would appear in D2L). You do not need to fill out
any of the other fields (ID, section, etc.). Answer the following questions on the bubble sheet:

1\.  Suppose that running `ls` prints:

```
myfile1.txt  myfile2.txt
```

Which Linux command will make a copy of `myfile1.txt` called `myfile3.txt`?

A.  `mv myfile1.txt myfile3.txt`
B.  `mv myfile1.txt`
C.  `cp myfile1.txt myfile3.txt`
D.  `copy myfile1.txt > myfiile3.txt`

2\.  After the following code snippet is run, what is the value of `result`?

```
int x = 5;
double result;
result = 5/2;
```

A.  2
B.  2.5
C.  0
D.  10

3\.  Consider the following code snippet:

```
char letter;
printf("Enter a letter: ");
scanf("%c", letter);
```

Will this code successfully assign a character to the variable `letter`?

A.  Yes
B.  No

4\.  What should be filled in for the blank (`____`) so that the following prints "The
    temperature is 98.6"?

```
double temp = 98.6;
printf("The temperature is ____\n", temp);
```

A.  `temp`
B.  `%.2d`
B.  `%.1d`
C.  `%.2f`
D.  `%.1f`

5\.  What is the return type of the function `main`?

A.  `int`
B.  `double`
C.  `void`
D.  `char`

6\.  Suppose that your project being tracked by `git` is in a state that you would like to save (for
    exmple, because you would like to be able to return to this state, or
    because you would like to share it with your collaborators); that is, you
    would like to make a commit. This process has two steps. Which one comes
    first?

A.  `git add`
B.  `git commit`

7\.  In the following program (which includes line numbers)

```
1 #include <stdio.h>
2
3 int add(int, int);
4
5 int main(void) {
6    int a = 5;
7    int b = 10;
...
```

what is line 3 (`int add(int, int);`)?

A.  function definition
B.  variable declaration
C.  preprocessor directive
D.  execution statement
E.  function prototype

8\. Based on the code from question 7 above, how could we call `add` in `main`
(say, on line 8)?

A.  `int result = add(int a, int b);`
B.  `int result = add(a, b);`
C.  `int result = add(a) +  add(b);`
D.  `int result = add();`

9\. How do you start a comment in C?

A.  `#`
B.  `"`
C.  `//`
D.  `*`

10\. Suppose your C source code is saved in a file called my `program.c`, and you
compile it using the command
`gcc -o my_program -Wall my program.c`. What is the `-o my_program` part of the
command doing?

A.  Saving the compiled file to `my_program`
B.  Indicating where the source code is located
C.  Running the preprocessor
D.  Telling the compiler to check for warnings
E.  Telling the compiler to check for syntax errors
