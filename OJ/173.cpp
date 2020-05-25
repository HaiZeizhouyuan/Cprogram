/*************************************************************************
	> File Name: 173.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun May 24 16:32:17 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 10000

char str[max_n + 5];
int is_alphabet (char x) {
    return ('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z');
} 

int is_number (char x) {
    return '0' <= x && x <= '9'; 
}

int is_space (char x) {
    return x == ' ';
}

int is_character (char x) {
    return (!(is_alphabet(x)) && !(is_number(x)) && !(is_space(x)));
}

void cal(char *str) {
    int alp = 0, num = 0, spa = 0,  cha = 0;
    for (int i = 0; str[i]; i++) {
        alp += is_alphabet(str[i]);
        num += is_number(str[i]);
        spa += is_space(str[i]);
        cha += is_character(str[i]);
    }
    
    for (int i = 0; i < 4; i++) {
        i && cout << " ";
        cout << cnt[i];
    }
}

int main() {
    while (~scanf("%[^\n]s", str)) {
       cal(str);
        getchar();
    }
    return 0;
}
