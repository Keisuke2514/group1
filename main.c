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
                return 0;
        }
    }   
}