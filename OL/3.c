#include <stdio.h>
#define max_m 600851475143LL
int main(){
    long long num = max_m, ans = 0;
    int i = 2;
    while (i * i <= num) {
        if(num % i == 0) ans = i;
        while (num % i == 0) num /= i;
        i++;
    }
    if (num != 1) ans = num;
    printf("%lld\n", ans);
}
