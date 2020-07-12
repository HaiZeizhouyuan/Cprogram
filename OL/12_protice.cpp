/*************************************************************************
	> File Name: 12_protice.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 11 10:59:11 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 1000000

int prime[max_n + 5] = {0};
int f[max_n + 5] = {0};
int cnt[max_n + 5] = {0};

void approximate () {
    for (int i = 2; i <= max_n; i++){
        if (!prime[i]) {
            prime[++(prime[0])] = i;
            f[i] = 2;
            cnt[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                f[i * prime[j]] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
                cnt[i * prime[j]] = cnt[i] + 1;
                break;
            } else {
                f[i * prime[j]] = f[i] * f[prime[j]];
                cnt[i * prime[j]] = 1; 
            }
        }
    }
    return ;
}

int main() {
    approximate();
    int ans = 0, n = 0;
    while (ans <= 500) {
        n += 1;
        if (n & 1) ans = f[n] *f[(n + 1) >> 1];
        else ans = f[n >> 1] * f[n + 1]; 
    }
    printf("%d\n", n * (n + 1) / 2);
    return 0;
}

