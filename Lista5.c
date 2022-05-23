#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fat(int n)
{
	int p = 1;
	for(int i=n; i>=1; i=i-1)
	{
		p= p * i;
	}
	return(p);
}

int mdc(int a, int b)
{
	while(a != b)
	{
		if(a > b)
		{
			a = a - b;
		}
		if(b > a)
		{
			b = b - a;
		}
	}
	return (a);
}

int mdc3(int a, int b, int c)
{
	int mdc_3 = 1;
	for(int i = 1; i<=a; i++)
	{
		if(a%i==0 && b%i==0 && c%i==0)
		{
			mdc_3 = i;
		}
	}
	return(mdc_3);
}
int fibo(int a)
{
	int d, f1, f2, i;
    i = 3;
	f1 = 1;
	f2 = 1;
	while(a >= i)
	{	
		d = f1 + f2;
		f1 = f2;
		f2 = d;
        i = i + 1;
	}
	return (d);
}
int primo(int a)
{
	int s = 0;
	int d = a - 1;
	while(d>1)
	{
		if(a%d==0)
		{
			s = s + d;
		}
		d = d - 1;
	}
	if(s==0) return(1);
	else return(0);
}
int decrescente(int a)
{
	while(a >= 0)
	{
		printf(" %d", a);
		a = a - 1;
	}
}
int resto(int a, int b)
{
	while(a >=  b)
	{
		a = a - b;
	}
	return(a);
}
int form(int a)
{
	int s = 0;
	for(int i=1; i<=a; i=i+1)
	{
		s = s + (i * i);
	}
	return(s);
}
int mmc(int a, int b)
{	
	int i;
	if (a==b) return (a);
	if(a > b) i = a;
	if(b > a) i = b;
	while(i%a != 0 || i%b != 0)
	{
		i = i + 1;
	}
	return(i);
}
int divisao(int a, int b){
	int d = 0;
	if(a<b) return (0);
	while(a > b)
	{
		d = d + 1;
		a = a - b;
	}
	return (d);
}
float raiz(float n){
	float i = 1.0;
    if (n == 1.0) return (i);
    if(n==0) return (0);
    while(i * i > n + 0.005 || i * i < n - 0.005){
        if(i * i > n + 0.005) 
        {
        i = i * 1/2;
        }
        else if (i * i < n - 0.005) 
        {
            i = i * 3.0/2.0;
        }
    }
    return (i);
}

int dig(int n)
{
	int s = 0;
	while(n>9)
	{
		s = s + n%10;
		n = n/10;
	}
	return(s + n);
}
int expoente(int a, int b)
{
	int i = 1;
	int d = 1;
	while(i <= b)
	{
		d = d * a;
		i = i + 1;
	}
	return(d);
}
int crescente(int a)
{
	int i = 0;
	while(a >= i)
	{
		printf(" %d", i);
		i = i + 1;	
	}
}

int main()
{
	int a, b, c, e;
	float d;
	printf("Digite o valor de 'a': ");
	scanf("%d", &a);
	printf("\nDigite o valor de 'b': ");
    scanf("%d", &b);
	printf("\nDigite o valor de 'c': ");
    scanf("%d", &c);
	printf("\nDigite o valor de 'd': ");
	scanf("\n%f", &d);
	printf("\nDigite o valor de 'e': ");
    scanf("%d", &e);

	printf("\n1.A)O fatorial de %d eh: %d", a, fat(a));
	printf("\n1.B)O MDC de %d e %d eh: %d", a, b, mdc(a,b));
	printf("\n1.C)O MDC de %d, %d e %d : %d", a, b, c, mdc3(a, b, c));
	printf("\n1.D)O fibonacci de %d eh: %d", c, fibo(c));
	printf("\n1.E)O numero %d eh primo?%d", c, primo(c));
	printf("\n1.F)A ordem decrescente de %d ateh 0 eh\n:", a);
	decrescente(a);
	printf("\n1.G)O resto da divisao eh: %d", resto(a, b));
	printf("\n1.H)O somatorio de i*i eh: %d", form(b));
	printf("\n1.I)O MMC de %d e %d eh: %d", a, b, mmc(a, b));
	printf("\n1.J)O resultado da divisao inteira de %d e %d eh: %d", a, b, divisao(a, b));
	printf("\n1.L)A raiz quadrada de %f eh: %f", d, raiz(d));
	printf("\n1.M)A soma dos digitos de %d eh %d: ", c, dig(c));
	printf("\n1.N)O numero %d elevado a %d eh: %d", a, b, expoente(a, b));
	printf("\n1.O)A ordem crescente de 0 ate %d eh:\n", e);
	crescente(e);
}