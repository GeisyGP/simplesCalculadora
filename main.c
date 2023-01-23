#include <stdio.h>
#include <locale.h>
#include <math.h>

void soma(){
	float num1, num2, resultado;

	printf ("Informe os dois valores: ");
	scanf ("%f", &num1);
	scanf ("%f", &num2);
	
	resultado = num1 + num2;
	printf ("\nResultado: %.2f\n\n", resultado);
}

void subtracao(){
	float num1, num2, resultado;
	
	printf ("Informe o minuendo: ");
	scanf ("%f", &num1);
	printf ("Informe o subtraendo: ");
	scanf ("%f", &num2);			
	
	resultado = num1 - num2;
	printf ("\nResultado: %.2f\n\n", resultado);
}

void multiplicacao(){
	float num1, num2, resultado;
	
	printf ("Informe os dois valores: ");
	scanf ("%f", &num1);
	scanf ("%f", &num2);			
	
	resultado = num1 * num2;	
	printf ("\nResultado: %.2f\n\n", resultado);
}

void divisao (){
	float num1, num2, resultado;
	
	printf ("Informe o dividendo: ");
	scanf ("%f", &num1);
	printf ("Informe o divisor: ");
	scanf ("%f", &num2);			
	
	resultado = num1 / num2;	
	printf ("\nResultado: %.2f\n\n", resultado);	
}

void potencia(){
	int num1, num2, resultado;

	printf ("Informe a base: ");
	scanf ("%d", &num1);
	printf ("Informe o expoente: ");
	scanf ("%d", &num2);
			
	resultado = pow(num1, num2);
	printf ("\nResultado: %d\n\n", resultado);
}

void divisaoResto(){
	int num1, num2, divisao, resto;
	
	printf ("Informe o dividendo: ");
	scanf ("%d", &num1);
	printf ("Informe o divisor: ");
	scanf ("%d", &num2);
			
	divisao = num1 / num2;
	resto = num1 % num2;
	printf ("Resultado: %d com resto %d\n\n", divisao, resto);
}

void primo(){
	int num, i, cont = 0;
	
	printf("\nInforme um número: ");
	scanf("%d", &num);
 
 	for (i = 2; i <= num/2; i++){
		if (num % i == 0) {
		    cont++;
 	}
 }
 
	if (cont == 0){
		printf("\nSim, %d é primo\n\n", num);
 	}
	else{
	    printf("\nNão, %d não é primo\n\n", num);	
	}	
}

int menu (int op){
	printf ("*************** MENU ***************");
	printf ("\n1 - Somar \n2 - Subtrair \n3 - Multiplicar \n4 - Dividir \n5 - Potência");
	printf ("\n6 - Divisão com resto \n7 - Verificar se o número é primo \n0 - Encerrar");
	printf ("\nInforme sua opção: ");
	scanf ("%d", &op);
	return op;
}

main (void){
	setlocale(LC_ALL, "Portuguese");
	int op = 1;

	while (op != 0){
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
				
			case 6:
				divisaoResto();
			break;

			case 7:
				primo();
			break;

			case 0:
				printf ("encerrando...");
			break;

			default:
				printf ("Opção invalida!\n");
			break;
		}
	}
}
