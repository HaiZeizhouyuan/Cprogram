/*************************************************************************
	> File Name: test_p.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 21 19:05:34 2020
 ************************************************************************/

#include<stdio.h>
struct Data {
    int x, y;
};

int main(){
    struct Data a[2], *p = a;
    a[0].x = 1;
    a[1].x = 2;
    printf("a[1].x = %d\n", a[1].x);
    printf("(*(p + 1)).x = %d\n", (*(p + 1)).x);
    printf("(*(a + 1)).x = %d\n", (*(a + 1)).x);
    printf("p[1].x = %d\n", p[1].x);
    printf("(&p[1])->x = %d\n", (&p[1])->x);
    printf("(a + 1)->x = %d\n", (a + 1)->x);
    printf("(p + 1)->x = %d\n", (p + 1)->x);
    printf("(&p[0] + 1)->x = %d\n",(&p[0] + 1)->x);
    return 0;
}

