/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 18:27:07 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int sum = 1;
    for(int l = 3; l <= 1001; l += 2){
        sum += 4 * l * l - 6 * l + 6;

    }
    printf("%d\n", sum);
    return 0;

}
