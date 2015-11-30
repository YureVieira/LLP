#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int fatorial(int num);
int fibonacci(int n);
void main()
{
	//printf("%d\n",fibonacci(10));
	//printf("%d\n",verificaFibonacci(376));
	printf("%d\n",primos(40));
}

int fatorial(int num)
{
	int fat = 1;
	
	if(num<1)return 1;
	
	for(;num>1;num--)
	{
		fat=fat*num;
	}
	return fat;
}

int fibonacci(int n)
{
	//Retorna o n-esimo termo da sequencia fibonacci
	int a=1,b=1;
	int i;
	if(n < 2)return 1;
	for(i=2;i<n;i++)
	{
		b=a+b;
		a=b-a;
	}
	return b;
}

int verificaFibonacci(int n)
{
	//Retorna 1 se o numero pertence a sequencia
	int i,val;
	for(i=0;;i++)
	{
		val = fibonacci(i);
		if(val > n)return 0;
		if(val == n)return 1;
	}
	
}

int verificaPrimo(int n)
{
	int j;
		for(j=n-1;j>1;j--)
		{
			if(!(n%j))return 0;//Sai do loop se o resto da divisão for 0
		}
		return 1;
}

int primos(int n)
{
	//Retorna o n-esimo termo da sequencia de numeros primos
	int p=0;
	unsigned long int i;
	for(i=2;;i++)
	{
		if(verificaPrimo(i))p++;
		if(p==n)return i;
	}
}
