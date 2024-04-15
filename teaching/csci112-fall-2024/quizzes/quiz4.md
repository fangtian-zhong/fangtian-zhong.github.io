---
geometry: margin=2cm
---

On the bubble sheet, please write your full name (as it would appear in D2L). You do not need to fill out
any of the other fields (ID, section, etc.). Answer the following questions on the bubble sheet:

1\.  After the following code is run,

```
int *b;
int n = 5;
b = &n;
```

which of the following changes the value of `n`?

A.  `*b = 6`
B.  `&b = 6`
C.  `b = 6`

2\.  If `a` and `b` are strings, how can we determine whether `a` comes first
alphabetically or not?

A.  `a < b`
B.  `strcmp(a, b) < 0`
C.  `strcmp(*a, *b) < 0`
D.  `*a < *b`
E.  `strcmp(&a, &b) < 0`

3\.  If `a` is defined as follows, what is the result of `strlen(a)`?

```
char a[10] = "hi";
```

A.  10
B.  3
C.  2

4\.  Using the same `a` as in the problem before, what is the result of
`sizeof(a)`?

A.  80
B.  40
C.  10
D.  3
E.  2

5\.  Suppose a variable `x` is declared like so:

```
int x = 5;
```

What C command would produce a pointer to `x`?

A.  `ptr(x)`
B.  `*x`
C.  `&x`
D.  `x*`
E.  It's not possible to create a pointer to `x` because it was not declared as
a pointer

6\.  When the following code is run, what prints?

```
char str[20] = "Baggins, Bilbo";
strtok(str, ", ");
printf("%s\n", str);
```

A.  `Baggins, Bilbo`
B.  `Baggins`
C.  `Bilbo`
D.  `Bilbo Baggins`
E.  `Baggins  Bilbo`

\pagebreak

7\.  Suppose we have defined a struct `City` like so:

```
typdef struct {
    char name[20];
    int pop;
    int elevation;
} City;
```

and then declared and initialized a `City`:

```
City c = {"Bozeman", 54539, 4817};
```

How do we change `c`'s `pop` field?

A.  `City.pop = 55345;`
B.  `c.pop = 55345;`
C.  `strcpy(pop, 55345);`
D.  `pop = 55345;`
E.  `pop->55345`

8\.  Are structs passed by value or by reference?

A.  Value
B.  Reference

9\.  Can functions return structs?

A.  Yes
B.  No

10\. Suppose the function `update_pop` is defined as follows:

```
void update_pop(City *c) {
    printf("Enter a new population: ");
    scanf("%d", &c->pop);
}
```

How would we call `update_pop` if we have a `City` stored in the variable `bzn`?

A.  `update_pop(bzn);`
B.  `update_pop(*bzn);`
C.  `update_pop(&bzn);`
D.  `update_pop(bzn.pop);`
E.  `bzn = update_pop(*bzn);`

11\.  In the function `update_pop` above, what is the data type of the
expression `&c->pop`?

A.  A pointer to a `City`
B.  A pointer to an `int`
C.  A `City`
D.  An `int`
E.  A struct
