/*************************************************************************
	> File Name: 145.c
	> Author: 
	> Mail: 
	> Created Time: Wed May 13 13:54:26 2020
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int mian(){
    int n;
    scanf("%d", &n);
    char arr[n + 5][105];
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < n; i++){
        printf("%s",arr[i]);
    }
   return 0;
}
