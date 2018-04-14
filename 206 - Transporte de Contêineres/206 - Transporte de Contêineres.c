#include <stdio.h> 
int main() 
{ 
    int A, B, C, X, Y, Z ; 
    scanf("%d %d %d %d %d %d", &A, &B, &C, &X, &Y, &Z);
    if (X/A != 0 && Y/B != 0 && Z/C != 0)
    {
        printf("%d", (X/A)*(Y/B)*(Z/C));
    }
    else
    {
        printf("0");
    }
    return 0;
}