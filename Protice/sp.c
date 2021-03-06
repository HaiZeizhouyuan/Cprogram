/*************************************************************************
	> File Name: sp.c
	> Author: 
    > Mail: 
    > Created Time: Sun May 17 14:02:48 2020
    ************************************************************************/

#include<stdio.h>
#define max_n 100
int prime[max_n + 5] = {0};
void init_prime(){
    for (int i = 2; i < max_n; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;

        }
    }
}
int main(){
    init_prime();
    for (int i = 1; i <= prime[0]; i++) {
        printf("%d\n", prime[i]);
    }
    return 0;
}
