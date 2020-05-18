/*************************************************************************
	> File Name: 149.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon May 18 23:07:19 2020
 ************************************************************************/

#include<stdio.h>
#include <string.h>
int main(){
    char str[10][55];
    int len = 0;
    for (int i = 0; ; i++) {
        scanf("%s", str[i]);
        len +=  strlen(str[i]);
    }
    printf("%d\n", len);
    return 0;
}
