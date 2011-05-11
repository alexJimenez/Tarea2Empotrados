#include<stdio.h>

void main(){
	int num2Convert;
	printf("Ingrese el un numero entero:");
	scanf("%d",num2Convert);
	printf("%d",(num2Convert >> 24));
}
