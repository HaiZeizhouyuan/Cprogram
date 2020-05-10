#include<stdio.h>
#include<math.h>
int devide(int n){
    if (n % 6 == 0)  return 1;
    return 0;
}
int prime(int n){
    int num = 1;
    for(int i = 2; i < n; i++){
        if (n % i == 0) num = 0;
    }
    return num;
}
int chekh(int n){
    int k = n / 100;
    return prime(k);
}
int cheto(int n){
    int o =  n % 100;
    double k = sqrt(o);
    if (k == ceil(k))  return 1 ;
    return 0;
}
void check(int a, int b){   
    for(int i = a; i < b + 1; i++){
        if(chekh(i) && devide(i) && cheto(i)) {
          printf("%d ",i);
        }
    }
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    check(a, b);

}
