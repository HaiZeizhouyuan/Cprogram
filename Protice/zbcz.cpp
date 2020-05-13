/*************************************************************************
	> File Name: zbcz.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue May 12 18:36:25 2020
 ************************************************************************/

#include <stdio.h>
#define max_n 100
int num(int n){
    return n;
}
int binary_search(int (*num)(int), int n, int x){
    int head = 0, tail = n - 1, mid;
    if(head <= tail) {
        mid = (head + tail) >> 1;
        if (num(mid) == x) return mid;
        if (num(mid) < x)  head = mid + 1;
        else tail = mid -1;
    }
    return -1;
}
//递归写法
int binary_search(int *arr, int l, int r, int x){
    if(l > r) return -1;
    int mid = (l + r) >> 1;
    if (arr[mid] == x) return mid;
    if (arr[mid] < x) l = mid + 1;
    else r = mid - 1;
    return binary_search(arr, l, r, x);
}

int main(){
    int arr[max_n + 5] = {0}, x;
    for (int i = 0; i < max_n; i++) arr[i] = i;
    while (~scanf("%d", &x)) {
        print("search(%d) = %d\n", x, binary_search(arr,max_n, x));

    }
    return 0;
}
