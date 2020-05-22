/*************************************************************************
	> File Name: 221.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed May 20 20:24:47 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 100000

int stu[max_n + 5];
int tall[max_n + 5];

int cmp (int a, int b) {

}
int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> stu[i];
    }
    for (int i = 0;i < m; i++) {
        cin >> tall[i];
    }
    return 0;
}
