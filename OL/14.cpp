/*************************************************************************
	> File Name: 14.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May 16 12:35:24 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 10
inline void len() {
    long long num = 1, max = 0, maxi, m = 2;
    for (int i = 2; i < max_n; i++) {
        m = i;
        while(m > 1) {
            if (m % 2 == 0) m /= 2;
            else m = (3 * m + 1);
            num++;
        }
        if (num > max){
            max = num;
            maxi = i;
        } 
    }
    printf("%lld\n", num);

}
int main () {
    len();
    return 0;
}
