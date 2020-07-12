/*************************************************************************
	> File Name: 16_protie1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Jul 11 15:59:31 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 300

int ans[max_n + 5] = {1, 1, 0};

int main() {
    for (int i = 0; i < 100; i++) {
        for (int j = 1; j <= ans[0]; j++) ans[j] *= 1024;
        for (int k = 1; k <= ans[0]; k++) {
            if (ans[k] < 10) continue;
            ans[k + 1] += ans[k] / 10;
            ans[k] %= 10;
            ans[0] += (k == ans[0]);
        }
    }
    int sum = 0;
    for (int i = 1; i <= ans[0]; i++) {
        sum += ans[i];
    }
    printf("%d\n", sum);
    return 0;
}
