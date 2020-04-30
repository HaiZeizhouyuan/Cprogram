/*
	* File     : cha124.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月29日 星期三 00时39分05秒
*/

#include <stdio.h>
int main(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(((1 <= a && a <= 2) || (1 <= b  && b <= 50)) && ((10<= c && c <= 25 )|| (5 <= d && d <=30))) printf("%s\n","ok");
	else printf("%s\n", "pass");

	return 0;
}
