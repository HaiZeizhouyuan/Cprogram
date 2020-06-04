/*************************************************************************
	> File Name: 19.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Jun  4 18:08:29 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int f(int y, int m, int d) {
    if (m <= 2) {
        m += 12;
        y--;
    }
    return (d + 2 * m + 3 * (m + 1) / 5 + y + y /4 - y / 100 + y / 400) % 7;
}

void init() {
    int sum = 0;
    for (int y = 1901; y < 2001; y++){
        for (int m = 1; m < 13; m++){
            if (f(y, m, 1) == 6) sum++;
        }
    }
    cout <<  sum << endl;
}


int main() {
    init();
    return 0;
}
