/*************************************************************************
	> File Name: 39.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jun  2 20:41:57 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000

int cnt[max_n + 5] = {0};

int gcd(int a, int b) {
    return (b ? (b, a % b) : a);
}

void init() {
    for (int n = 1; n <= 16; n++) {
        for (int m = n + 1; m <= 33; m++) {
            if (gcd(m, n) - 1) continue;
            int a = 2 * m * n;
            int b = m * m - n * n;
            int c = m * m + n * n; 
            for (int p = a + b + c; p <= max_n; p += (a + b + c)) {
                cnt[p] += 1;
        }
    }
    return ;
}

int main(){
    init();
    int p = 1;
    for (int i = 1; i <= max_n; i++) {
        if (cnt[i] > cnt[p]) p = i;
    }
    cout << p << endl;
    return 0;
}
