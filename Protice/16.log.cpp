/*************************************************************************
	> File Name: 16.log.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 14 20:44:33 2020
 ************************************************************************/

#include<stdio.h>
#define DEBUG
#ifdef DEBUG
#define log(frm, args...) {\
    printf("[%s : %d] %s", __func__, __LINE__, #args);\
    printf(frm, ##args);\
    printf("\n");\
}
#else
#define 
