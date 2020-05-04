/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Sun May  3 14:11:17 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("FOOLISH\n");
    } else if ( n < 60) {
        printf("FAll\n");
    } else if ( n < 75) {
        printf("MEDIUM\n");

    } else {
        printf("GOOD\n");
        
    }
    return 0;
}
