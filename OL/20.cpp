/*************************************************************************
	> File Name: 20.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 31 16:50:18 2020
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define max_n 300
int ans[max_n + 5] = {1, 1, 0};

void init() {
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= ans[0]; j++) ans[j] *= i;
        for (int k = 1; k <= ans[0]; k++) {
            if (ans[k] < 10) continue;
            ans[k + 1] += ans[k] / 10;
            ans[k] %= 10;
            ans[0] += (k == ans[0]);
        }
    } 
    return ;
} 

int main(){
    init();
    int sum = 0;
    for (int i = 1; i <= ans[0]; i++) {
        sum += ans[i];
        //cout << ans[i] << endl;
    }
    cout << sum << endl;


    return 0;
}
