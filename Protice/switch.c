/*************************************************************************
	> File Name: switch.c
	> Author: 
	> Mail: 
	> Created Time: Sun May  3 14:41:50 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1: 
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3: 
            printf("three\n");
            break;
        default:
            printf("error\n"); 
        break;
    }
    return 0;
}
