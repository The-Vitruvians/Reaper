#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int treino(float kms, int count, int cont)
{
    if (count == 0)
    {
        if(cont >= 5)
        {
            printf("Desempenho otimo");
        }
        else if (cont >= 3 && cont <= 4)
        {
            printf("Desempenho razoavel");
        }
        else if (cont < 3)
        {
            printf("Desempenho ruim");
        }
        return;
    }
    scanf("%f", &kms);
    if (kms >= 8)
    {
        cont ++;
    }
    treino(kms, count-1, cont);
}

int main() {
    float a;
    treino(a, 7, 0);
	return 0;
}