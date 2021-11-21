//mausquerramientas misteriosas que usaremos luego luego XD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

//esta vez la funcion main solicita un argumento
int main(int argumento, string argv[])
{

    //comprueba que el argumento sea lineal (Diferente de 2 porque el nombre en si cuenta como un elemento del arreglo)
    if (argumento != 2)
    {
        printf("ingrese un argumento unico ejemplo ./caesar k (k puede ser cualquier numero) \n");
        return 1;
    }

    //convierte el argumento en un entero haciendo uso de una mausquerramienta de <stdlib.h>
    int k = atoi(argv[1]);


    //se asegura que el argumento sea positivo
    if (k < 0)
    {
        printf("ingrese un argumento unico ejemplo ./caesar k (k puede ser cualquier numero positivo *cof cof*)\n");
        return 1;
    }
    else
    {

        //pide al usuario el texto plano a encriptar
        string usertext = get_string("plaintext: ");
        printf("ciphertext: ");

        for (int i = 0, n = strlen(usertext); i < n; i++)
        {

            //Encripta en minusculas
            if islower(usertext[i])
            {
                printf("%c", (((usertext[i] + k) - 97) % 26) + 97);
            }
            //encripta en mayusculas
            else if isupper(usertext[i])
            {
                printf("%c", (((usertext[i] + k) - 65) % 26) + 65);
            }
            //no encripta otro tipo de caracteres y numeros
            else
            {
                printf("%c", usertext[i]);
            }
        }

        printf("\n");

        return 0;
    }
}