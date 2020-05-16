/*************************************************************************
	> File Name: string.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 16 15:09:01 2020
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char str[10] = {0};
    int n;
    while (~scanf("%d", &n)) {
        sprintf(str, "%x", n);
        printf("%s has %lu dight\n", str, strlen(str));
    }
    return 0;
}

