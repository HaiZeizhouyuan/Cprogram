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
int f[2][max_m + 5];
int w[max_n  + 5] = {1, 2, 5, 10, 20, 50, 100, 200};

int main() {
    for (int k = 0; k < max_n; k++) {
        int i = k % 2;
        f[i][0] = 1;
        for (int j = 1; j <= max_m; j++) {
            f[i][j] = f[i ^ 1][j];
            if (j >= w[k]) f[i][j] += f[i][j - w[k]];
        }
    }
    cout << f[(max_n - 1) % 2][max_m] << endl;
    return 0;
}
