#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int retornaValorRomano(char r)
{   
    switch (r)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        break;
    }
    return 0;
}
 
int romanoParaDecimal(char roman[])
{
    int resultado = 0;
    for (int i = 0; i < strlen(roman); i++)
    {
        
        int s1 = retornaValorRomano(roman[i]);
 
        if (i + 1 < strlen(roman))
        {
            int s2 = retornaValorRomano(roman[i + 1]);
 
            if (s1 >= s2)
            {
                resultado = resultado + s1;
            }
            else
            {
                resultado = resultado + s2 - s1;
                i++;
            }
        }
        else {
            resultado = resultado + s1;
        }
    }
    return resultado;
}

int decimalParaBinario(int dec){
    int binario[32], casa = 0;
    while (dec > 0)
    {
        binario[casa] =  dec % 2;
        dec = dec / 2;
        casa++;
    }
    for (int i = casa - 1; i >= 0; i--){
        printf("%d", binario[i]); 
    }
    printf("\n");
    return 0;
}

int decimalParaHexa(int dec){
    int casa = 1, temp;
    char hexa[16];
    while (dec !=0)
    {
        temp = dec % 16;
        if (temp < 10)
        {
            temp = temp + 48;
        }
        else 
        {
            temp = temp + 87;
        }
        hexa[casa++] = temp;
        dec = dec / 16;      
    }
    for (int i = casa - 1; i > 0; i--)
    {
        printf("%c", hexa[i]);
    }
    printf("\n");
    return 0;
}
int main()
{
    char romano[13];
    scanf("%s", romano);
    int decimal = romanoParaDecimal(romano);
    printf("%s na base 2: ", romano);
    decimalParaBinario(decimal);
    printf("%s na base 10: %d\n", romano, decimal);
    printf("%s na base 16: ", romano);
    decimalParaHexa(decimal);
    return 0;
}
