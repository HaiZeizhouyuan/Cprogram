/*************************************************************************
	> File Name: 25_pritice.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jul 14 19:00:21 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 1000
int fib[3][max_n + 5] = {{1, 0}, {1, 1}, {1, 1}};

int main() {
    int n = 2;
    while (fib[n % 3][0] < max_n) {
        n += 1;
        int *a = fib[n % 3], *b = fib[(n - 1) % 3], *c = fib[(n - 2) % 3];
        for (int i = 0; i <= b[0]; i++) {
            a[i] = b[i] + c[i];
        }
        a[0] = b[0];
        for (int i = 1; i <= a[0]; i++) {
            if (a[i] < 10) continue;
            a[i + 1] = a[i] / 10;
            a[i] %= 10;
            a[0] += (i == a[0]);
        }
    }
    printf("%lld\n", n);
    return 0;
}
