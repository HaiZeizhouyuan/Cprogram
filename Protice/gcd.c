/*************************************************************************
	> File Name: gcd.c
	> Author: 
	> Mail: 
	> Created Time: Thu May  7 20:32:44 2020
 ************************************************************************/

#include<stdio.h>
int gcd(int a, int b){
    return (b ? gcd(b, a % b) : a);
}
int main(){
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        printf("gcd(%d,%d) = %d\n", a, b, gcd(a, b));
    }
    return 0;
}
