/*************************************************************************
	> File Name: binary_search.protice.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 24 15:20:13 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int binary_search1 (int *arr, int n){
    int head = -1, tail = n - 1, mid;
    while (head < tail) {
        cout << "head: " << head << ", tail: " << tail << endl;
        mid = (head + tail + 1) >> 1;
        if (arr[mid] == 0) tail = mid -1;
        else head = mid;
    }
    return head;
}

int binary_search2 (int *arr, int n) {
    int head = 0, tail = n, mid;
    while (head <  tail) {
        mid = (head + tail) >> 1;
        if (arr[mid] == 0) head = mid + 1;
        else tail = mid;
    }
    return head == n ? -1 : head;
}
int main(){
    int num1[10] = {1, 1, 1, 1, 1, 0, 0, 0, 0, 0};
    int num2[10] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    int a[10] = {1, 1, 1, 1 ,1, 1, 1, 1, 1, 1};
    int b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    cout << binary_search2(b, 10) << endl;
    return 0;
}
