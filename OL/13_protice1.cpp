/*************************************************************************
	> File Name: 13_protice1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 11 14:19:22 2020
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define max_n 53

int ans[max_n + 5] = {1, 0};
char str[max_n + 5];

void large_sum() {
    while (scanf("%s", str) != EOF){
        int len = strlen(str);
        if (ans[0] < len) ans[0] = len;
        for (int i = 0; i < len; i++) ans[len - i] += str[i] - '0';
        for (int j = 1; j <= ans[0]; j++) {
            if (ans[j] < 10) continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
            ans[0] += (j == ans[0]);
        }
    }
    return ;
}

void output() {
    for (int i = ans[0]; i > 0; i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
}
int main () {
    large_sum();
    output();
}
