/*************************************************************************
	> File Name: prime.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 10 18:28:46 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 100
int prime[max_n + 5] = {0};

void init_prime() {
    for (int i = 2; i <= max_n; i++) {
        if(prime[i]) continue;
        prime[++prime[0]] = i;
        for (int j = i * i; j <= max_n; j += i) {
            prime[j] = 1;
        }
    }
    return ;
}
int main(){
    init_prime();
    for (int i = 1; i <= prime[0]; i++) {
        printf("%d\n", prime[i]);
    }
    return 0;
}
