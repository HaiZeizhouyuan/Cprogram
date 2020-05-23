/*************************************************************************
	> File Name: sort.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 17 19:33:17 2020
 ************************************************************************/

#include<iostream>
#define max_n 100
#include <algorithm>
using namespace std;
int arr[max_n + 5] = {0};

int cmp (int a, int b) {
    return a > b;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort (arr, arr + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

