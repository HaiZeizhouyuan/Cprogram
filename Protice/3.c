/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: Mon May  4 16:24:18 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int a = 4, b = 2, c;
    int *p = &a;
    --*p;
    c = a ^ b;
    printf("a = %d, b = %d\n", c ^ b, c ^ a);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
