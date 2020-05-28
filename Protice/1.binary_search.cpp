/*************************************************************************
	> File Name: 1.binary_search.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 24 14:56:47 2020
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

int binary_search1(int *arr, int n) {
    int head=  -1, tail = n - 1, mid;
    while (head < tail){
        cout << "head :" << head << ", tail: " << tail << endl;
        mid = (head + tail + 1) >> 1;
        if (arr[mid] == 0) tail = mid - 1;
        else head = mid;

    }
    return head;
}

int binary_search2(int *arr, int n) {
    int head, tail = n, mid;
    while (head < tail) {
        mid = (head + tail) >> 1;
        if (arr[mid] == 0) head = mid + 1;
        else tail = mid;
    }
    return head == n ? -1 : head;
}

int main () {
    int num1[10] = {1, 1, 1, 1, 1, 0, 0, 0, 0, 0};
    int num2[10] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    int a[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    cout << binary_search2(num2, 10) << endl;
}
