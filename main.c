#include<stdio.h>
#include"logic.h"

int main(void){
    id = lord_cards("date.csv",problem,1024);
    int menu;


    while(1){
        printf("＝メニュー＝\n1:作問    2:練習    3:テスト  4:問題一覧\n");
        scanf("%d",&menu);

        if(menu == 1){
            createproblem();
        }

        else if(menu == 2){
            //kannsuu
        }

        else if(menu == 3){
            //kannsuu
        }

        else if(menu == 4){
            viewploblem();
        }

        else{
            printf("1～4の数字を入力してください");
        }
    }
}