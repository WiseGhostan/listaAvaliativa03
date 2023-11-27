#include <stdio.h>
#include <math.h>

int main()
{
    double valor = 0, aporte = 0, taxa = 0;
    int tempo = 0, i = 1;
    scanf("%d", &tempo);
    scanf("%lf", &aporte);
    scanf("%lf", &taxa);
    while(i <= tempo)
    {
        valor = aporte * (1 + taxa) * (pow(1 + taxa, i)-1)/taxa;
        printf("Montante ao fim do mes %d: R$ %.2lf\n", i, valor);
        i++;
    }
    
    return 0;
}
