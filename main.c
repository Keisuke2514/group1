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

        menu = ui();

        switch(menu)
        {
            case 0:
                createproblem();
                break;

            case 1:
                practice(id);
                break;

            case 2:
                test(id);
                break;

            case 3:
                problemlist(id);
                break;

            case 4:
                printf("プログラムを終了します");
                save_cards("date.csv",problem,id);
                return 0;
        }
    }   
}