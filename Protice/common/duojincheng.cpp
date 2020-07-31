/*************************************************************************
	> File Name: duojincheng.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 31 16:49:57 2020
 ************************************************************************/

#include "head.h"

int main () {
    pid_t pid;

    if ((pid = fork()) < 0) {
        perror("fork");
        exit(1);
    }

    if (pid == 0) {
        printf("In child Process!\n");
        execlp("ls", "ls","/etc",".", NULL);
    } else {
        printf("In parent Process!\n");
    }

    return 0;
}
