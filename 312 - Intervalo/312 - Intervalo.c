#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a;
    scanf("%f", &a);
    if (a >=0 && a <= 25)
    {
        printf("Intervalo [0,25]");
    }
    else if (a > 25 && a <= 50)
    {
        printf("Intervalo (25,50]");
    }
    else if (a > 50 && a <= 75)
    {
        printf("Intervalo (50,75]");
    }
    else if (a > 75 && a <=100)
    {
        printf("Intervalo (75,100]");
    }
    else if (a < 0 || a> 100)
    {
        printf("Fora de intervalo");
    }
	return 0;
}