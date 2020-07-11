/*************************************************************************
	> File Name: 11_protice.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 10 20:19:50 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 20

int str[max_n + 5][max_n + 5];

int dir[4][2] = {
    {0, 1}, {1, 1},
    {1, 0}, {1, -1}
};

int nodemax(int i, int j) {
    int ans = 0;
    for (int k = 0; k < 4; k++) {
        int p = 1;
        for (int tep = 0; tep < 4; tep++) {
            int dx = i + dir[k][0] * tep;
            int dy = j + dir[k][1] * tep;
            if (dx < 0 || dx >= max_n) break;
            if (dy < 0 || dy >= max_n) break;
            p *= str[dx][dy];
        }
        if (p > ans) ans = p;
    }
    return ans;
}

int main () {
    for (int i = 0; i < max_n; i++) {
        for (int j = 0; j < max_n; j++) {
            scanf("%d", &str[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < max_n; i++) {
        for (int j = 0; j < max_n; j++) {
            int p = nodemax(i, j);
            if (p > sum) sum = p;
        }
    }
    printf("%d\n", sum);
    return 0;
}
