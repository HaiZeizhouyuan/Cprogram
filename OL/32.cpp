/*************************************************************************
	> File Name: 32.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 10 16:07:53 2020
 ************************************************************************/
#include <stdio.h>
#include <math.h>
int add_to_num(int x, int *num){

    while (x) {
        if(num[x % 10]) return 0;
        num[x % 10] += 1; 
        x /= 10;
    }
    return 1;

}
inline int dight(int n) {
    if (n == 0) return 1;
    return floor(log10(n)) + 1;

}
int is_val(int a, int b, int c) {
    if (dight(a) + dight(b) + dight(c) - 9) return 0;
    int num[10]= {0};
    num[0] = 1;
    if(add_to_num(a, num) && add_to_num(b, num) && add_to_num(c, num)) return 1;
    return 0;

}
int keep[10000] = {0};
int main(){
    int sum = 0;
    for (int a = 1; a < 100; a++) {
        for (int b = a + 1; b < 10000; b++) {
            if (!is_val(a, b, a * b)) continue;
            if(keep[a * b]) continue;
            printf("%d * %d = %d\n", a, b, a * b); 
            sum += a * b;
            keep[a * b] = 1;

        }
    }
    printf("%d\n", sum);
    return 0;
 }
