/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Jul  9 20:12:36 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 1000

int main () {
    int sum = 0;
    for (int i = 1; i < max_n; i++) {
        if (i % 5 == 0 || i % 3 == 0) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
