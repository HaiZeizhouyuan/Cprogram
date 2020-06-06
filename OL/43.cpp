/*************************************************************************
	> File Name: 43.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Jun  6 16:11:08 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int prime[8] = {7, 2, 3, 5, 7, 11, 13, 17};
int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


long long add_to_num(int *num) {
    long long ret = 0;
    for (int i = 0; i < 10; i++) {
        ret = ret * 10 + num[i];
    }
    return ret;
}

int is_val(int *num, int *prime) {
    int flag = 1;
    for (int i = 1; flag && i < 8; i++) {
        int temp = num[i] * 100 + num[i + 1] * 10 + num[i + 2];
        flag = !(temp % prime[i]);
    }
    return flag;   
}

int main() {
    int cnt = 1;
    long long sum = 0;
    do {
        if (is_val(num, prime)) sum += add_to_num(num); 
    } while (next_permutation(num, num + 10));
    cout << sum << endl;
    cout << "cnt : "  << cnt << endl;
    return 0;
}
