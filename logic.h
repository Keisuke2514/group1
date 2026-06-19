#ifndef LOGIC_H
#define LOGIC_H
extern int id;
 typedef struct{
    int id;
    char question[1024];
    char answer[1024];
 }Problem;
 Problem problem[1024];
 char answer[1024];

 #endif