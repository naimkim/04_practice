#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int a, b, c, d;
	
	printf("input the second : ");
	scanf("%d", &a);
	
	b = a/3600;
	c = (a%3600)/60;
	d = (a%3600)%60;
	
	
	printf("The time for %d second is %d : %d : %d \n",a,b,c,d);
	return 0;
}
