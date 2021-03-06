/*************************************************************************
	> File Name: 47.c
	> Author: 
	> Mail: 
	> Created Time: Sat May 16 20:47:06 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 1000000
int prime[max_n + 5] = {0};
void init() {
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;

        for (int j = i; j <= max_n; j += i){
            prime[j] += 1;
        }
    }
    return ;
}
int main(){
    init();
    for (int i = 2; ; i++) {
        int flag = 1;
        for (int j = 0; flag && j < 4; j++) {
            flag = flag && (prime[i + j] == 4);
        }
        if (!flag) continue;
        printf("%d\n", i);
        break;
    }
    return 0;

}
