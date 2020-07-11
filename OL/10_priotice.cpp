/*************************************************************************
	> File Name: 10_priotice.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 10 19:08:37 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 2000000

long long prime[max_n + 5] = {0};

void primescreen() {
    for (long long i = 2; i <= max_n; i++) {
        if (prime[i]) continue;
        prime[++(prime[0])] = i;
        for (long long j = i * i; j <= max_n; j += i) {
            prime[j] = 1;
        }
    }
    return ;
}

int main () {
    primescreen();
    long long ans = 0;
    for (int i = 1; i <= prime[0]; i++) ans += prime[i];
    printf("%lld\n", ans);
    return 0;
}

