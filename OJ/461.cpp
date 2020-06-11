/*************************************************************************
	> File Name: 461.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jun 10 14:15:42 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main () {
    int n, num = 0, sum = 0;
    scanf("%d", &n);
    char grad,a;
    char inf[4];
    for (int i = 0; i < n; i++) {
        scanf("%s%s%s", &grad,&a, inf);
        if (grad == 'C') num += 1;
        else sum += atoi(inf);
    }
    printf("%d %d\n", num, sum);
    return 0;
}
