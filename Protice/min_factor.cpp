/*************************************************************************
	> File Name: min_factor.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 10 19:18:42 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 100
int prime[max_n + 5] = {0};
int init_prime(){
    for (int i = 2; i <= max_n; i++) {
        if(prime[i]) continue;
        prime[i] = i;
        for(int j = i * i; j <= max_n; j += i) {
           if(prime[j]) continue;
            prime[j] = i;
            
        }
    }
    return 0;
}

int main() {
    init_prime();
    for (int i = 2; i <= 100; i++) {
        printf("min_factor(%d) = %d\n", i,prime[i] );
    }
    return 0;
}
