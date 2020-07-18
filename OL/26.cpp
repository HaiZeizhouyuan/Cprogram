/*************************************************************************
	> File Name: 26.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 31 20:15:46 2020
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
#define max_n 1000

int keep[max_n + 5];

int get_len(int d) {
    memset(keep, 0, sizeof(keep));
    int r = 1, t = 0;
    while (r) {
        t += 1;
        keep[r] = t;
        r *= 10;
        r %= d;
        if (keep[r]) return t;
    }
    return 0;
}
int main () {
    int ans = 0, len = 0;
    for (int i = 2; i < max_n; i++) {
        int temp = get_len(i);
        if (temp > len) {
            ans = i;
            len = temp;
        }
    }
    cout << ans << " " << len << endl;

    return 0;

}
