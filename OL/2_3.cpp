/*************************************************************************
	> File Name: 2_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Jul  9 20:30:23 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 4000000

int main () {
    int fibs[3] = {0, 1, 2};
    int m = 2, sum = 2;
    while (fibs[(m - 2) % 3] + fibs[(m - 1) % 3] <= max_n) {
        m += 1;
        fibs[m % 3] = fibs[(m - 2) % 3] + fibs[(m - 1) % 3];
        if (fibs[m % 3] & 1) continue;
        else sum += fibs[m % 3];
    } 
    printf("%d\n", sum);
    return 0;
}
