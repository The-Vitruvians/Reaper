#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int idades (int count, float media, int count1)
{
    scanf("%d", &count);
    if(count <0)
    {
        printf("%.2f\n", media/count1);
        return;
    }
    else
    {
        media += count;
        idades(count, media, count1+1);
    }
}

int main() {
    int a;
    idades(a, 0, 0);
	return 0;
}