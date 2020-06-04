/*************************************************************************
	> File Name: 453.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 30 00:34:07 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 10000

int a[max_n + 5];
int main () {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int min = 0, num = 0;
    for (int i = 0; i < n, num < k; i++) {
        if (a[i] > min) min = a[i]; num++;
    }

    cout << min << endl;
    return 0;
}
