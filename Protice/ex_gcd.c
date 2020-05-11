/*************************************************************************
	> File Name: ex_gcd.c
	> Author: 
	> Mail: 
	> Created Time: Thu May  7 21:00:13 2020
 ************************************************************************/

#include<stdio.h>
int ex_gcd(int a, int b, int *x, int *y) {
    if (!b) {
        *x = 1, *y = 0;
        return a;
    } 
    *y -= a / b * (*x);
    return ex_gcd( b, a % b, y,x);
   
    

}
int main(){
    int a, b, x, y;
    while(~scanf("%d%d", &a, &b)) {
        printf("gcd(%d, %d) = %d\n", a, b,ex_gcd(a, b, &x, &y));
        printf("%d * %d + %d * %d = %d\n", a, x, b, y,a * x + b * y);
    }
    return 0;
}
