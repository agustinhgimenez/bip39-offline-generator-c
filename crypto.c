#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <conio.h>

int main() {
    int i, j;
    int bit;
    int decimal;
    char big_number[254]; // una cadena de caracteres para almacenar el n�mero completo
    char binario_concatenado[253*11 + 1] = ""; // una cadena para concatenar los n�meros binarios generados

    // Inicializar la semilla del generador de n�meros aleatorios con el valor actual de tiempo
    srand(time(NULL));

    system("color a");
    system ("TITLE 2048 RANDOM NUMBER");

    do {
        system("cls"); // Borrar la pantalla
        binario_concatenado[0] = '\0'; // Resetear la cadena de n�meros binarios concatenados
        // Generar 253 bits aleatorios y mostrarlos en grupos de 11 d�gitos con etiquetas, convertidos a decimal
        for (i = 0; i < 23; i++) {
            decimal = 0;
            printf("Numero %d Binario : ", i+1);
            for (j = 0; j < 11; j++) {
                bit = rand() % 2;
                printf("%d", bit);
                decimal += bit * pow(2, 10-j);
                char bit_char[2];
                sprintf(bit_char, "%d", bit); // Convertir el bit a una cadena de caracteres
                strcat(binario_concatenado, bit_char); // Concatenar el bit a la cadena de n�meros binarios
            }
            decimal++; // Incrementar el decimal en 1
            printf(" (decimal: %d)\n", decimal);
        }
    } while (getch() != 27); // Esperar a que el usuario presione la tecla Esc (ASCII 27)

    printf("\nNumeros binarios generados: %s\n", binario_concatenado); // Mostrar la concatenaci�n de los n�meros binarios
    system("pause");

    return 0;
}
