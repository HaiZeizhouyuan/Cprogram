/*************************************************************************
	> File Name: 9_protice.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun  1 14:36:51 2020
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

int gcd(int a, int b) {
    return (b ? gcd(b, a %b) : a);
}

int ans = 0;
int main () {
    for (int n = 1; n <= 16; n++) {
        for (int m = n + 1;  m * n + m * m < 500; m++) {
            if (gcd(m, n) - 1) continue;
            int a = 2 * n * m;
            int b = m * m - n * n;
            int c = m * m + n * n;
            if (1000 % (a + b + c) == 0){
                int k = 1000 / (a + b + c);
                ans = a * b * c * pow (k, 3);
            }
            if (ans) break;
        }
        if(ans) break;
    }
    cout << ans << endl;
    return 0;
}
