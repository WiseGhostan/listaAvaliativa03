#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char placa[12], dia[20];
    int placaValida = 1, diaValido = 1, tamanho = 0, ultimo = 0;
    scanf("%s", placa);
    scanf("%s", dia);
    tamanho = strlen(placa);
    ultimo = tamanho - 1;
    

    if (tamanho != 7 && tamanho != 8)
    {
        printf("Placa invalida\n");
        placaValida = 0;
    }
    if (tamanho == 7)
    {
        for (int i = 0; i < tamanho; i++)
        {
            if (placa[i] == '-')
            {
                placaValida = 0;
                printf("Placa invalida\n");
            }
            
        }
    }
    
    
    if (strcmp(dia, "SEGUNDA-FEIRA") != 0 && strcmp(dia, "TERCA-FEIRA") != 0 && strcmp(dia, "QUARTA-FEIRA") != 0 && strcmp(dia, "QUINTA-FEIRA") != 0 && strcmp(dia, "SEXTA-FEIRA") != 0 && strcmp(dia, "SABADO") != 0 && strcmp(dia, "DOMINGO") != 0)
    {
        printf("Dia da semana invalido\n");
        diaValido = 0;
    }
    
    
    if (placaValida == 1 && diaValido == 1)
    {
        if (strcmp(dia, "SEGUNDA-FEIRA") == 0)
        {
            if (placa[ultimo] == '0' || placa[ultimo] == '1')
            {
                printf("%s nao pode circular segunda-feira\n", placa);
            }
            else
            {
                printf("%s pode circular segunda-feira\n", placa);
            }
        }
        else if (strcmp(dia, "TERCA-FEIRA") == 0)
        {
            if (placa[ultimo] == '2' || placa[ultimo] == '3')
            {
                printf("%s nao pode circular terca-feira\n", placa);
            }
            else
            {
                printf("%s pode circular terca-feira\n", placa);
            }
        }
        else if (strcmp(dia, "QUARTA-FEIRA") == 0)
        {
            if (placa[ultimo] == '4' || placa[ultimo] == '5')
            {
                printf("%s nao pode circular quarta-feira\n", placa);
            }
            else
            {
                printf("%s pode circular quarta-feira\n", placa);
            }
        }
        else if (strcmp(dia, "QUINTA-FEIRA") == 0)
        {
            if (placa[ultimo] == '6' || placa[ultimo] == '7')
            {
                printf("%s nao pode circular quinta-feira\n", placa);
            }
            else
            {
                printf("%s pode circular quinta-feira\n", placa);
            }
        }
        else if (strcmp(dia, "SEXTA-FEIRA") == 0)
        {
            if (placa[ultimo] == '8' || placa[ultimo] == '9')
            {
                printf("%s nao pode circular sexta-feira\n", placa);
            }
            else
            {
                printf("%s pode circular sexta-feira\n", placa);
            }
        }
        else if (strcmp(dia, "SABADO") == 0 || strcmp(dia, "DOMINGO") == 0)
        {
            printf("Nao ha proibicao no fim de semana\n");
        }
        else{
            printf("%s", dia);
        }
        
    }
    
   
    return 0;
}
