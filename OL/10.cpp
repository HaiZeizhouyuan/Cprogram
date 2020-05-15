/*************************************************************************
	> File Name: 10.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 15 23:53:02 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 2000000

long long prime[max_n + 5] = {0};
long long num = 0;
long long init_prime(long long n) {
    for (long long i = 2; i < n; i++) {
        if (prime[i]) continue;
        num += i;
        for (long long j = i * i; j < n; j += i) {
            prime[j] = 1;
        }
    }
    return num;
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", init_prime(n));
    return 0;
}

