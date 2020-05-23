/*************************************************************************
	> File Name: 221.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu May 21 16:11:18 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 100000
#define max_m 100000000

struct student{
    int num, h;
};

student stu[max_n + 5];
int b[max_n + 5], re[max_m + 5];

int cmp(int a, int b) {
    return a < b;
}

int check(int *stu, int *b, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j += num) {
            int num = 0;
            if(b[j] <= stu[i].h)  num ++;
            re[i] = num;

        }
    }
}

int main (){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].h;
        stu[i].num = i;
    }

    sort(stu, stu + n, cmp);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }


    return 0;
}
