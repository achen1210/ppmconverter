#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdint.h>
#include "ppmconverter.h"
#include <ctype.h>

int main(int argc, char *argv[])
{
    printf("P3\n");
    int c = getchar();
    c = getchar();
    c = getchar();
    c = getchar();
    while(c != 10)
    {
        printf("%c",c);
        c = getchar();
    }
    c = getchar();
    printf("\n");
    while(c != 10)
    {
        printf("%c",c);
        c = getchar();
    }
    c = getchar();
    printf("\n");
    while(c != EOF)
    {
        printf("%d", c);
        c = getchar();
        if(c != EOF)
            printf(" ");
    }
    return 0;
}
