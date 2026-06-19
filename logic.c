#include "logic.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>

int id = 0;
Problem problem[1024];
char answer[1024];

void createproblem(){
    problem[id].id=id+1;
    printf("問題を入力:");
    scanf("%1023s",problem[id].question);
    printf("答えを入力:");
    scanf("%1023s",problem[id].answer);
    id++;
}


void practice(int max){
    int count=0;
    int right=0;
    for(int i=0;i<max;i++){
        printf("%1023s:",problem[i].question);
        scanf("%1023s",answer);
        if(strcmp(answer,problem[i].answer)){
            printf("正解!\n");
            right++;
        }else{
            printf("不正解\n");
        }
        count++;
    }
    printf("正解数 %d/%d",right,max);
}

void test(int max){
    int r;
    int count=0;
    int right=0;
    srand((unsigned)time(NULL));
    for(int i=0;i<5;i++){
        r=rand()%max;
        printf("%s:",problem[r].question);
        scanf("%1023s",answer);
        if(strcmp(answer,problem[r].answer)){
            printf("正解!\n");
            right++;
        }else{
            printf("不正解\n");
        }
        count++;
    }
    printf("正解数 %d/%d",right,max);
}

void problemlist(int max){
    for(int i=0;i<max;i++){
        printf("%s\n",problem[i].question);
    }
}