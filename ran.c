#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((int)time(0));
    int r;
    r = rand() % 101;
    printf("%d ", r);
}