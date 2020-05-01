/*************************************************************************
	> File Name: 128.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May  1 16:06:25 2020
 ************************************************************************/

#include<iostream>
#include<csdio>
using namespace std;
int main(){
    int n,m;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++ ) {
        cin >> m;
        sum += m;
    }
    printf("%.2f\n",1.0 * sum / n);
    return 0;
}
