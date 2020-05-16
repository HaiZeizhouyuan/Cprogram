/*************************************************************************
	> File Name: max_factor.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 10 20:00:28 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 10000

int prime[max_n + 5] = {0};
void init_prime() {
    for(int i = 2; i <=max_n; i++){
        if(prime[i]) continue;
        for(int j = i; j <= max_n; j+= i){
            prime[j] = i;
        }
    }
    return ;
}
int main(){
    init_prime();
    for (int i = 2; i <= max_n; i++) {
        printf("max_factor(%d) = %d\n", i, prime[i]);
    }
    return 0;
}
