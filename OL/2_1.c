/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: Tue May  5 18:12:47 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 44
#define max_m 4000000
int fib[max_n + 5] = {0};
int main(){
    int n = 2;
    long long sum = 0;
    fib[0] = 1;
    fib[1] = 2;
    while(fib[n-1] + fib[n-2] < max_m){ 
        fib[n] = fib[n-1] + fib[n - 2];
        n++;
    }
    for(int i = 0; i < n; i++){
        if(fib[i] & 1) continue;
        sum += fib[i];
    }
    printf("%lld\n",sum );
    return 0;
}
