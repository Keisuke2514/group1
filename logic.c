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
        printf("%s:",problem[i].question);
        scanf("%1023s",answer);
        if(strcmp(answer,problem[i].answer)==0){
            printf("正解!\n");
            right++;
        }else{
            printf("不正解\t正解:%s\n",problem[i].answer);
        }
        count++;
    }
    printf("正解数 %d/%d",right,max);
    getchar();
    getchar();
}

void test(int max){
    int qnumber=5;
    if(max<qnumber)qnumber=max;//問題が5問以下の時問題数をテストにする
    srand((unsigned)time(NULL));
    int r;
    int count=0;
    int right=0;
    int list[1024];
    for(int x=0;x<max;x++){
        list[x]=x;
    }
    shuffle(list,max);
    for(int i=0;i<qnumber;i++){
        r=list[i];
        printf("%s:",problem[r].question);
        scanf("%1023s",answer);
        if(strcmp(answer,problem[r].answer)==0){
            printf("正解!\n");
            right++;
        }else{
            printf("不正解\n");
        }
        count++;
    }
    printf("正解数 %d/%d",right,max);
    getchar();
    getchar();
}

void problemlist(int max){
    for(int i=0;i<max;i++){
        printf("%s\n",problem[i].question);
    }
    getchar();
}

void shuffle(int a[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
}

void delete(){
    memset(problem, 0, sizeof(problem));
    id=0;
    printf("削除成功");
    getchar();
}