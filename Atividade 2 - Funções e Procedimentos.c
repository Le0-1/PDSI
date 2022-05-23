#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
float media(float a, float b, float c) { //Média
    return (a+b+c)/3;}

float media_ponderada(float a, float b, float c) { //Média Ponderada
    return ((a*3)+(b*4)+(c*5))/(3+4+5);
    }

float perimetro_do_circulo(float r) { //Perimetro do Círculo
    return 2*PI*r;
    }

float area_do_circulo(float r) { //Área do circulo
    return PI*r*r;
    }

float area_do_triangulo(float b, float c) { //Área do Triângulo
    return (b*c)/2;}

float area_da_caixa(float a, float b, float c) { //Área da Caixa
    return (2*b*c)+(2*c*a)+(2*a*b);
    } 

float volume_da_caixa(float a, float b, float c) { //Volume da Caixa, a altura 'H' é o valor 'C'
    return a*b*c;
    }   

float area_do_cilindro(float r, float c) {  //Área do Cilindro
    return (2*PI*r*c)+(2*PI*r*r);
    }

float volume_do_cilindro(float r, float c) { //Volume do Cilindro
    return area_do_circulo(r)*c;
    }

float hipotenusa(float b, float c) { //Hipotenusa de um Triângulo Retângulo 
    return pow(b,2)+pow(c,2);
    }

float equacao_segundo_grau(float a, float b, float c, float delta) { //Equação do 2° Grau
    return (-b + sqrt(delta))/(2*a);
    }

int main() {
    float a, b, c, r;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("\nDigite o valor de b: ");
    scanf("%f", &b);
    printf("\nDigite o valor de c: ");
    scanf("%f", &c);
    printf("\nDigite o valor de r: ");
    scanf("%f", &r);
    printf("\n1.A)A media dos valores = %.2f", media(a, b, c));
    printf("\n1.B)A media ponderada dos valores = %.2f", media_ponderada(a, b, c));
    printf("\n1.C)O perimetro do circulo = %.2f", perimetro_do_circulo(r));
    printf("\n1.D)A area do circulo = %.2f", area_do_circulo(r));
    printf("\n1.E)A area do triangulo de altura c e base b = %.2f", area_do_triangulo(b, c));
    printf("\n1.F)Area de uma caixa = %.2f", area_da_caixa(a, b, c));
    printf("\n1.G)Volume da caixa = %.2f", volume_da_caixa(a, b, c));
    printf("\n1.H)Area do cilindro = %.2f", area_do_cilindro(r, c));
    printf("\n1.I)Volume do cilindro = %.2f", volume_do_cilindro(r, c));
    printf("\n1.J)Hipotenusa de um triangulo retangulo = %.2f", hipotenusa(b, c));
    float delta;
    delta = pow(b,2)-4*a*c;
    if(a == 0) {
        printf("\n1.K)Como o 'a' nao assumiu o valor zero, nao existe equacao do segundo grau"); return 0;}
    if(delta < 0){
        printf("\n1.K)Nao existe raiz negativa dentro dos numeros reais"); return 0;}
    else {
        printf("\n1.K)Raiz positiva da equacao de segundo grau = %f", equacao_segundo_grau(a, b, c, delta)); return 0;}
        return 0;
}
