/*Lista 3 de Programação e Desenvolvimento de Software 
Nome: Leonardo Magalhães do Vale; Curso: Sistemas de Informação*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


float max(float a, float b, float c)             //Função do Número Máximo
{      
    if (a > b && a> c) 
    {
        return(a);
    }
    else if ( b > c) 
    {
        return (b);
    }
    else 
    {
        return(c);
    }
}

float min(float a, float b, float c)             //Número Mínimo com a função Máxima
{           
    if(a==max(a, b ,c)) 
    {
        if(b==max(b, b, c)) 
        {
            return (c);
        }
        else 
        {
            return (b);
        }
    }
    else if (b==max(a, b, c)) 
    {
        if(a==max(a, a, c)) 
        {
            return (c);
        }
        else 
        {
            return(a);
        }
    }
    else if (c==max(a, b, c)) 
    {
        if (b==max(b, b, a)) 
        {
            return (a);
        }
        else 
        {
            return (b);
        }
    }
}

bool par(int x)                                  //É ou não impar
{                           
        if(x%2==0) 
        {
            return(true);
        }
        else 
        {
            return(false);
        }
}

bool intervalo(float x, float y, float z)        //Intervalo Dentro
{  
    if(y <=x && x<=z) 
    {
        return(true);
    }
    else 
    {
        (false);
    }
}

bool intervalo_fora(float x, float y, float z)   //Intervalo Fora
{ 
    if (!(y <=x && x<=z)) 
    {
        return(true);
    }
    else 
    {
        return(false);
    }
}

bool ano_bissexto(int k)                         // É Ano Bissexto ou Não?
{                                            
    if(k%400==0 || k%4==0 && !(k%4==0 && k%100==0))
    { 
        return (true);
    }
    else 
    {
        return (false);
    }
    
}

int main(){
    //Número 1 da Lista Abaixo

    float a, b, c;
    int x;
    int k;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("\nDigite o valor de B: ");
    scanf("%f", &b);
    printf("\nDigite o valor de C: ");
    scanf("%f", &c);
    printf("\nDigite o valor de X: ");
    scanf("%d", &x);
    printf("\nDigite o valor de K: ");
    scanf("%d", &k);
    printf("\n1.A)O maior valor entre %f, %f, %f eh: %f", a, b, c, max(a, b, c));
    printf("\n1.B)O menor valor entre %f, %f, %f eh: %f", a, b, c, min(a, b, c));

    //Número 2 da Lista Abaixo
    
    if(par(x)==1) printf("\n2.A)O numero eh par"); 
    else printf("\n2.A)O numero %d eh impar", x);
    if(intervalo(a, b, c)==1) printf("\n2.B)O numero %f esta no intervalo de %f e %f", a, b, c);
    else printf("\n2.B)O numero %f nao esta entre %f e %f", a, b, c);
    if(intervalo_fora(a, b, c)==1) printf("\n2.C)O numero %f nao esta no intervalo de %f e %f", a, b, c);
    else printf("\n2.B)O numero %f esta no intervalo de %f e %f", a, b, c);

    //Número 3 da Lista Abaixo
    if(ano_bissexto(k)==1) printf("\n3)O ano %d eh bissexto", k);
    else printf("\n3)O ano %d nao eh bissexto", k);
    
    return 0;

}
