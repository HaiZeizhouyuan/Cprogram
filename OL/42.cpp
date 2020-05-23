/*************************************************************************
	> File Name: 42.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 17 16:35:07 2020
 ************************************************************************/

#include<stdio.h>
#include "words.txt"
inline int triangje (int n) {
    return n * (n + 1) / 2;
}

int binary_search(int (*func)(int), int l, int r, int x) {
    int head = l,tail = r, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (func(mid) == x) return 1;
        if (func(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int is_val (const char *str) {
    int sum = 0;
    for (int i = 0; str[i]; i++) {
        sum += (str[i] - 'A' + 1);
    }
    return binary_search(triangje,1, sum ,sum);
}

int main(){
    int n = sizeof(str) / 100, cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += (is_val (str[i]));
    }
    printf("%d\n", cnt);
    return 0;
}

