//Andrew Chen
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdint.h>
#include "ppmconverter.h"

int main(int argc, char *argv[])
{
    printf("P6\n");
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
    printf("\n");
    c = getchar();
    while(c != EOF)
    {
        int counter = 0;
        if(c == 32 || c == 10){}
        else if(c == '0')
            printf("%c",0);
        else
        {
            int temp[3] = {-1,-1,-1};
            while(!(c == 32 || c == 10) && counter < 3)
            {
                temp[counter] = c - '0';
                //printf("%d+",temp[counter]);
                c = getchar();
                counter++;
            }
            if(temp[2] == -1 && temp[1] == -1)
                counter = temp[0];
            else if(temp[2] == -1) 
                counter = temp[0] * 10 + temp[1];
            else
                counter = temp[0]* 100 + temp[1] * 10 + temp[2];   
        printf("%c", counter);
        //printf(" c: %c, d: %d ", counter, counter);
        }
        c = getchar();
    }
    return 0;
}
