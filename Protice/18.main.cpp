/*************************************************************************
	> File Name: 18.main.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri May 22 13:27:31 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void output(int argc , char *argv[], char *env[]) {
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    for (int i = 0; env[i]; i++) {
        if (strncmp(env[i], "USER=",5) == 0){
            if (strncmp(env[i] + 5, "zy", sizeof(env[i])) == 0) {
                printf("welcome\n");
            } else {
                printf("byebye\n");
                exit(0);
            }
        }
    }
    return ;
}
int main(int argc, char *argv[], char *env[]) {
    output(argc, argv, env);
    return 0;
}

