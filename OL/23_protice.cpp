/*************************************************************************
	> File Name: 23_protice.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Jul 12 14:32:32 2020
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 28123

int prime[max_n + 5] = {0};
int f[max_n + 5] = {0};
int cnt[max_n + 5] = {0};

void appro() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) {
            prime[++(prime[0])] = i;
            f[i] = i + 1;
            cnt[i] = i * i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                cnt[i * prime[j]] = cnt[i] * prime[j];
                f[i * prime[j]] = f[i] * (cnt[i] * prime[j] - 1) / (cnt[i] - 1);
                break;
            } else {
                f[i * prime[j]] = f[i] * f[prime[j]];
                cnt[i * prime[j]] = prime[j] * prime[j];
            }
        }
    }
    return ;
}

int main () {
    appro();
    memset(prime, 0, sizeof(prime));
    for (int i = 2; i <= max_n; i++) {
        f[i] -= i;
        if (f[i] <= i) continue;
        f[++(f[0])] = i;
        prime[i] = 1;
    }
    int sum = 0;
    for (int i = 1; i <= max_n; i++) {
        int flag = 1;
        for (int j = 1; flag && f[j] < i; j++) {
            flag = !prime[i - f[j]];
        }
        if (!flag) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
