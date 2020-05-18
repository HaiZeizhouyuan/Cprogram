/*************************************************************************
	> File Name: 11.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 16 00:28:00 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 400
#include<string.h>
#define MAX(a, b) ({\
    __typeof(a) __a = (a);\
    __typeof(b) __b = (b);\
    __a > __b ? __a : __b;\
})
int num[max_n + 5][max_n + 5];
inline void checkd() {
    int len = 0;
    long long d, r, rd, ro, maxd = 0, D;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            scanf("%d ", &num[i][j]);
        }
    }
    for (int i = 3; i < 17; i++) {
        for (int j = 0; j < 17; j++) {
            d = num[i][j] * num[i + 1][j] * num[i+ 2][j] * num[i + 3][j];
            r = num[i][j] * num[i][j + 1] * num[i][j + 2] * num[i][j + 3];
            rd= num[i][j] * num[i + 1][j + 1] * num[i + 2][j + 2] * num[i + 3][j + 3];
            ro = num[i][j] * num[i - 1][j + 1] * num[i - 2][j + 2] * num[i - 3][j + 3];
            D = MAX(MAX(d, r), MAX(rd, ro));
            if (D > maxd) maxd = D;
        }
    }
    for (int i = 0; i < 3 ; i++) {
        for (int j = 0; j < 17; j++) {
            d = num[i][j] * num[i + 1][j] * num[i+ 2][j] * num[i + 3][j];
            r = num[i][j] * num[i][j + 1] * num[i][j + 2] * num[i][j + 3];
            rd= num[i][j] * num[i + 1][j + 1] * num[i + 2][j + 2] * num[i + 3][j + 3];
            D = MAX(MAX(d, r), rd);
            if (D > maxd) maxd = D;
        }
    }
    for (int i = 0; i < 17; i++) {
        for (int j = 17; j < 20; j++) {
            d = num[i][j] * num[i + 1][j] * num[i+ 2][j] * num[i + 3][j];
            if (d > maxd) maxd = d;
        }
        
    }
    for (int i = 17; i < 20 ; i++) {
        for (int j = 0; j < 17; j++) {
            r = num[i][j] * num[i][j + 1] * num[i][j + 2] * num[i][j + 3];
            ro = num[i][j] * num[i - 1][j + 1] * num[i - 2][j + 2] * num[i - 3][j + 3];
            D = MAX(r, ro);
            if (D > maxd) maxd = D;
        }
    }
    printf("%lld\n", maxd);
    return ;
}

int main(){
    //int num[20][20];
   
    checkd();
    return 0;
}

