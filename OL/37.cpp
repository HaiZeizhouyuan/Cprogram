/*************************************************************************
	> File Name: 37.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 30 20:12:38 2020
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};
int is_prime[max_n + 5]= {1, 1, 0};

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++) {
            if(i * prime[j] > max_n) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int is_val (int n) {
    int tmp = n, dight = floor(log10(n)) + 1;
    int h = pow(10, dight - 1);
    for (int i = 0; i < dight - 1; i++) {
        tmp %= h;
        h /= 10;
        if (is_prime[tmp]) return 0;
    }
    tmp = n;
    for (int i = 0; i < dight - 1; i++) {
        tmp /= 10;
        if (is_prime[tmp]) return 0;
    }
    return 1;
}

int main () {
    init();
    int sum = 0, cnt = 11;
    for (int i = 5; i <= prime[0] && cnt; i++) {
        if (!is_val(prime[i])) continue;
        sum += prime[i];
        cnt--;
    }
    cout << sum <<endl;
    return 0;
}
