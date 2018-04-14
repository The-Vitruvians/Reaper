#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int produto(long long prod, long long *contador)
{
    if (scanf("%Ld", &prod) != EOF)
    {
        *contador *= prod;
        return produto(prod, contador);
    }
    else 
    {
        return *contador;
    }
}
int main() {
    long long num, contador;
    contador = 1;
    produto(num, &contador);
    printf("Prod = %Ld", contador);
	return 0;
}