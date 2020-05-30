/*************************************************************************
	> File Name: 31_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 30 14:57:07 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 8
#define max_m 200

int f[max_n + 5];
int w[max_n  + 5] = {1, 2, 5, 10, 20, 50, 100, 200};

int main() {
    f[0] = 1;
    for (int k = 0; k < max_n; k++) {
        for (int j = w[k]; j <= max_m; j++) {
             f[j] += f[j - w[k]];
        }
    }
    cout << f[max_m] << endl;
    return 0;
}
