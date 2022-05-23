//Exercicío 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    printf("1-A) %d\n", 3+4);
    printf("1-B) %f\n", 7.0/4.0);
    printf("1-C) %d\n", 3*3);
    printf("1-D) %f\n", 5.3*2.1);
    printf("1-E) %d\n", 2*5-2);
    printf("1-F) %d\n", 2+(2*5));
    printf("1-G) %d\n", (2+5)*3);
    printf("1-H) %f\n", sin(3.141502));
    printf("1-I) %f\n", sqrt(5));
    printf("1-J) %d\n", 1+2+3);
    printf("1-K) %d\n", 1*2*3);
    printf("1-L) %f\n", (1+2+3)/3.0);
    printf("1-M) %d\n", (2+4)*(3-1));
    printf("1-N) %d\n", (9/3)+(3*2));
    printf("1-O) %f\n", sin(4.5)+cos(3.7));
    printf("1-P) %f\n", log(2.3)-log(3.1));
    printf("1-Q) %f\n", log(7)+(log(7)*log(7)-cos(log(7))));
    printf("1-R) %f\n", (10.3+8.4)/50.3-(10.3+8.4));
    printf("1-S) %f\n", (cos(0.8)+sin(0.8))*(cos(0.8)-sin(0.8)));
    
//Exercício 2
    float a, b, c, d;
    printf("Digite O Valor Das Variaveis a, b, c, d, Respectivamente:\n");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    printf("2-A) %f\n", a+b);
    printf("2-B) %f\n", a/c);
    printf("2-C) %f\n", a*a);
    printf("2-D) %f\n", b*c);
    printf("2-E) %f\n", a*b-c);
    printf("2-F) %f\n", a+b*c);
    printf("2-G) %f\n", (a+b)*c);
    printf("2-H) %f\n", sin(a));
    printf("2-I) %f\n", sqrt(b));
    printf("2-J) %f\n", a+b+c);
    printf("2-K) %f\n", a*b*c);
    printf("2-L) %f\n", (a+b+c)/d);
    printf("2-M) %f\n", (a+b)*(a-d));
    printf("2-N) %f\n", (b/c)+(a*d));
    printf("2-O) %f\n", sin(b)+cos(c));
    printf("2-P) %f\n", log(a)-log(c));
    printf("2-Q) %f\n", log(a)+(log(b)*log(d)-cos(log(c))));
    printf("2-R) %f\n", (b+a)/c-(d+a));
    printf("2-S) %f\n", (cos(d)+sin(c))*(cos(b)-sin(a)));
    
//Exercício 3
    printf("3.A) Media de a, b e c:\n%f", (a+b+c)/3);
    printf("\n3.B) Media ponderada de a, b e c, onde a tem peso 3, b 4 e c 5:\n%f", (a*3+b*4+c*5)/(a+b+c));
    printf("\n3.B) Perimetro de um circulo de raio a:\n%f", 2*3.14*a);
    printf("\n3.D) Area de um circulo de Raio a:\n%f", 3.14*a*a);
    printf("\n3.E) Area de um triangulo de base b e altura c:\n%f", (b*c)/2);
    printf("\n3.F) Hipotenusa de um triangulo retangulo, cujos lados conhecidos sao b e c:\n%f", (b*b)+(c*c));
    printf("\n3.G) Digite os valores dos coeficientes a, b, c de uma equacao generica do segundo grau:\n");
    scanf("%f%f%f", &a, &b, &c);
    /*Programa que calcula as duas raizes de uma equação do 2° grau*/
    float delta, x1, x2;
    delta=b*b-4*a*c;
    x1=((-b+sqrt(delta))/(2*a));
    x2=((-b-sqrt(delta))/(2*a));
    if(a==0){
    printf("Nao converte-se em equacao do Segundo Grau Pois O A==Zero"); return 0;
    }
    if (delta<0) {
        printf("Como o Delta Fica Negativo Nao Existem Raizes Reais"); return 0;
    }
    if(delta==0){
        printf("\nComo Delta Fica Zero A Unica Raiz Real Converte-se Em: \n%f", x1); return 0;
    }
    else {
        printf("As Raizes da Equacao de Segundo Grau Sao: \n%f e %f", x1, x2);
    }
}    
