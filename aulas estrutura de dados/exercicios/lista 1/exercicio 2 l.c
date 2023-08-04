#include <stdio.h>
#include <conio.h>

void main(){
		float largura, altura, comprimento, total, parede;
		
		printf("Digite a largura das paredes: ");
		scanf ("%f", &largura);
		
		printf("Digite a altura das paredes: ");
		scanf("%f", &altura);
		
		printf("Digite o comprimento das paredes: ");
		scanf("%f", &comprimento);
		
		parede = (largura * altura * 2) + (comprimento * altura * 2);		
		total= parede / 1.5;
		printf("\n\narea total: %0.2f\n\n", parede);
		printf("A quantidade de pisos necessaria é: %0.2f", total);
			
}
