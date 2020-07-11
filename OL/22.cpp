/*************************************************************************
	> File Name: 22.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Jun  7 14:11:23 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string.h>
#include<cstdlib>
#include "name.text"
using namespace std;

bool cmp(string a, string b) {
    return a < b;
}

int add_to_num(string str, int n){
    int ret = 0;
    for (int i = 0; str[i]; i++) {
        ret += str[i] - 'A' + 1;
    }
    return ret * n;
}


int main() {
    int n = 0;
    long long sum = 0;
    for (int i = 0; name[i] != "\0"; i++) n++;
    sort(name, name + n, cmp);
    for (int i = 0; i < n; i++) {
        sum += add_to_num(name[i], i + 1);
    }
    cout << sum << endl;
    return 0;
}
