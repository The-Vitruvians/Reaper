#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double A;
    scanf("%lf", &A);
    printf("Informe sua altura:\nPeso ideal: %.14lf", (72.7*A)-58);
	return 0;
}