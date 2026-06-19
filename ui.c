#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "ui.h"

int ui(void)

{
    int pos = 0;
    char key;

    while(1)
    {
        system("cls");

        printf("\n\n");

        if(pos == 0)
            printf("\x1b[33m[問題作成]\x1b[39m");
        else
            printf("[問題作成]");

        if(pos == 1)
            printf("\t\x1b[33m[練習]\x1b[39m\n\n");
        else
            printf("\t[練習]\n\n");

        if(pos == 2)
            printf("\x1b[33m[テスト]\x1b[39m");
        else
            printf("[テスト]");

        if(pos == 3)
            printf("\t\x1b[33m[問題一覧]\x1b[39m\n");
        else
            printf("\t[問題一覧]\n");

        key = getch();

        if(key == 'w' || key == 'W')
        {
            if(pos >= 2) pos -= 2;
        }

        if(key == 's' || key == 'S')
        {
            if(pos <= 1) pos += 2;
        }

        if(key == 'a' || key == 'A')
        {
            if(pos % 2 == 1) pos--;
        }

        if(key == 'd' || key == 'D')
        {
            if(pos % 2 == 0) pos++;
        }

        if(key == 13)
        {
            return pos;
        }
    }
}