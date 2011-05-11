#include<stdio.h>

void main(){
	unsigned int num2Convert, fisrtOct, secondOct, thirdOct, lastOct;	
	printf("Ingrese el un numero a convertir:");
	scanf("%u",&num2Convert);
	fisrtOct = num2Convert >> 24;
	secondOct = (num2Convert << 8 ) >> 24;
	thirdOct = (num2Convert << 16 ) >> 24;
	lastOct = (num2Convert << 24 ) >> 24;
	printf("Ip: %u.%u.%u.%u\n", fisrtOct, secondOct, thirdOct, lastOct);
}
