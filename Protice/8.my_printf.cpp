/*************************************************************************
	> File Name: 8.my_printf.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May  9 18:09:55 2020
 ************************************************************************/
#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>
int reverse_num(int num, int *temp){
    int dight = 0;
    do {
        *temp = *temp * 10 + num % 10;
        num /= 10;
        dight++;
    } while (num);
    return dight;

}
int my_printf(const char *frm, ...) {
    int cnt = 0;
    #define PUTC(a) putchar(a),++cnt;
    va_list arg;
    va_start(arg,frm);
    for (int i = 0; frm[i]; i++) {
        switch(frm[i]){
            case '%': {
                switch (frm [++i]) {
                    case '%': PUTC(frm[i]); break;
                    case 'd': {
                        int x = va_arg(arg, int), temp = 0;
                        if (x < 0) x = -x, PUTC('-')
                        int dight = 0; 
                        int num1 = x / 100000, int num2 = x % 100000;
                        int temp1 = 0, temp2 = 0;
                        int dight1 = reverse_num(num1, &temp1);
                        int dight2 = reverse_num(num2, &temp2);
                        if(num1) dight2 = 5;
                        else dight2 = 0;
                        while (dight--) {
                            PUTC(temp % 10 + '0');
                            temp /= 10;
                        }
                    }break;
                }
            }break;

            default :PUTC(frm[i]);break;
        }
    }
    va_end(arg);
    #undef PUTC
    return cnt;

}
int main(){
    int a = -5;
    int ret1 = printf("Hello World\n");
    int ret2 =  my_printf("hello world\n");
    printf("%d\n",ret1);
    printf("%d\n", ret2);
    printf("int(123) = %d\n", 123);
    my_printf("int(123) = %d\n", 123);
    printf("int(1000) = %d\n", 1000);
    my_printf("int(1000) = %d\n", 1000);
    printf("int(0) = %d\n", 0);
    my_printf("int(0) = %d\n", 0);
    printf("int(a) = %d\n", a);
    my_printf("int(a) = %d\n", a);
    printf("INT32_MAX = %d\n", INT32_MAX);
    my_printf("INT32_MAX = %d\n", INT32_MAX);
    printf("INT32_MIN = %d\n", INT32_MIN);
    my_printf("INT32_MIN = %d\n", INT32_MIN);
    return 0;

}
