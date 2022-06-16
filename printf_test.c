#include <stdio.h>
#include <string.h>

void PrintInt();
void PrintFloat();
void PrintChar();
void PrintStr();
void PrintPoint();

int main(int argc, char const *argv[])
{
    /* code */
    PrintInt();
    PrintFloat();
    PrintChar();
    PrintStr();
    PrintPoint();

    printf("Hello, World!\n");

    return 0;
}

void PrintInt()
{
    int i = 8;
    printf("Int: %d, %o, %x. \n", i, i, i);
    printf("EOF: %d\n", EOF);
}

void PrintFloat()
{
    float f = 0.111;
    double d = 0.1111111;
    printf("Float: %f, %f. \n", f, d);
    printf("Float: %6.1f, %6.6f. \n", f, d);
}

void PrintChar()
{
    char c = 'A';
    printf("Char: %c. \n", c);
}

void PrintStr()
{
    char s[] = "ABC";
    char *s1 = &s[1];
    printf("Str: %s, %s. \n", s, s1);
}

void PrintPoint()
{
    char s[] = "ABC";
    printf("Point: %p, %p, %p, %p. \n", s, &s[0], &s[1], &s[2]);
}
