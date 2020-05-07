/*************************************************************************
	> File Name: 2_3.c
	> Author: 
	> Mail: 
	> Created Time: Wed May  6 16:33:28 2020
 ************************************************************************/

#include<stdio.h>
#define max_m 4000000
int main(){
    int a = 1, b = 2;
    int sum = 2;
    while (a + b < max_m) {
        b = a + b;
        a = b - a;
        if (b & 1) continue;
        sum += b;
        
    }
    printf("%d\n", sum);
    return  0;
}
