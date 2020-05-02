/*************************************************************************
	> File Name: 443.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 20:39:21 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 10000
int arr[max_n + 5] = {0};
void chang_flag(int a, int b){
    for(int i = a; i <= b; i++){
        arr[i] = 1;
    }
    return ;
}
int cnt_num(int l){
    int cnt = 0;
    for(int i = 0; i <= l; i++){
        cnt += (!arr[i]);

    }
    return cnt;
}
int main(){
    int m, n;
    for(int i = 0; i < n; i++){
        int a, b;
        scanf("%d%d" ,&a ,&b);
        chang_flag(a, b);
        printf("%d\n", cnt_num(m));
        return 0;
    }
}
