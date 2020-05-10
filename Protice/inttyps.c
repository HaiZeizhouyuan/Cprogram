/*************************************************************************
	> File Name: inttyps.c
	> Author: 
	> Mail: 
	> Created Time: Tue May  5 10:40:26 2020
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
int main(){
    int64_t a = 256;
    int16_t c = 256;
    int8_t d = 127;
    int b = 6;
    long f;
    long long g;
    printf("d = %d\n", d);
    printf("sizeof8(d) = %lu\n", sizeof(d));
    printf("sizeof16(c) = %lu\n", sizeof(c));
    printf("sizeof64(a) = %lu\n", sizeof(a));
    printf("sizeof32(b) = %lu\n", sizeof(b));
    printf("sizeoflong = %lu\n", sizeof(f));
    printf("sizeoflonglong = %lu\n", sizeof(g));
    printf("INT8_MTN = %d\n", INT8_MIN);
    printf("INT8_MAX = %d\n", INT8_MAX);
    printf("INT16_MTN = %d\n", INT16_MIN);
    printf("INT16_MAX = %d\n", INT16_MAX);
    printf("INT32_MTN = %d\n", INT32_MIN);
    printf("INT32_MAX = %d\n", INT32_MAX);
    printf("INT64_MTN = %ld\n", INT64_MIN);
    printf("INT64_MAX = %ld\n", INT64_MAX);
    printf("PRId64 = %s\n", PRId64);
    printf("PRId32 = %s\n", PRId32);
    printf("PRId16 = %s\n", PRId16);
    printf("PRId8 = %s\n", PRId8);
    printf("%"PRId64"\n",a);
    printf("hello" "world\n");
    return 0;
}
