#include<stdio.h>
#include"logic.h"

int main(void){
    id = lord_cards("date.csv",problem,1024);

    while(1){
        int menu;

        menu = ui();

        switch(menu)
        {
            case 0:
                printf("問題作成\n");
                break;

            case 1:
                printf("練習\n");
                break;

            case 2:
                printf("テスト\n");
                break;

            case 3:
                printf("問題一覧\n");
                break;

            case 4:
                printf("プログラムを終了します");
                return 0;
        }
    }   
}