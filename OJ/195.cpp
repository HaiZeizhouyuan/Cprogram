/*************************************************************************
	> File Name: 195.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon May 18 20:02:31 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100000

int num1[max_n + 5] = {0};
int num2[max_n + 5] = {0};


inline void find (int *num1, int *num2, int m, int n) {
    for (int i = 0; i < m; i++) {  
        int f = 0, t = n - 1, x = num2[i] ;
        while (t - f) {
            int mid = (f + t) >> 1;
            if (num1[mid] > x) {
                t = mid;
            } else {
                f = mid;
            }
        }
        if (f > x) {
            cout << num1[0] << endl;
        } else {
            cout << num1[f];
        }
        (i - m + 1) && (cout << " ");
    }
    cout << endl;
}


int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> num2[i];
    }
    find(num1, num2, m, n);
    return 0;
}
