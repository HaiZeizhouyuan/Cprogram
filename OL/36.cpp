/*************************************************************************
	> File Name: 36.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 20:56:17 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000000

int is_rev(int n, int base) {
    int sum = 0, tmp = n;
    while (tmp) {
        sum = sum * base + tmp % base;
        tmp /= base;
    }
    return sum == n;
}

int is_val(int n) {
    return is_rev(n, 10) && is_rev(n, 2);
}

int main () {
    int sum = 0;
    for (int i = 1; i <= max_n; i++) {
        sum += (is_val(i) ? i : 0);
    }
    cout << sum << endl;
    return 0;
}
