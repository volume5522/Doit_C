#include <stdio.h>

int main() {
    int sum=0;
    int num=1;
    for( ; ; ){
        printf("num(%d) + sum(%d) = ",num, sum);
        sum = sum + num;
        printf("%d\n",sum);
        num++;
        if(num>5)break;
    }
    printf("\nResult : num = %d  sum = %d\n",num,sum);
}

