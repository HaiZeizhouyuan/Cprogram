/*************************************************************************
	> File Name: 5_protice.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 10 10:49:37 2020
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a; 
}

int main() {
    int ans = 1;
    for (int i = 1; i <= 20; i++) {
        ans *= i / gcd(ans, i);
    }
    printf("%d\n", ans);
    return 0;
}

