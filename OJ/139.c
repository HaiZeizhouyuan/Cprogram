/*************************************************************************
	> File Name: 139.c
	> Author: 
	> Mail: 
	> Created Time: Sat May  2 23:53:25 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for(int k = 0; k < n - 1 - i; k++){
            printf(" ");
        }
        for(int j = 0; j < 2 + 2 * i; j++){
            if( j < (2 * ( 1 + i ) - 1)){
                printf("%s", "A");
            }else{
                printf("%s\n", "A");
            }
        } 
    }
    for(int i = 0; i < (n-1); i++){
        for(int k = 0; k < 1 + i; k++){
            printf(" ");
        }
        for(int j = 0; j < 2 * (n -1 - i); j++){
            if(j < 2 * (n -1 -i) - 1){
                printf("%s", "A");
            }else{
                printf("%s\n", "A");

            }
        }
    }
    return 0;
}
