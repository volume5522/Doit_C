#include <stdio.h>
int result;

int Sum(int data1, int data2)
{
    result = data1 + data2;
}

void main()
{
    result = Sum(5,3);
    printf("5 + 3 = %d\n", result);
}