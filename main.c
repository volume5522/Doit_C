#include <stdio.h>

int ShowMultiplication(int step) {
    int i;
    for(i=1;i<=9;i++)
        printf("%d * %d = %d\n",step,i,step*i);
}


void main()
{
    int m;
    for(m=1;m<=9;m++)
        ShowMultiplication(m);

}