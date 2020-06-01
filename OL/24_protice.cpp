/*************************************************************************
	> File Name: 24_protice.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun  1 17:57:47 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 10
#define max_m 1000000

int f[max_n + 5];
int num[max_n + 5];

void factorail(){
    f[0] = 1;
    num[0] = 1;
    for (int i = 1; i < max_n; i++) {
        f[i] = i * f[i - 1];
        num[i] = 1;
    }
    return ;
}

int init(int k, int val, int &x) {
    int step = k / val;
    x = 0;
    for (int t = 0; t <= step; x += (t <= step)) {
        t += num[x];
    }
    num[x] = 0;
    k %= val;
    return k;
}
int main () {
    factorail();
    int  k = max_m - 1, x;
    for (int i = max_n - 1; i >= 0; i--) {
        k = init (k, f[i], x);
        cout << x;
    }
    cout << endl;

    return 0;
}
