/*************************************************************************
	> File Name: 30.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 18:45:52 2020
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define max_n 354294
int is_val(int n){
    int sum = 0, temp = n;
    while(temp){
        sum += (int)pow(temp % 10, 5);
        temp /= 10;
    }
    return sum == n;
}
int main(){
    int sum = 0;
    for(int i = 2; i <= max_n; i++){
        if (is_val(i)) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
