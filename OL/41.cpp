/*************************************************************************
	> File Name: 41.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Jun  6 18:10:59 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 10000000

int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {0};

void primescreen() {
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

int add_to_num(int *num, int n) {
    int ret = 0;
    for (int i = 0; i < n; i++) {
        ret = ret * 10 + num[i];
    }
    return ret;
}

int main () {
    primescreen();
    int num[10];
    int n = 7, ans = 0;
    while (n && !ans) {
        for (int i = 0; i < n; i++) num[i] = n - i;
        do {
            int temp = add_to_num(num, n);
            if (!is_prime[temp]) ans = temp;
        }while (prev_permutation(num, num + n) && !ans);
        n--;
    }
    cout << ans << endl;
    return 0;
}
