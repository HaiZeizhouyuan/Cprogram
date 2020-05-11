/*************************************************************************
	> File Name: 32.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 10 16:07:53 2020
 ************************************************************************/
#include <stdio.h>
int is_val(int a, int b, int c) {
    if (dight(a) + dight(b) + dight(c) - 9) return 0;
    int num[10] = {0}, flag = 1;
    num[0] = 1;
    flag = flag && 
}
int main(){
    int sum = 0;
    for (int a = 1; a < 100; a++) {
        for (int b = a + 1; b < 10000; b++) {
            if (!is_val(a, b, a * b)) continue;
            
            sum += a * b;

        }
    }
    printf("%d\n", sum);
    return 0;
 }
