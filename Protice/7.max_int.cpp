/*************************************************************************
	> File Name: 7.max_int.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May  9 14:27:50 2020
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>
#include <stdarg.h>
int max_int(int n, ...){
    int ans = INT32_MIN, temp;
    va_list arg;
    va_start(arg, n);
    while (n--) {
        temp = va_arg(arg, int);
        if (temp > ans) ans = temp;
    }
    va_end(arg);
    return ans;
}
int main(){
    printf("%d\n", max_int(3, 1, 5, 3));
    printf("%d\n", max_int(2, 1, 6));
    printf("%d\n", max_int(3, 1, 6, 5, 27));
    return 0;
}
