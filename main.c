#include <stdio.h>
#include <locale.h>
#include <math.h>

void soma(){
	float num1, num2, resultado;

	printf ("Informe os dois valores: ");
	scanf ("%f", &num1);
	scanf ("%f", &num2);
	
	resultado = num1 + num2;
	printf ("\nO resultado é %.2f", resultado);
}

void subtracao(){
	float num1, num2, resultado;
	
	printf ("Informe o minuendo: ");
	scanf ("%f", &num1);
	printf ("Informe o subtraendo: ");
	scanf ("%f", &num2);			
	
	resultado = num1 - num2;
	printf ("\nO resultado é %.2f", resultado);
}

void multiplicacao(){
	float num1, num2, resultado;
	
	printf ("Informe os dois valores: ");
	scanf ("%f", &num1);
	scanf ("%f", &num2);			
	
	resultado = num1 * num2;	
	printf ("\nO resultado é %.2f", resultado);
}

void divisao (){
	float num1, num2, resultado;
	
	printf ("Informe o dividendo: ");
	scanf ("%f", &num1);
	printf ("Informe o divisor: ");
	scanf ("%f", &num2);			
	
	resultado = num1 / num2;	
	printf ("\nO resultado é %.2f", resultado);	
}

void potencia(){
	int num1, num2, resultado;

	printf ("Informe a base: ");
	scanf ("%d", &num1);
	printf ("Informe o expoente: ");
	scanf ("%d", &num2);
			
	resultado = pow(num1, num2);
	printf ("\nO resultado é %d", resultado);
}

int menu (int op){
	printf ("******Menu******");
	printf ("\n1 - Somar \n2 - Subtrair \n3 - Multiplicar \n4 - Dividir \n5 - Potência");
	printf ("\nInforme sua opção: ");
	scanf ("%d", &op);
	return op;
}

main (void){
	setlocale(LC_ALL, "Portuguese");
	int op;

	op = menu(op);
	switch (op){
		case 1:
			soma();
		break;

		case 2:
			subtracao();
		break;
		
		case 3:
			multiplicacao();	
		break;
		
		case 4:
			divisao();
		break;
		
		case 5:
			potencia();
		break;	
		
		default:
			printf ("Opção inválida!");
		break;
	}
}