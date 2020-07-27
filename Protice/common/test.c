/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Sun May  3 17:29:50 2020
 ************************************************************************/
#include <stdio.h>
#include <string.h>
int main() {
    char str[505];
    scanf("%s", str);
    char arr[32] = {0}, bits[32] = {0};
    int len = strlen(str);
    for (int i = 1; i <=len ; i++) {
        arr[i % 32] += str[i - 1];
    }
    for (int i = 0; i < 32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        printf("%c",   bits[i] % 85 + 34 );      
    }
    printf("\n\n\n");
    return 0;
}
