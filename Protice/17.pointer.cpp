/*************************************************************************
	> File Name: 17.pointer.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 22 12:45:14 2020
 ************************************************************************/

#include<stdio.h>
#define pchar char *
typedef char * ppchar;

#define offset(T, a) ((long)(&(((T  *)(NULL))-> a)))
struct Data {
    int a;
    double b;
    char c;
};

int main() {
    int num1 = 0x616263;  //在栈区开辟空间
    int num2 = 0x61626364;//dcba无‘/0’继续输出cba'/0';
    int num = 0x616263;  //x表示16进制
    printf("%s\n", (char *)(&num2));
    printf("%ld\n", offset(struct Data, a));
    printf("%ld\n", offset(struct Data, b));
    printf("%ld\n", offset(struct Data, c));
    pchar p, q;
    ppchar a, b;
    printf("p = %lu, q = %lu\n", sizeof(p), sizeof(q));
    printf("p = %lu, q = %lu\n", sizeof(a), sizeof(b));
    return 0;
}
