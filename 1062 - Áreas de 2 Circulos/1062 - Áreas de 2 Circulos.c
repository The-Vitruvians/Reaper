#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    if (a == b)
    {
        printf("Iguais"); 
    }
    else if (a > b)
    {
        printf("Primeiro circulo");
    }
    else
    {
        printf("Segundo circulo");
    }
	return 0;
}