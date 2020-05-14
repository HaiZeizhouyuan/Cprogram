/*************************************************************************
	> File Name: 188.c
	> Author: 
	> Mail: 
	> Created Time: Thu May 14 18:00:12 2020
 ************************************************************************/

#include<stdio.h>
void filter(int n, int m) {
    for (int i = n; i < m + 1; i++) {
        if(check(i) == 1) printf("%d\n", i);
    }
}
int check(int x) {
    int flag = 0;
    for (int i = 2; i < x; i++){
        if (x % i == 0) flag = 1;
    }
    if (flag) return 0;
    return 1;
}
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    filter(n, m);
    return 0;
}
