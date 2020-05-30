/*************************************************************************
	> File Name: 35.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 30 18:38:51 2020
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define max_n 1000000

int prime [max_n + 5] = {0};
int is_prime [max_n + 5] = {0};

int dights(int n) {
    return floor(log10(n)) + 1;
}

void init() {
    for (int i = 2; i < max_n; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i; 
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int is_val(int n) {
    int a, tmp = n, d = dights(n);
    a = pow(10, d - 1);
    for(int i = 0; i < d - 1; i++) {
        tmp = tmp % a * 10 + tmp / a;
        if (is_prime[tmp]) return 0;
    }
    return 1;
}

int main() {
    init();
    int sum = 0;
    for (int i = 1; i <= prime[0]; i++) {
        sum += (is_val(prime[i])); 
    }
    cout << sum << endl;

    return 0;
}
