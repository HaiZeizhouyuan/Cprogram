/*************************************************************************
	> File Name: 463.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jun 12 16:06:35 2020
 ************************************************************************/

#include<iostream>
using namespace std;

typedef struct windows{
    int l, r, w, d;
} Window;

Window wind[5];

int init(int, int);

int main () {
    for (int i = 1; i < 3; i++) {
        cin >> wind[i].l >> wind[i].r >> wind[i].w >> wind[i].d;
    }
    int ret1 = init(1, 2), ret2 = init (2, 1), ret;
    if (ret1 == 0 && ret2 != 0) ret = ret2;
    if (ret2 == 0 && ret1 != 0) ret = ret1;
    if (ret1 != 0 && ret2 != 0) ret = ret1;
    else ret = 0;
    cout << ret << endl;

    return 0;
}

int init (int i, int j ) {
    int l1 = wind[i].l, r1 = wind[i].r, w1 = wind[i].w, d1 = wind[i].d;
    int l2 = wind[j].l, r2 = wind[j].r, w2 = wind[j].w, d2 = wind[j].d; 
    if ((w1 > w2) && (w1 < d2)) {
        if ((l1 > l2) && (l1  < r2)) return (r2 - l1) * (d2 - w1);
        if ((r1 > l2) && (r1 < r2)) return  (r1 - l2) * (d2 - w1);
    }
    if ((d1 > w2) && (d1 < d2)) {
        if ((l1 > l2) && (l1 < r2)) return (r2 - l1) * (d1 - w2);
        if ((r1 > l2) && (r1 < r2)) return (r1 - l2) * (d1 - w2);
    }
    else  return 0;
}
