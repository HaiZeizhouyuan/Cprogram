/*************************************************************************
	> File Name: 16.log.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 15 15:17:34 2020
 ************************************************************************/

#include <stdio.h>
//define DEBUG
#ifdef DEBUG
#define log(frm, args...) {\
    printf("[%s : %d] %s ", __func__,__LINE__, #args);\
    printf(frm, ##args);\
    printf("\n");\
}
#else
#define log(frm, args...)
#endif
#define contact(a, b) a##b
int main(){
    int a = 3, abc, def;
    int abcdef = 0;
    log("%d", abcdef);
    log ("%d",a);
    log("hello world");
    contact(abc, def) = 123;
    log("%d", abcdef);
    return 0;
}
