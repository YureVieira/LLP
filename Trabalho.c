#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

int main()
{
	int i;
	int num_valores;
	float valores[100];
	setlocale(LC_ALL,"Portuguese");
	printf("+-----------------------------------------------------------------------+\n");
	printf("\tEsse programa calcula o erro sistematico e o erro aleatorio\n\tde valores ate 100 valores\n");
	printf("+-----------------------------------------------------------------------+\n");
	printf("\nEntre com a quantidade de valores\n");
	scanf("%d",&num_valores);
	if(num_valores <= 100)
	{
		for(i=0; i<num_valores;i++)
		{
			printf("Entre com o %dº valor\n",i+1);
			scanf("%f",&valores[i]);
			system("cls");
		}
	}
	else
	{
		printf("Numero invalido\n");
	}
	printf("Fim\n");
	return 0;
}
