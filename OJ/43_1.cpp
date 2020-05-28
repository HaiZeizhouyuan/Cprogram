/*************************************************************************
	> File Name: 43_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 18:30:19 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 10000
int ans[max_n + 5][max_n + 5];
int def (int i; int j; int n){
    if (i + 1 == n) return ans[i][j];
}

int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> ans[i][j];
        }
    }
    cout << def(0, 0, n) << endl;
}
