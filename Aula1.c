/*
*	Autor: Yure Vieira
*	Data: 06/07/2015
*
*	Introdução a linguagem C
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>	//getch()


//prototipos
void fn1();
void Trapezio_area();
void fn3();

//Função principal
void main()
{
	char key;
	do
	{
		//Limpa tela
		system("cls");	
		
		/*funções*/
		/*******************/
		//fn1();
		//Trapezio_area();
		fn3();
		/*******************/
		
		//Pergunta se quer sair
		printf("\nPressione 'q' para sair\n");
		key = getch();
		
	}while(key!='q');
	
}

/******************************************************
* Funções
*******************************************************/
void fn1() 
{
	/*
	*	Exibe mensagens e pede dados ao usuário
	*/
	int x;
	float y,z;
	system("COLOR 3f");
	setlocale(LC_ALL,"Portuguese");		//Acentuação
	//printf("Olá mundo!");
	printf("Digite um número inteiro:\n");
	scanf("%d",&x);
	printf("Você digitou %d",x);
	printf("\nDigite dois números reais:\n");
	scanf("%f%f",&y,&z);
	printf("Você digitou %8.3f e %8.3f\n",y,z);	//%8.3f -8 digitos e 3 digitos são para parte decimal 
}


void Trapezio_area()
{
	/*
	*	Calcula a área de um trapézio
	*/
	float area,base1,base2,altura;
	
	setlocale(LC_ALL,"Portuguese");				//Acentuação
	printf("Calculo da área de um trapézio!");
	
	printf("\nEntre com a altura:\n");
	scanf("%f",&altura);
	printf("\nEntre com as bases:\n");
	scanf("%f%f",&base1,&base2);
	
	area = (base1+base2)*altura/2;	//Calculo
	
	printf("\narea = %0.0f",area);	//Exibe resposta	
}

void fn3()
{
	/*
	*	Solução para Ax+B=0 // x = -B/A
	*/
		float A,B,x;
	
	setlocale(LC_ALL,"Portuguese");				//Acentuação
	printf("Calculo de equação do 1º grau (Ax+B=0)");
	
	printf("\nEntre com A:\n");
	scanf("%f",&A);
	printf("\nEntre com B:\n");
	scanf("%f",&B);
	
	
	if(A==0)
	{
		if(B==0)
			printf("\nIndeterminado");
		else
			printf("\nImpossivel");
		
	}
	else
	{
		x = -B/A;
		printf("\nX = %0.0f",x);	//Exibe resposta
	}	
}

