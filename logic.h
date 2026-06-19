#ifndef LOGIC_H
#define LOGIC_H
extern int id;
 typedef struct{
    int id;
    char question[1024];
    char answer[1024];
 }Problem;
 extern Problem problem[1024];
 extern char answer[1024];

 void createproblem(void);
void practice(int id);
void test(int id);
void problemlist(int max);

 #endif