/*************************************************************************
	> File Name: 7.protice.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 10 11:24:54 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 200000

long long prime[max_n + 5] = {0};
long long prime1[max_n + 5] = {0};
void PrimeScreen() {
    for (long long i = 2; i <= max_n; i++) {
        if (prime[i]) continue;
        prime[++(prime[0])] = i;
        for (long long j = i * i; j <= max_n; j += i) prime[j] = 1;

    }
    return ;
}

void LinearSeive() {
    for (long long i = 2; i <= max_n; i++) {
        if (!prime1[i]) prime1[++(prime1[0])] = i;
        for (long long j = 1; j <= prime1[0]; j++) {
            if (i * prime1[j] > max_n) break;
            prime1[i * prime1[j]] = 1;
            if (i % prime1[j] == 0) break;
        } 
    }
    return ;
}

void output(int *prime){
    for (int i = 1; i < prime[0]; i++) printf("%d ", prime[i]);
    printf("\n");
}
int main() {
    PrimeScreen();
    LinearSeive();
    printf("%lld\n", prime[10001]);
    //output(prime);
    //output(prime1);
    return 0;
}
