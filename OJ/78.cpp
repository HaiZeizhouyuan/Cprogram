/*************************************************************************
	> File Name: 78.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 23 16:19:06 2020
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 101

char str[max_n + 5] = {0};
int max(int a, int b){
    if(a > b) return a;
    else return b;
}

int main(){
    for (int i = 0; i < 2; i++) {
        scanf("%s", str);
        int len = strlen(str);
        if (len > str[0])str[0] = len;
        for (int j = 0; str[j]; j++) {
            str[len - j] = (str[i] - '0');
        }
        for (int i = 1; i <= str[0]; i++) {
            if(str[i] < 10) continue;
            str[i + 1] += str[i] / 10;
            str[i] %= 10;
            str[0] += (i == str[0]);
        }
    }
    for (int i = str[0]; i > str[0] - 10; i--){
        printf("%d\n", str[i]);
    }


    return 0;
}

