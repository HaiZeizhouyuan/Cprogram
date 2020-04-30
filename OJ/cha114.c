/*
	* File     : cha114.c
	* Author   : 
	* Mail     : 
	* Creation : 2020年04月28日 星期二 23时13分03秒
*/

#include <stdio.h>
int main(){
	char x;
	scanf("%c", &x);
	if(x == 'h') printf("%s\n","He");
	else if(x == 'l') printf("%s\n", "Li");
	else if(x == 'c') printf("%s\n", "Cao");
	else if(x == 'd') printf("%s\n", "Duan");
	else if(x == 'w') printf("%s\n", "Wang");
	else printf("%s\n","Not Here");
	return 0;
}
