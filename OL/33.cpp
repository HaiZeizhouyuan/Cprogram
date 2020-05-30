/*************************************************************************
	> File Name: 33.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 30 16:41:11 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100
int gcd (int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int check(int i, int j) {
    int ay = i % 10, ax = i / 10;
    int bx = j / 10, by = j % 10;
    if ((j * ay == i * bx) && (ax == by))  return 1;
    if ((j * ax == i * by) && (bx == ay))  return 1;
    else return 0;
}

int main () {
    int ans, sumi = 1, sumj = 1, c;
    for (int i = 11; i < max_n; i++) {
        for (int j = i + 1; j < max_n; j++) {
            if (!check(i, j)) continue;
            sumi *= i;
            sumj *= j;
        }
        c = sumj / gcd(sumi, sumj);
    }
    cout << c << endl;
    return 0;
}
