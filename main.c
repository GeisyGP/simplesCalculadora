#include <stdio.h>
#include <locale.h>

main (void){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, soma, subtracao, multiplicacao, divisao;
	
	printf ("Informe o primeiro e o segundo número: ");
	scanf ("%f", &num1);
	scanf ("%f", &num2);
	
	soma = num1 + num2;
	subtracao = num1 - num2;
	multiplicacao = num1 * num2;
	divisao = num1 / num2;
	
	printf ("\nSoma: %.2f", soma);
	printf ("\nSubtração: %.2f", subtracao);
	printf ("\nMultiplicação: %.2f", multiplicacao);
	printf ("\nDivisão: %.2f", divisao);
}
