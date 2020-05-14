/*************************************************************************
	> File Name: MAX_BUG.c
	> Author: 
	> Mail: 
	> Created Time: Thu May 14 19:06:12 2020
 ************************************************************************/

#include<stdio.h>
#define MAX(a, b) ({\
    __typeof(a) __a = (a);\
    __typeof(b) __b = (b);\
    __a > __b ? __a : __b;\
})
#define p(a) {\
    printf("%s = %d\n", #a, a);\
}
int main(){
    int  f = 7;
    p(MAX(2, 3));
    p(5 + MAX(2, 3));
    p(MAX(2, MAX(3, 4)));
    p(MAX(2, 3 > 4 ? 3 : 4));
    p(MAX(f++, 6));
    return 0;
}
