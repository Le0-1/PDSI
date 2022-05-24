/* Aluno: Leonardo Magalhães do Vale 
Curso: Sistemas de Informação Lista 4 - Recursão */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fat(int n) {
    if(n==0) {
        return (1);
    }
    else{
        return(n*fat(n-1));
    } 
}
int mdc(int a, int b){
    if(a==b){
        return (a);
    }
    else if(a>b){
        return mdc(a-b, b);
    }
    return mdc(b,a);
}

long mdcc(int a, int b, int c) {
    int x = mdc(a, b);
    if(b==0 || c==0) return(a);
    else return(mdc(x, c));
    return(0);
}

int fib(n){
    if(n==1 || n==2) {
        return (1);
    }
    else {
        return (fib(n-1)+fib(n-2));
    }

}
int primo(int a){
    static int d = 2;
    if (d == a || a == 2 || a == 1)
    {
        return printf("Eh primo");
        
    }
    if (a%d == 0)
    {
        return printf("Nao eh primo");
        
    }
    else
    {
        d = d + 1;
        return primo(a);
    } 
}
int decrescente(int n){
    if(n==0){
        return 1;
    }
    else {
        printf(" %d ", n-1);
        return(decrescente(n-1));
    }
}
int resto(int a, int b){
    if (b==1 || a/b ==0){
        return 0;
    }
    if(a - b < b){
        return (a-b);
    }
    if (a/b!=0){
        return resto(a-b,b);
    }
}
int form(int a){
    if(a == 1)
    {
        return (1);
    }
    else
    {
        return (a*a + form(a-1));
    }
}
int mmc(int a, int b){
    static int d = 0;
    if(d == 0)
    {
        if(a > b) d = a;
        else d = b;
    }
    if(a == b) 
    {
        return (a);
    }
    if(d%a == 0 && d%b == 0) return (d);
    else 
    {
        d = d + 1;
        return mmc(a, b);
    }
}
int divisao(int a, int b){
    static int d = 0;
    if (a >= b)
    {
        d = d + 1;
        return (divisao(a - b, b));
    }
    else return (d);   
}
float raiz(float a, float b){
    if(b*b == a) return (b);
    if(b * b > a + 0.001){
        return raiz(a, b/2);
    }
    if(b * b < a - 0.001){
        return raiz(a, b * 3/2);
    }
    return (b);
}
int dig(int n){
    if(n == 0) {
        return 0;
    }
    else {
        return (n + dig(n - 1));
    }
}
int expoente(int a, int b){
    if(b == 1){
        return (a);
    }
    else return a * expoente(a, b - 1);
}
void crescente(int a) {
    if (a==1){
        printf(" %d", a);
    } 
    else {
        crescente(a-1);
        printf(" %d", a);
        
    }
}

int main() {
    int a, b, n;
    float c, d;
    printf("Declare a variavel 'a': ");
    scanf("%d", &a);
    printf("\nDeclare a variavel 'b': ");
    scanf("%d", &b);
    printf("\nDeclare a variavel 'n': ");
    scanf("%d", &n);
    printf("\nDeclare a variavel 'c': ");
    scanf("%f", &c);
    printf("\nDeclare a variavel 'd': ");
    scanf("%f", &d);

    printf("\n1.A)O fatorial do numero %d eh %d: ", a, fat(a));
    printf("\n1.B)O mdc dos numeros %d e %d eh: %d ", a, b, mdc(a, b));
    printf("\n1.C)O mdc de 'a', 'n' e 'b' eh: %ld", mdcc(a, b, n));
    printf("\n1.D)O enesimo termo da serie de fibonacci eh: %d", fib(n));
    printf("\n1.E)O numero %d eh primo?: ", a); 
    primo(a);
    printf("\n1.F)Ordem decrescente: %d", n);
    decrescente(n); 
    printf("\n1.G)Resto : %d", resto(a, b));
    printf("\n1.H)O somatorio de i*i, com i variando de 1 ate 'b' eh: %d", form(b));
    printf("\n1.I)O mmc de %d e %d eh: %d", a, b, mmc(a, b));
    printf("\n1.J)O resultado da divisao inteira de %d e %d eh: %d", b, n, divisao(b, n));
    printf("\n1.L)A raiz quadrada de %f eh: %f", c, raiz(c, d));
    printf("\n1.M)O somatorio de 'n' eh: %d", dig(n));
    printf("\n1.N)O numero %d elevado a %d eh: %d", b, n, expoente(b, n));
    printf("\n1.O)Ordem crescente:");
    crescente(n);
    
       
    
    
    
   














}
