# Convolution of Discrete Sequences
C program to perform convolution of two discrete sequences 

## Code Breakdown 

### Header 
```c
#include<stdio.h>
```
Basically _#include_ directive tells the preprocessor to insert the contents of another file (in this case stdio.h) into the source code at the point where the #include directive is found.

The C programming language provides many standard library functions for file input and output such as printf (to print something on the screen), scanf (to take inputs from keyboard), etc. These functions make up the bulk of the C standard library header <stdio.h>.

### Main Function
```c
main()
{
...
...
...
}
```
All C language programs must have a main() function. It’s the core of every program. It’s required. The main() function doesn’t really have to do anything other than be present inside your C source code. Eventually, it contains instructions that tell the computer to carry out whatever task your program is designed to do. But it’s not officially required to do anything.

### Variables 
```c
float x[15],h[15],y[15];
int i,j,m,n;
```
Float x[15] defines an array of floating point numbers whose lenght is 15.

int i defines an integer variable

### Input Output Function 
```c
printf("Enter the length of the first sequence, m = ");
scanf("%d",&m);
printf("Enter the length of the second sequence, n = ");
scanf("%d",&n);
```
#### Printf
In C programming language, printf() function is used to print the “character, string, float, integer, octal and hexadecimal values” onto the output screen.
We use printf() function with %d format specifier to display the value of an integer variable.
Similarly %c is used to display character, %f for float variable, %s for string variable, %lf for double and %x for hexadecimal variable.
To generate a newline,we use “\n” in C printf() statement.

#### Scanf
In C programming language, scanf() function is used to read character, string, numeric data from keyboard.

### Loops
```c
for ( init; condition; increment ) {
   statement(s);
}
```
Here is the flow of control in a 'for' loop −

The init step is executed first, and only once. This step allows you to declare and initialize any loop control variables. You are not required to put a statement here, as long as a semicolon appears.

Next, the condition is evaluated. If it is true, the body of the loop is executed. If it is false, the body of the loop does not execute and the flow of control jumps to the next statement just after the 'for' loop.

After the body of the 'for' loop executes, the flow of control jumps back up to the increment statement. This statement allows you to update any loop control variables. This statement can be left blank, as long as a semicolon appears after the condition.

The condition is now evaluated again. If it is true, the loop executes and the process repeats itself (body of loop, then increment step, and then again condition). After the condition becomes false, the 'for' loop terminates.

```c
for(i=0;i<m;i++)
{
scanf("%f",&x[i]);
}
```
Therefore by using a scanf function inside the for loop we can enter multiple vales into the array x[i], till the condition i,<m where m is the length of the array.




