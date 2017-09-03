#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main(int argc,char **argv)
{
    int i,j;
    int x = 1;
    int y = 10;
    for(x=1;x<10;x++)
    {
        system("clear");
        for(i=0;i<x;i++)
            printf("\n");
        for(j=0;j<y;j++)
            printf(" ");
        printf("o");
        printf("\n");
        sleep(1);
    }
    return 0;

}
