#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    srand((unsigned)time(NULL));
    int a;
    for (int i = 0; i < 10; i++)
    {
        a = rand() % 10 + 1;
        printf("%d\n", a);
    }
}