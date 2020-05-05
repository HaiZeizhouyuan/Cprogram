/*************************************************************************
	> File Name: 2_2.c
	> Author: 
	> Mail: 
	> Created Time: Tue May  5 19:05:18 2020
 ************************************************************************/

#include<stdio.h>
#define max_m 4000000
int fib[3] = {0, 1, 2};
int main(){
    int n = 2, sum = 2;
    while (fib[(n - 1) % 3] + fib[(n - 2) % 3] < max_m) {
        n++;
        fib[n % 3] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
        if(fib[n % 3] & 1) continue;
        sum += fib[n % 3];
    }
    printf("%d\n", sum);
    return 0;
}
