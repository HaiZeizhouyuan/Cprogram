/*************************************************************************
	> File Name: 142.c
	> Author: 
	> Mail: 
	> Created Time: Fri May  1 21:26:07 2020
 ************************************************************************/

#include<stdio.h>
int chh(int n){
    int a, b, c, d, e;
    a = n / 10000;
    b = n % 10000 / 1000;
    c = n % 10000 % 1000 / 100;
    d = n % 10000 % 1000 % 100 / 10;
    e = n % 10000 % 1000 % 100 % 10 / 1;
    if(a == e && b == d){
        return 1;
    } else {
        return 0;
    }
}
int chk(int n){
    int i;
    for(i = 2; i < n; i++ ){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int i, k = 0;
    for(i = a; i <= b; i++){
        if(chh(i) == 1 && chk(i) == 1){
            if(k == 1){
                printf(" ");
            }
            printf("%d", i);
            k = 1;
        }
    }
    return 0;
}
