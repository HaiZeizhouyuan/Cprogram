/*************************************************************************
	> File Name: test1.c
	> Author: 
	> Mail: 
	> Created Time: Mon Jul 27 15:47:40 2020
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <dirent.h>
int main()
{
    struct dirent **namelist;
    int n;
    n = scandir(".", &namelist, 0, alphasort);
    if (n < 0)
        perror("scandir");
    else
    {
        int i = 0;
        while(i < n)
        {
            printf("%s\n", namelist[i++]->d_name);
            free(namelist[i]);
        }
        free(namelist);
    }
}
