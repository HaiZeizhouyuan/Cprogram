/*************************************************************************
	> File Name: 3.protice.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Jul  9 20:53:29 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 600851475143

int main () {
    long long ans = 0, num = max_n;
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) ans = i;
        while(num % i == 0) num /= i; 
    }  
    if (num != 1) ans = num;
    printf("%lld\n", ans);
    return 0;
}
