/*************************************************************************
	> File Name: switch1.c
	> Author: 
	> Mail: 
	> Created Time: Sun May  3 14:56:37 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("one ");
        case 2:
            printf("two ");
        case 3: 
            printf("three\n");
            break;
        default: 
            printf("error\n");
            break;
    }
    return 0;
}
