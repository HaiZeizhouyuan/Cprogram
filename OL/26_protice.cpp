/*************************************************************************
	> File Name: 26_protice.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jun  1 19:48:47 2020
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
#define max_n 1000

int keep[max_n + 5];

int get_len(int d){
    memset(keep, 0, sizeof(keep));
    int r = 1, t = 0;
    while (r) {
        t += 1;
        keep[r] = 1;
        r *= 10;
        r %= d;
        if (keep[r]) return t;
    }
    return 0;
}

int main () {
    int max = 0, ans;
    for (int i = 2; i < max_n; i++) {
        int len = get_len(i);
        if (len > max) {
            max = len;
            ans = i;
        }
    }
    cout << ans << " " << max << endl;
    return 0;
}
