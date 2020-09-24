#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sec,min,sec_again;
	
	printf("input the second : ");
	scanf("%d", &sec);
	
	min = sec/60;
	sec_again = sec%60;
	
	printf("the time is %d : %d \n",min,sec_again);
	return 0;
}
