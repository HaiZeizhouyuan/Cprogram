/*************************************************************************
	> File Name: 7.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 15 22:51:17 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 105000 
long long prime[max_n + 5] = {0};

void init_prime(){
    for (long long i = 2; i <= max_n; i++) {
        if(prime[i]) continue;
        prime[++prime[0]] = i;
        for (long long j = i * i; j <= max_n; j += i) {
            prime[j] = 1;
        }
    }
    return ;
}
int main() {
    long long n;
    scanf("%lld",&n);
    init_prime();
    printf("%lld\n", prime[n]);
    return 0;
}

