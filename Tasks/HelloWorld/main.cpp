#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{
    printf("Hello World\n");

    int a;
    for (a=0; a < 5; a = a + 1)
    {
        printf("a = %d\n",a);
    }

    printf("Final value of a is %x\n", a);

    printf("The answer is %x and thanks for the %s\n", 42, "fish" );

    while (true);
}

