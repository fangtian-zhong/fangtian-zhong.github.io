---
geometry: margin=3cm
---

On the bubble sheet, please write your full name (as it would appear in D2L). You do not need to fill out
any of the other fields (ID, section, etc.). Answer the following questions on the bubble sheet:

1\.  What is the logical and operator in C?

A.  `and`
B.  `&`
C.  `&&`
D.  `|`
D.  `||`

2\.  Suppose you have a variable declared as follows:

```
char letter;
```

How would you start a `switch` statement to select between alternatives based
on the value of `letter`?

A.  `if (letter == value)`
B.  `switch (letter==value)`
C.  `switch (letter)`

3\.  Consider the following code snippet:

```
char letter;
printf("Enter a letter: ");
scanf("%c", letter);
```

Will this code successfully assign a character to the variable `letter`?

A.  Yes
B.  No

4\.  Suppose that your code contains the following snippet:

```
int num, status;
printf("Enter a number: ");
status = scanf("%d", &num);
```

Assume that this code is run and the user enters 10 like so:

```
Enter a number: 10
```

What is the value of `status`?

A.  10
B.  0
C.  1
D.  2
E.  This code would not compile

5\.  What is the value of the variable `vote` after the following code snippet
is run?

```
int vote, age;
age = 25;
vote = age >= 18 ? 1 : 0;
```

A.  -1
B.  0
C.  1
D.  2
E.  This code would not compile

6\.  Suppose I have written a "Hello, world!" C program that just prints
"Hello, world!" and I have compiled it into an executable called
`hello`. What Linux command could I run to run `hello` and redirect the output
to the file `out.txt`?

A.  `hello out.txt`
B.  `./hello`
C.  `./hello > out.txt`
D.  `hello < out.txt`
E.  `printf("Hello, world!", "out.txt")`

7\.  Consider the following code snippet:

```
int num = 5;
do {
    printf("Num is less than 4\n");
} while (num < 4);
```

How many times does `Num is less than 4` print when this code is run?

A.  0
B.  1
C.  2
D.  3
D.  This code would not compile

8\.  Can a function in C return more than one thing?

A.  Yes
B.  No

9\.  After the following code is run, what is the value of `n`?

```
int n;
```

A.  0
B.  -1
C.  `NULL`
D.  This code would not compile
E.  We don't know

10\.  After the following code is run, what is the value of `j`?

```
int i = 2;
int j;
j = i++;
```

A.  0
B.  1
C.  2
D.  3
E.  This code would not compile

