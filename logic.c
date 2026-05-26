#include "logic.h"
#include <stdio.h>

void createproblem(){
    problem[id].id=id+1;
    printf("問題を入力:");
    scanf("%s",&problem[id].question);
    printf("答えを入力:");
    scanf("%s",&problem[id].answer);
    id++;
}