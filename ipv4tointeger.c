#include <stdio.h>

main()
{ 
 int a, b, c, d, resultado;
printf("Introduce primer octeto de Direccion IP:");
scanf("%d", &a);
printf("Introduce segundo octeto de Direccion IP:");
scanf("%d", &b);
printf("Introduce tercer octeto de Direccion IP:");
scanf("%d", &c);
printf("Introduce cuarto octeto de Direccion IP:");
scanf("%d", &d);
resultado = ( a * 16777216 ) + ( b * 65536 ) + ( c * 256 ) + d;
printf("el numero entero es: %u", resultado);
}

