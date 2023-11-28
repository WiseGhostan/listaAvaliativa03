#include <stdio.h>
#include <string.h>

int main()
{
    char placa[12], dia[20];
    int placaValida = 1, diaValido = 1, tamanho = 0;
    scanf("%s", placa);
    scanf("%s", dia);
    tamanho = strlen(placa);
    printf("%d\n", tamanho);

    if (tamanho != 7 && tamanho != 8)
    {
        printf("Placa invalida\n");
        placaValida = 0;
    }
    if (dia != 'SEGUNDA-FEIRA' || dia != 'TERCA-FEIRA' || dia != 'QUARTA-FEIRA' || dia != 'QUINTA-FEIRA' || dia != 'SEXTA-FEIRA' || dia != 'SABADO' || dia != 'DOMINGO')
    {
        printf("Dia da semana invalido\n");
        diaValido == 0;
    }
    
    if (placaValida == 1 && diaValido == 1)
    {
        if (dia == 'SEGUNDA-FEIRA')
        {
            /* code */
        }
        else if (dia == 'TERCA-FEIRA')
        {
            /* code */
        }
        else if (dia == 'QUARTA-FEIRA')
        {
            /* code */
        }
        else if (dia == 'QUINTA-FEIRA')
        {
            /* code */
        }
        else if (dia == 'SEXTA-FEIRA')
        {
            /* code */
        }
        else if (dia == 'SABADO' || dia == 'DOMINGO')
        {
            printf("Nao ha proibicao no fim de semana");
        }
        
    }
    
   
    return 0;
}
