/*************************************************************************
	> File Name: 6.programe_struct.c
	> Author: 
	> Mail: 
	> Created Time: Sun May  3 16:24:07 2020
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a - b){
        printf("not equal!\n");
    }else{
        printf("equal!\n");
    }
    if ((a++) && (b++)) {
        printf("true\n");
    }else{
        printf("flase\n");
    }
    printf("a = %d, b = %d\n", a, b);
    if(a - b){
        printf("not equal!\n");
    }else{
        printf("equal!\n");
    }
    if ((b++) || (a++)) {
        printf("true\n");
    }else{
        printf("flase\n");
    }
    printf("a = %d, b = %d\n", a, b);
    int cnt = 0;
    srand(time(0));//做随机种子
    for (int i = 1; i <= 10; i++) {
        int val = rand() % 100;//输出0~100随机10个数
        printf("%d", val);
        i != 10 && printf(" ");
        cnt += !(val & 1);
    }
    printf("\n");
    printf("even value is: %d\n", cnt);
    int digit = 0, num, n;
    scanf("%d", &n);
    num = n;
    do{
        digit ++;
        n /= 10;
    }while(n);
    printf("%d has %d dights\n",num, digit);
    return 0;
}
