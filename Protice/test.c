/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Sun May  3 17:29:50 2020
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    long long a = pow (2, 31) + pow(2,30) + pow(2, 23)  + pow(2, 21) + pow (2, 19) + pow (2, 0);
    long long b = pow(2, 31) + pow (2, 12) +pow(2,10) + pow(2, 8) + pow(2,1) + pow(2, 0);
    long long c = pow(2, 6) + pow(2, 7) + pow(2,11) + pow(1,13) + pow(2, 15) + pow(2, 24);
    long long d = pow(2, 6) + pow(2, 7) + pow(2,11) + pow(1,13) + pow(2, 15) + pow(2, 25);
    long long e =pow(2, 0) + pow(2, 1) + pow(2, 8) + pow(2, 10) + pow(2, 12) +pow(2, 31);


    printf("%lld\n%lld\n%lld\n%lld\n%lld\n", a, b, c, d, e);
    return 0;
}
