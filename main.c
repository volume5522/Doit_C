#include <stdio.h>

int main() {
    int score = 92;
    char grade;

    if(score>=90){
        grade ='A';
        printf("점수는 %d 이고, 등급은 %c 입니다.\n",score,grade);
    }
    printf("작업종료\n");
}
