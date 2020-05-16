/*************************************************************************
	> File Name: 7_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 16 23:46:36 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 100001
int check(int x){
    for (int i = 2; i * i < x; i++) {
        if (!(x % i)) return 0;
    }
    return 1;
}
int main(){
    int cnt = 0, i = 2;
    for ( ; cnt < max_n ; i++) {
        check(i) &&  cnt++;
    }
    printf("%d\n", i - 1);
    return 0;
}

