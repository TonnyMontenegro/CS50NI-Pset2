//las famosas mausquerramientas usadas en caesar
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

//tambien esta vez se pide un argumento
int main(int argc, string argv[])
{
    int a, b, c = 0;//variables que se usaran para almacenar datos sobre la encriptacion

    //se asegura que el argumento sea lineal
    if (argc != 2)
    {
        printf("ingrese un argumento unico ejemplo ./vigenere word (\"word\" puede ser cualquier palabra)\n");
        return 1;
    }

    //argstr es el argumento ingresado por el usuario
    string argstr = (argv[1]);
    //comprueba que el argumento ingresado sea una letra del alfabeto
    for (int i = 0; i < strlen(argstr); i++)
    {
        if (isalpha(argstr[i]) == false)
        {
            printf("ingrese un argumento que sea unicamente alfabetico\n");
            return 1;
        }
    }

    //pide al usuario el texto a encriptar
    string usertext = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0; i < strlen(usertext); i++)
    {
        //Encripta las minusculas
        if islower(usertext[i])
        {
            a = (c % strlen(argstr));
            b = (tolower(argstr[a]) - 97);
            printf("%c", (((usertext[i] + b) - 97) % 26) + 97);
            c += 1;
        }
        //encripta las mayusculas
        else if isupper(usertext[i])
        {
            a = (c % strlen(argstr));
            b = (tolower(argstr[a]) - 97);
            printf("%c", (((usertext[i] + b) - 65) % 26) + 65);
            c += 1;
        }
        //no encripta ni numero ni otros caracteres
        else
        {
            printf("%c", usertext[i]);
        }


    }

    printf("\n");
    return 0;

}