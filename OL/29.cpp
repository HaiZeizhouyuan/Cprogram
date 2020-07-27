/*************************************************************************
	> File Name: 29.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jun  2 16:57:05 2020
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define max_n 10000
#define max_m 100
struct Tuple {
    int p, a;// p是最小素因子，这个最小素子的次幂
} arr[max_n + 5][4]; // 2 * 3 * 5 * 7 = 210 > 100; 2 * 3 * 5 = 30

int prime[max_m + 5] = {0};

//求最小素因子
void primescreen () {
    for (int i = 2; i <= max_m; i++) {
        if (prime[i]) continue;
        for (int j = i; j <= max_m; j += i) {
            if (prime[j]) continue;
            prime[j] = i;
        }
    }
    return ;
}

void get_num(int a, int b, Tuple *temp) {
    int len = 0;
    while (a != 1) {
        int p_num = 0, pre = prime[a];
        while (a % pre == 0) p_num++, a /= pre; 
        temp[len].p = pre, temp[len].a = p_num * b;
        len++;
    }
    return ; 
}

int init() {
    int cnt = 0;//当前产生多少个不同结果的原组，多少个不同的a^b的值
    for (int a = 2; a <= max_m; a++) {
        for (int b = 2; b <= max_m; b++) {
            Tuple temp[4] = {0};
            get_num(a, b, temp);
            int flag = 1;
            for (int i = 0; i < cnt && flag; i++) {
                flag = memcmp(arr[i], temp, sizeof(temp));
            }
            if (!flag) continue;
            memcpy(arr[cnt++], temp, sizeof(temp));
        }
    }
    return cnt;
}
int main() {
    primescreen();
    cout << init() << endl;
    return 0;
}

