/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Jun 18 23:13:08 2020
 ************************************************************************/

#include<string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
void sort(char *s[]);
typedef struct Files {
    int age;
    char name[20];
} Files;

Files *f = (Files *)malloc(sizeof(Files) * 20);

int expend(char **p, int sizee) {
    int extr_size = sizee;
    char **q;
    while (extr_size) {
        q = (char **)realloc(p, sizeof(char *) * (extr_size + sizee));
        if (p) break;
        extr_size /= 2;
    }
    if (extr_size == 0) return 0;
    p = q;
    sizee += extr_size;
    return sizee;
            
}

int main() {
    int i;
    int sizee = 5;
    char **p = (char **)malloc(sizeof(char *) * sizee);
    printf("input 5 strings:\n");
    for(i = 0; i < 7; i++) {
        if (i == (sizee - 1)) {
            printf("expend is %s, new size is %d\n", expend(p ,sizee) ? "success": "failed", expend(p, sizee)); 
        }
        char *str = (char *) calloc (sizeof(char), 20);
        scanf("%s", str);
        p[i] = str;
    }
    sort(p);
    printf("Now the sequence is:\n");
    for(i = 0; i < 7; i++)
    printf("%s\n", p[i]);
    return 0;
}


void sort(char *s[]) {
    int i,j;
    char *temp;
    for(i = 0; i < 7; i++) {
        for(j = i + 1; j < 7; j++) {
            if(strcmp(*(s+i) + 2,*(s+j) + 2)>0) {
                temp=*(s+i);
                *(s+i)=*(s+j);
                *(s+j)=temp;
            }
        }
    }
}
