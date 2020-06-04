#include<stdio.h>
#include<string.h>

int main() {
    char a, b;
    scanf("%s%s", &a, &b);
    int l = strcmp(a, b);
    if (l == 1) printf("%s\n", "YES");
    else printf("%s\n", "NO");
    return 0;
}

