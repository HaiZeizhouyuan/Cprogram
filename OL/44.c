/*************************************************************************
	> File Name: 44.c
	> Author: 
	> Mail: 
	> Created Time: Sun May 17 18:19:19 2020
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>

typedef long long int1;
inline int1  p(int1 n) {
    return n * (3 * n - 1) / 2;
}
int1 binary_search (int1 (*func)(int1), int1 l, int1 r, int1 x) {
    int1 head = l, tail = r, mid;
    while (head <=tail) {
        mid = (head + tail) >> 1;
        if (func(mid) == x) return 1;
        if (func(mid) < x) head = mid + 1;
        else tail = mid -1;
    }
    return 0;
}
int main(){
    int1 n  = 2, D = INT32_MAX;
    while (p(n) - p(n - 1) < D) {
       int1 pk = p(n); 
        for (int j = n - 1; j >= 1; j--) {
            int1 pj = p(j);
            if (pk - pj > D) break;
            int flag = 1;
            flag = flag && (binary_search(p, 1, pk + pj, pk + pj));
            flag = flag && (binary_search(p, 1, pk - pj, pk - pj));
            if (!flag) continue;
            D = pk - pj;
            printf("%lld - %lld = %lld\n", pk, pj, D);
        }
        n += 1;
    }
    printf("%lld\n", D);
    return 0;
}
