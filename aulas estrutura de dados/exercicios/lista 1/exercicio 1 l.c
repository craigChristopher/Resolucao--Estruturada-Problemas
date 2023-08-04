#include <stdio.h>
#include <conio.h>

void main(){
	float raio, area;
	printf("Informe o Raio de um circulo: ");
	scanf("%f", &raio);
	
	area = 3.14 * (raio * raio);
	printf("Area do circulo: %0.2f", area);
}
