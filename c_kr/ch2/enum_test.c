#include <stdio.h>

enum bool
{
    No,
    Yes
};

int i = 0;
// i = 1;

int main(int argc, char const *argv[])
{
    enum bool b = No;
    // enum bool a = no;

    printf("%d\n", b++);

    return 0;
}
