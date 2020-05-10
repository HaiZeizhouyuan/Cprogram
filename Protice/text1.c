/*************************************************************************
	> File Name: text1.c
	> Author: 
	> Mail: 
	> Created Time: Thu May  7 18:48:47 2020
 ************************************************************************/

#include<stdio.h>
int fac(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    return n * fac(n - 1);
}
int main() {
    int n;
    while(~scanf("%d", &n)) {
        printf("%d\n", fac(n));
    }
    return 0;
}
