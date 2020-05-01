/*************************************************************************
	> File Name: 128.c
	> Author: 
	> Mail: 
	> Created Time: Fri May  1 16:19:18 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i;
    int sum = 0;
    for(i = 0; i < n; i++){
        int m;
        scanf("%d", &m);
        sum += m;
    }
    printf("%.2f\n", 1.0 * sum / n);
    return 0;
}
