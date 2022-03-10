# Interpreter

## Details

How would I go about writing an interpreter in C?

## Links

1. stack overflow :

https://stackoverflow.com/questions/6887471/how-would-i-go-about-writing-an-interpreter-in-c

2. Recursive descent parser :

https://en.wikipedia.org/wiki/Recursive_descent_parser


## Code

Read the following C-code from bottom to top:

```
#include <stdio.h>
#include <stdlib.h>

double expression(void);

double vars[26]; // variables

char get(void) { char c = getchar(); return c; } // get one byte
char peek(void) { char c = getchar(); ungetc(c, stdin); return c; } // peek at next byte
double number(void) { double d; scanf("%lf", &d); return d; } // read one double

void expect(char c) { // expect char c from stream
    char d = get();
    if (c != d) {
        fprintf(stderr, "Error: Expected %c but got %c.\n", c, d);
    }
}

double factor(void) { // read a factor
    double f;
    char c = peek();
    if (c == '(') { // an expression inside parantesis?
        expect('(');
        f = expression();
        expect(')');
    } else if (c >= 'A' && c <= 'Z') { // a variable ?
        expect(c);
        f = vars[c - 'A'];
    } else { // or, a number?
        f = number();
    }
    return f;
}

double term(void) { // read a term
    double t = factor();
    while (peek() == '*' || peek() == '/') { // * or / more factors
        char c = get();
        if (c == '*') {
            t = t * factor();
        } else {
            t = t / factor();
        }
    }
    return t;
}

double expression(void) { // read an expression
    double e = term();
    while (peek() == '+' || peek() == '-') { // + or - more terms
        char c = get();
        if (c == '+') {
            e = e + term();
        } else {
            e = e - term();
        }
    }
    return e;
}

double statement(void) { // read a statement
    double ret;
    char c = peek();
    if (c >= 'A' && c <= 'Z') { // variable ?
        expect(c);
        if (peek() == '=') { // assignment ?
            expect('=');
            double val = expression();
            vars[c - 'A'] = val;
            ret = val;
        } else {
            ungetc(c, stdin);
            ret = expression();
        }
    } else {
        ret = expression();
    }
    expect('\n');
    return ret;
}

int main(void) {
    printf("> "); fflush(stdout);

    for (;;) {
        double v = statement();
        printf(" = %lf\n> ", v); fflush(stdout);
    }
    return EXIT_SUCCESS;
}
```

This is an simple recursive descend parser for basic mathematical expressions supporting one letter variables. Running it and typing some statements yields the following results:

```
> (1+2)*3
 = 9.000000
> A=1
 = 1.000000
> B=2
 = 2.000000
> C=3
 = 3.000000
> (A+B)*C
 = 9.000000
```

You can alter the get(), peek() and number() to read from a file or list of code lines. Also you should make a function to read identifiers (basically words). Then you expand the statement() function to be able to alter which line it runs next in order to do branching. Last you add the branch operations you want to the statement function, like

```
if "condition" then 
    "statements" 
else 
    "statements" 
endif. 

while "condition" do
    "statements"
endwhile

function fac(x)
   if x = 0 then
      return 1
   else
      return x*fac(x-1) 
   endif
endfunction
```

Obviously you can decide the syntax to be as you like. You need to think about ways of define functions and how to handle arguments/parameter variables, local variables and global variables. If preferable arrays and data structures. References∕pointers. Input/output? In order to handle recursive function calls you probably need to use a stack.

In my opinion this would be easier to do all this with C++ and STL. Where for example one std::map could be used to hold local variables, and another map could be used for globals...

It is of course possible to write a compiler that build an abstract syntax tree out of the code. Then travels this tree in order to produce either machine code or some kind of byte code which executed on a virtual machine (like Java and .Net). This gives better performance than naively parse line by line and executing them, but in my opinion that is NOT writing an interpreter. That is writing both a compiler and its targeted virtual machine.

If someone wants to learn to write an interpreter, they should try making the most basic simple and practical working interpreter.