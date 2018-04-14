#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    int soma = a+b+c;
    int media = soma/3;
    if (media >=7) printf("aprovado");
     if (media < 3) printf("reprovado");
     if (media >= 3 && media < 7) printf("prova final");
	return 0;
}