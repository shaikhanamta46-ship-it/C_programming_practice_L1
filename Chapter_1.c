#include <stdio.h>

int main() {
    int a;//variable declaration
    a = 6;//varibale initialiation
    printf("The output of the program is %d",a); // "%d" is format specifier
    return 0;
}
// RULES FOR NAMING VARIABLES IN C
// 1. First character must be an alphabet or underscore (_)
// 2. No commas, blanks are allowed.
// 3. No special symbol other than (_) allowed.
// 4. Variable names are case sensitive.
#include <stdio.h>

int main()
{
    int a;
    int b;
    int hello;
    int anam_good;
    return 0;
}
#include <stdio.h>

int main() {
    //int a;
    //a = 4;
    int a = 1;
    printf("%d\n",a);
    float b = 1.4;
    printf("%f\n",b);
    //floab b;
    //b = 1.45
    char c = 'd';
    printf("%c\n",c);
    //char c;
    //c = a
    return 0;

}
#include <stdio.h>

int main() {

    printf("Size of char = %d bytes\n", sizeof(char));
    printf("Size of int = %d bytes\n", sizeof(int));
    printf("Size of float = %d bytes\n", sizeof(float));

    return 0;
}

//exe = executable for windows

#include <stdio.h>

int main() {
    //i am good
    printf("hello world");
    //return 0 is returning 0 to os
    return 0;
}

//multi-line comments
/* this is my program to execute the multi line comments
program 05_commentc.c
date = 21may2026
*/
//1 hours 1 min 1 sec
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("The value of a is %d",a);
    return 0;
}
#include <stdio.h>

int main() {
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n';//represent a new line..
    printf("Hey i am good \t Nice");
    return 0;
}
/*| Escape Sequence | Meaning         | Example                         |
| --------------- | --------------- | ------------------------------- |
| `\n`            | New line        | Moves text to the next line     |
| `\t`            | Tab space       | Adds horizontal spacing         |
| `\\`            | Backslash       | Prints `\`                      |
| `\'`            | Single quote    | Prints `'`                      |
| `\"`            | Double quote    | Prints `"`                      |
| `\r`            | Carriage return | Moves cursor to start of line   |
| `\b`            | Backspace       | Deletes previous character      |
| `\f`            | Form feed       | Page break (rarely used)        |
| `\0`            | Null character  | End of string in some languages |
*/