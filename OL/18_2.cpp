/*************************************************************************
	> File Name: 18_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue May 26 19:35:24 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 15

int arr[max_n + 5][max_n + 5];
int main(){
    for (int i = 0; i <= max_n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = max_n - 2; i >=0; i--) {
        for (int j = 0; j <= i; j++) {
            arr[i][j] += max(arr[i + 1][j], arr[i + 1][j + 1]);
        }
    }
    cout << arr[0][0] << endl;
    return 0;
}
