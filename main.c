#include <stdio.h>

int ShowMultiplication() {
    int i;
    for(i=1;i<=9;i++)
        printf("2 * %d = %d\n",i,i*2);
}


void main()
{
    ShowMultiplication();
}