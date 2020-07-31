/*************************************************************************
	> File Name: multi_process.c
	> Author: 
	> Mail: 
	> Created Time: Fri Jul 31 16:33:53 2020
 ************************************************************************/

#include "head.h"

int m_flag = 0; 
int main(int argc, char **argv) {
    int opt;
    
    while ((opt = getopt(argc, argv, "m")) != -1) {
        switch (opt) {
            case 'm':
                m_flag = 1;
                break;
            defaul :
                fprintf(stderr, "Usage : %s [git commit -m] !\n", argv[0]);
                exit(1);
        }
    }

    if (m_flag == 1) {
        if (strcmp(argv[2], "git") != 0) {
            fprintf(stderr, "No git");
        }
        printf("have m\n");
    } else {
        printf("no m\n");
    }
    printf("argc : %d\n", argc);
    printf("argv[1] : %s\n", argv[1]);
    printf("argv[2] : %s\n", argv[2]);
    printf("argv[3] : %s\n", argv[3]);
    /*pid_t pid;
    if ((pid = fork()) < 0) {
        perror("fork");
        exit(1);
    }

    if (pid == 0 ){

    } else {
        
    }*/
    return 0;
    
}
