/*************************************************************************
	> File Name: 45.c
	> Author: 
	> Mail: 
	> Created Time: Thu May  7 19:40:18 2020
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
int64_t Triangle(int64_t n) {
    return n * (n + 1) / 2;
}
int64_t Pentagonal(int64_t n) {
    return n * (3 * n - 1) / 2;
}
int64_t Hexagonal(int64_t n) {
    return n * (2 * n - 1);
}
int binary_search(int64_t (*func)(int64_t), int64_t x) {
    int head = 1, tail = x, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (func(mid) == x) return mid;
        if (func(mid) > x) tail = mid - 1;
        else head = mid + 1;
    }
    return 0;
}
int main() {
    int n = 144;
    for(;; n++) {
        if (binary_search(Triangle, Hexagonal(n)) == 0) continue;
        if (binary_search(Pentagonal, Hexagonal(n)) == 0) continue;
        printf("%"PRId64"\n", Hexagonal(n));
    break;
    }
    return 0;
}
