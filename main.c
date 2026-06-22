#include<stdio.h>
#include<windows.h>
#include"logic.h"
#include"storage.h"
#include"ui.h"

int main(void){

    SetConsoleOutputCP(65001);//文字化け対策
    SetConsoleCP(65001);

    id = load_cards("date.csv",problem,1024);

    while(1){
        int menu;

        menu = ui();    //menuにui()のposを代入している

        switch(menu)
        {
            case 0:
                createproblem();
                break;

            case 1:
                if(id!=0)practice(id);
                else{
                    printf("問題がありません");
                    getchar();
                }
                break;

            case 2:
                if(id!=0)test(id);
                else{
                    printf("問題がありません");
                    getchar();
                }
                break;

            case 3:
                if(id!=0)problemlist(id);
                else{
                    printf("問題がありません");
                    getchar();
                }
                break;

            case 4:
                if(id!=0)delete();
                else{
                    printf("問題がありません");
                    getchar();
                }
                break;

            case 5:
                printf("プログラムを終了します");
                save_cards("date.csv",problem,id);
                return 0;
        }
    }   
}