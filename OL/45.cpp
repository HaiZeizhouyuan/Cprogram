/*************************************************************************
	> File Name: 45.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 31 15:50:13 2020
 ************************************************************************/

#include<iostream>
using namespace std;

typedef long long ll;

ll w(ll n){
    return n * (3 * n - 1) / 2;
}

ll s(ll n) {
    return n * (2 * n - 1);
}

int binary_search(ll (*fac)(ll), int x) {
    int f = 1, l = x, mid;
    while (f <= l) {
        mid = (f + l) >> 1;
        if (fac(mid) == x) return 1;
        if (fac(mid) < x) f = mid + 1;
        else l = mid -1;
    }
    return 0;
}
int main() {
    ll n = 144;
    while (1) {
        if (binary_search(w, s(n))) break;
        n++;
    }
    cout << s(n) << endl;
    return 0;
}
