/*************************************************************************
	> File Name: prime1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 16 17:21:48 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 100
int prime1[max_n + 5] = {0};
inline void min(){
    for(int i = 2; i < max_n; i++){
        if(prime1[i]) continue;
        prime1[i] = i;
        for(int j = i * i; j < max_n; j += i){
            if(prime1[j]) continue; 
            prime1[j] = i;
        }
    }
}
int prime2[max_n + 5] = {0};
inline void max(){
    for(int i = 2; i < max_n; i++){
        if(prime2[i]) continue;
        prime2[i] = i;
        for(int j = 2 * i; j < max_n; j += i){
            prime2[j] = i;
        }
    }
}
int main(){
    min();
    max();
    for (int i = 2; i < max_n; i++) {
        printf("%d  minprime is %d and maxprime is %d\n ", i, prime1[i], prime2[i]);
    }
    return 0;
}

