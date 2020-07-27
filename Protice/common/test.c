/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Sun May  3 17:29:50 2020
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>
int main(void) {
    struct dirent **entry_list;
    int count;
    int i;
 
    count = scandir(".", &entry_list, 0, alphasort);
    if (count < 0) {
        perror("scandir");
        return EXIT_FAILURE;
    }
    for (i = 0; i < count; i++) {
        struct dirent *entry;
        entry = entry_list[i];
        printf("%s %s\n", entry->d_name, entry->);
        free(entry);
    }
    free(entry_list);
 
    return 0;
}



