/*************************************************************************
	> File Name: 145.c
	> Author: 
	> Mail: 
	> Created Time: Wed May 13 13:54:26 2020
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    int n, max = 0, len;
    scanf("%d", &n);
    char str[25][100], maxl;
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        len = strlen(str[i]);
        if (len > max) {
            strcpy(maxl , str[i]);
        }
    }
    printf("%s\n", maxl);
   return 0;
}
