/*************************************************************************
	> File Name: 8.my_printf.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat May  9 18:09:55 2020
 ************************************************************************/
#include <stdio.h>
#include <stdarg.h>
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
                    cae 'd': {
                        int x = va_arg(arg, int);
                        while (x) {
                            PUTC(x)
                        }
                    }break;
                }
            }break;
            default :PUTC(frm[i]);break;
        }
    }
    return cnt;

}
int main(){
    int ret1 = printf("Hello World\n");
    int ret2 =  my_printf("hello world\n");
    printf("%d\n",ret1);
    printf("%d\n", ret2);
    printf("int(123) = %d\n", 123);
    my_printf("int(123) = %%\n", 123);
    return 0;

}
