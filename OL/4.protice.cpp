/*************************************************************************
	> File Name: 4.protice.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 10 09:56:48 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 1000
int is_pal(int val, int base) {
    int x = 0, temp = val;
    while (temp) {
        x = x * base + temp % base;
        temp /= base;
    }
    return val == x; 
}


int main () {
    int max_pal = 0;
    for (int i = 100; i < max_n; i++){
        for (int j = 100; j < max_n; j++) {
            if (is_pal(i * j, 10) && i * j > max_pal) max_pal = i * j;
        }
    }
    printf("%d\n", max_pal);
    return 0;
}
