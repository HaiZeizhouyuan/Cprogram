/*************************************************************************
	> File Name: 23.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jun  2 19:55:12 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 28123
int prime[max_n + 5] = {0};
int f[max_n + 5] = {0};
int cnt[max_n + 5] = {0};
void init () {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]){
            prime[++prime[0]] = i;
            f[i] = i + 1;
            cnt[i] = i * i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[j * prime[i]] = i;
            if (j % prime[i] == 0) {
                cnt[j * prime[i]] = cnt[i] * prime[j];
                f[j * prime[i]] = f[i] * (cnt[i] * prime[j] - 1) / (cnt[i] - 1);
                break;
            } else {
                cnt[j * prime[i]] = prime[i] * prime[i]
                f[j * prime[i]] = f[prime[i]] *f[j];
            }
        }
    }
    return ;
}


int main () {

    return 0;
}
