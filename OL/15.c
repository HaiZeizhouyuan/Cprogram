/*************************************************************************
	> File Name: 15.c
	> Author: 
	> Mail: 
	> Created Time: Tue May  5 20:53:28 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    long long m = 40, n = 20, ans = 1;
    while (m != 20 || n) {
        if (m != 20) ans *= (m--);
        if (n  && ans % n == 0) ans /= (n--);
    }
    printf("%lld\n", ans);
    return 0;
}
