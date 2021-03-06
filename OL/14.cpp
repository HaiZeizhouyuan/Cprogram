/*************************************************************************
	> File Name: 14.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 16 12:35:24 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 1000000

typedef long long ll;

ll get_len(ll n) {
    if (n == 1) return 1;
    if (n & 1) return get_len(3 * n + 1) + 1;
    return get_len(n >> 1) + 1;
}

int main () {
    int ans = 0, len = 0;
    for (int i = 1; i < max_n; i++) {
        int tmp = get_len(i);
        if (tmp <= len) continue;
        ans = i;
        len = tmp;
    }
    printf("%d\n", ans);
    return 0;
}
