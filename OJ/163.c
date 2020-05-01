#include<stdio.h>
#include<math.h>
int main(){
    double a, b ,o, p, d;
    p = acos(-1) / 180;
    scanf("%lf%lf%lf", &a, &b ,&o);
    d = sqrt(a * a + b * b - 2 * a * b * cos(o * p));
    printf("%.6lf\n",d);

    return 0;
}
