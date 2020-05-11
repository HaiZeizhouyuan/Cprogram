/*************************************************************************
	> File Name: 5.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 10 14:36:57 2020
 ************************************************************************/

#include <stdio.h>
int gcd(int a, int b){
    return (b ? gcd(b, a % b) : a);
}
int main(){
    int ans = 1;
    for (int i = 1; i <=20; i++) {
        ans *= i / gcd(ans, i);
    }
    printf("%d\n", ans);
    return 0;
}
