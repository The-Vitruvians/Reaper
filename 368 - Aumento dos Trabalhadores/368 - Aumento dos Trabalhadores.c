#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a;
    scanf("%f", &a);
    if (a > 500 )
    {
        printf("%.2f", a + a*0.10);
    }
    else if (a > 300)
    {
        printf("%.2f", a + a*0.07);
    }
    else
    {
        printf("%.2f", a + a*0.05);
    }
	return 0;
}