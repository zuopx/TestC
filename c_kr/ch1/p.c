#include <stdio.h>

void P2();
void P4();
void P5();
void P12();

int main(int argc, char const *argv[])
{
    P12();

    return 0;
}

// 1-2
// warning: unknown escape sequence: '\c'
void P2()
{
    printf("Hello, World. \c \n");
}

// 1-4 F = (C + 32) * (9 / 5)
void P4()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -20.0;
    upper = 200.0;
    step = 10;

    printf("%7s %6s\n", "celsuis", "fahr");
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (celsius + 32.0) * (9.0 / 5.0);
        printf("%7.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}

void P5()
{
    for (int fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}

void P12()
{
    int c;
    int state = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == '\t' || c == ' ')
        {
            if (state == 1)
            {
                putchar('\n');
            }
            state = 0;
        }
        else
        {
            putchar(c);
            state = 1;
        }
    }
}