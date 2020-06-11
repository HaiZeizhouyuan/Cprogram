/*************************************************************************
	> File Name: 253.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jun 10 19:35:27 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 2500
typedef struct cow {
    int min, max;
} Cow;

typedef struct sunscreen {
    int num, sum;
} Sun;

bool cmp1 (Cow a, Cow b) {
    if (a.max - b.max) return a.max < b.max;
    return a.max > b.max;
}
bool cmp2 (Sun a, Sun b) {
    return a.num < b.num;
}
int main() {
    int c, l, sumcow;
    cin >> c >> l;
    Cow cow[max_n + 5];
    Sun sun[max_n + 5];
    for (int i = 0; i < c; i++) {
        cin >> cow[i].min >> cow[i].max;
    }

    for (int i = 0; i < l; i++) {
        cin >> sun[i].num >> sun[i].sum;
    }
    sort(cow, cow + c, cmp1);
    sort(sun, sun + l, cmp2);
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c && sun[i].sum; j++) {
            if (sun[i].num <= cow[j].max && sun[i].num >= cow[j].min) {
                sun[i].sum -= 1;
                sumcow += 1;
            }
        }
    }
    cout << sumcow << endl;
    return 0;
}
