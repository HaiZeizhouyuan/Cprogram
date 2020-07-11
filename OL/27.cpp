/*************************************************************************
	> File Name: 27.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Jun  7 15:13:26 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000


int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {0, 1};

void primescreen() {
    for (int i = 2; i <= max_n; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int is_val(long long n) {
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int get_len(int a, int b) {
    int cnt = 0;
    for (int n = 0; ; n++) {
        long long temp = n * n + a * n + b;
        if (temp < 0) break;
        if (!is_val(temp)) break;
        cnt++;
    }
    return cnt;
}

int main() {
    primescreen();
    long long x, y, len = 0;
    for (int b = 2; b <= 1000; b++){
        if (is_prime[b]) continue;
        for (int a = -999; a < 1000; a += 2) {
            if (a + b + 1 < 2 || is_prime[a + b + 1]) continue;
            int temp = get_len(a, b);
            if (temp > len) {
                len = temp;
                x = a, y = b;
            }
        }
    }
    cout << x * y << endl;
    return 0;
}

