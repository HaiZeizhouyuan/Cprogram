/*************************************************************************
	> File Name: 10_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 16 19:27:12 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 2000000

int prime[max_n + 5] = {0};

int main() {
    for(int i = 2;i < max_n; i++){
        if(!prime[i]) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max_n) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }

    }
    long long sum = 0;
    for (int i = 1; i <= prime[0]; i++) {
        sum += prime[i];
    }
    printf("%lld\n", sum);
    return 0;
}


