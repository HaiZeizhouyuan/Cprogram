/*************************************************************************
	> File Name: 6.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 10 11:04:35 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 100

int hdpf(int n) {
    return (n * (n + 1) / 2) * (n * (n + 1) / 2 );
}

int pfh(int n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}
int main () {
    int re =  hdpf(max_n) - pfh(max_n);
    printf("%d\n", re);
    return 0;
}

