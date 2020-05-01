/*************************************************************************
	> File Name: 160.c
	> Author: 
	> Mail: 
	> Created Time: Fri May  1 16:25:10 2020
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(){
    double r,h,s,S;
    scanf("%lf%lf", &r ,&h);
    s = PI * r * r / 2 + 2 * r * 2 * r / 2;
    S = 2 * s + h * (2 * r * PI / 2 + 2 * r + sqrt(4 * r * r + 4 * r * r));
    printf("%.2f\n", S);
    return 0;
}
