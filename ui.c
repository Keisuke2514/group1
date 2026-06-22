#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  //キーボードの入力をリアルタイムで受け取るためのライブラリ
#include "ui.h"

int ui(void)

{
    int pos = 0;    //今どの機能を選択しているかを表す変数
    char key;   //押されたキーボードの文字を一時的に保存する変数

    while(1)
    {
        system("cls");  //画面を一度全部消去するコマンド　その効果でマニューがその場で動いているように見せている

        printf("\n\n");

        if(pos == 0)
            printf("\x1b[33m[問題作成]\x1b[39m");   //\x1b[33mは文字を黄色に，\x1b[39mは文字をデフォルトの色に戻す
        else
            printf("[問題作成]");

        if(pos == 1)
            printf("\t\x1b[33m[練習]\x1b[39m\n\n"); //\tや\nなどで表示する位置を決めている
        else
            printf("\t[練習]\n\n");

        if(pos == 2)
            printf("\x1b[33m[テスト]\x1b[39m");
        else
            printf("[テスト]");

        if(pos == 3)
            printf("\t\x1b[33m[問題一覧]\x1b[39m\n\n");
        else
            printf("\t[問題一覧]\n\n");

        if(pos == 4)
            printf("\x1b[33m[削除]\x1b[39m");
        else
         printf("[削除]");

        if(pos == 5)
            printf("\t\t\x1b[33m[終了]\x1b[39m\n");
        else
            printf("\t\t[終了]\n");

        key = getch();  //キーボードから1文字入力を受け，それを変数keyに入れる

        //上下の移動
        if(key == 'w' || key == 'W')
        {
            if(pos >= 2)
            pos -= 2;   //2以上なら1個上の行へ（posを2減らす）
        }

        if(key == 's' || key == 'S')
        {
            if(pos <= 3)
            pos += 2;   //3以下なら1個下の行へ（posを2増やす）
        }

        //左右の移動
        if(key == 'a' || key == 'A')
        {
            if(pos % 2 == 1)
            pos--;  //奇数（右側）にいるなら、1引いて左側へ
        }

        if(key == 'd' || key == 'D')
        {
            if(pos % 2 == 0 && pos < 5)
            pos++;  //偶数（左側）かつ5未満なら、1足して右側へ
        }

        if(key == 13)       //Enterキーを押したとき
        {
            return pos;
        }
    }
}