/*************************************************************************
	> File Name: define.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Jun  4 19:13:34 2020
 ************************************************************************/

#include<stdio.h>
void funcA(int);
void funcB(int);

int main() {
    funcA(5);
    return 0;
}

/*void funcB(int n){
    if (n == 0) return ;
    printf("funcB : %d\n", n);
    funcA(n - 1);
    return ;
}
void funcA(int n){
    if (n == 0) return ;
    printf("funcA : %d\n", n);
    funcB(n - 1);
    return ;
}*/

