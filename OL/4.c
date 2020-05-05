/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 19:19:39 2020
 ************************************************************************/

#include<stdio.h>
int is_val(int n, int base){
    int x = 0, temp = n;
    while(temp){
        x = x * base + temp % base;
        temp /= base;

    }
    return x == n;
}
int main(){
    int ans = 0;
    for(int a = 100; a < 1000; a++){
        for(int b = a; b < 1000; b++){
            if(is_val(a * b, 10) && a * b > ans) ans = a * b;

        }
    }
    printf("%d\n", ans);
    return 0;
}
