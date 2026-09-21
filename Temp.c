#include <stdio.h>

int main()
{
    int dia;
    int mes;
    int ano;
    int suma;

    printf("Dime el dia de tu aniversario: ");
    scanf_s("%d", &dia);

    printf("\nDime el mes de tu aniversario: ");
    scanf_s("%d", &mes);

    printf("\nDime el ano de tu aniversario (4 digitos): ");
    scanf_s("%d", &ano);

    if (ano < 1000 || ano > 9999)
    {
        printf("\nEl ano debe de tener 4 digitos.\n");
    }
    else
    {
        suma = dia + mes + ano;

        printf("\nEsta es la suma: %d\n", suma);
    }

    return 0;
}