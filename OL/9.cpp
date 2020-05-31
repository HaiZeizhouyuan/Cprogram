/*************************************************************************
	> File Name: 9.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 31 14:09:54 2020
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;


int gcd (int a, int b) {
    return (b ? gcd(b, a % b) : a);
        
}

int main () {
    int ans = 0;
    for (int n=  1; n <= 16; n++) {
        for (int m= n + 1; 2 * m * n + m * m < 1000; m++) {
            if (gcd(n, m) - 1) continue;
            int a = 2 * n * m;
            int b = m * m - n * n;
            int c = m * m + n * n;
            if (1000 % (a + b + c) == 0) {
                int k = 1000 / (a + b + c);
                ans = a * b * c * pow(k,  3);
            }
            if(ans) break;
        }
        if (ans) break;
    }
    cout << ans << endl;
    return 0;
}
