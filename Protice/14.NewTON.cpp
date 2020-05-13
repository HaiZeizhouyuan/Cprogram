/*************************************************************************
	> File Name: 14.NewTON.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue May 12 20:27:15 2020
 ************************************************************************/

#include<stdio.h>
#include <math.h>
#define EPSL 1e-6  //10的-6次幂, 在Ｃ语言中fabs(t) < 0,则t = 0;

inline double F(double x, double n) {
    return x * x - n;
}

inline double f(double x){
    return 2 * x;
}

double NewTon(double (*F)(double, double), double (*f)(double),double n) {
    double x1 = n / 2.0;
    while (fabs(F(x1,n)) > EPSL) {
        x1 -= F(x1, n) / f(x1);
    }
    return x1;
}

double my_sqrt(double n) {
    return NewTon(F,f,n);
}
int main(){
    double n;
    while (~scanf("%lf", &n)) {
        printf("%lf\n", my_sqrt(n));
    }

    return 0;
}

