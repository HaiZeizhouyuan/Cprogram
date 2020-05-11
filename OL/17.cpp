/*************************************************************************
	> File Name: 17.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 10 14:45:22 2020
 ************************************************************************/
#include <stdio.h>
int get_letter(int n) {
    static int toptwenty[20] = {
        0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 
    };
    static int wholeten[10] = {
        0, 0, 6, 6, 5, 5, 5, 7, 6, 6
    };
    if(n < 20) return arr1[n];
    if(n < 100) return arr2[n / 10] + arr1[n % 10];
    if(n < 1000){
        int temp = get_letter(n % 100);
        if (temp) temp += 3;
        return temp + arr1[n / 100] + 7;
    }
    if (n == 1000) return 11;
    return 0;
}
int main(){
    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        sum += get_letter(i);
    }
    printf("%d\n", sum);
    return 0;
}
