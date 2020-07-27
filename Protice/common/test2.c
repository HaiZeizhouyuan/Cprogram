/*************************************************************************
	> File Name: test2.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul 27 15:52:51 2020
 ************************************************************************/

#include<stdio.h>
#include <math.h>
int check(int a, int b, int c) {
    if ((pow(b, 2) + pow(c, 2)) > pow(a, 2)) {
        return 1;
    }else if ((pow(b, 2) + pow(c, 2)) == pow(a, 2)) {
        return 2;
    }else if((pow(b, 2) + pow(c, 2)) < pow(c, 2)){
        return 3;
    }
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if ((a > b) &&( b > c) || (a > c && c > b)) {//a > b > c
        if ((b + c) < a) {
            printf("illegal triangle");
        }else if(check(a, b, c) == 1) {
            printf("acute triangle");
        }else if (check(a, b, c) == 2) {
            printf("right triangle");
        }else {
            printf("obtuse triangle");
        }
    }else if(b > a && a > c || (b > c && c > a)) {
        if ((a + c) < b){
            printf("illegal triangle");
        }else if (check(b, c, a) == 1) {
            printf("acute triangle");
        }else if (check(b, c, a) == 2) {
            printf("right triangle");
        }else{
            printf("obtuse triangle");
        }
    }else{
        if ((a + b) < c) {
            printf("illegal triangle");
        }else if (check(c, a, b) == 1) {
            printf("acute triangle");
        }else if(check(c, a, b) == 2) {
            printf("right triangle");
        }else {
            printf("obtuse triangle");
        }
    }
    return 0;
}
