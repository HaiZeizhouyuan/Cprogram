/*************************************************************************
	> File Name: 34.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 28 20:20:49 2020
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;
#define max_n 2540160

int fac[10];


void init(int n) {
    fac[0] = 1;
    for(int i = 1; i <= 9; i++) fac[i] = i * fac[i -1];
    return ;
}

int is_val(int n) {
    int sum = 0, tmp = n;
    while (tmp) {
        sum += fac[tmp % 10];
        tmp /= 10;
    }
    return sum == n;
} 
int main(){
    int sum = 0;
    for (int i = 3; i <= max_n; i++) {
        sum += (is_val(i) ? i : 0);
    }
    cout << sum << endl;
    return 0;
}
