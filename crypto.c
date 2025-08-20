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
    char big_number[254]; // una cadena de caracteres para almacenar el número completo
    char binario_concatenado[253*11 + 1] = ""; // una cadena para concatenar los números binarios generados

    // Inicializar la semilla del generador de números aleatorios con el valor actual de tiempo
    srand(time(NULL));

    system("color a");
    system ("TITLE 2048 RANDOM NUMBER");

    do {
        system("cls"); // Borrar la pantalla
        binario_concatenado[0] = '\0'; // Resetear la cadena de números binarios concatenados
        // Generar 253 bits aleatorios y mostrarlos en grupos de 11 dígitos con etiquetas, convertidos a decimal
        for (i = 0; i < 23; i++) {
            decimal = 0;
            printf("Numero %d Binario : ", i+1);
            for (j = 0; j < 11; j++) {
                bit = rand() % 2;
                printf("%d", bit);
                decimal += bit * pow(2, 10-j);
                char bit_char[2];
                sprintf(bit_char, "%d", bit); // Convertir el bit a una cadena de caracteres
                strcat(binario_concatenado, bit_char); // Concatenar el bit a la cadena de números binarios
            }
            decimal++; // Incrementar el decimal en 1
            printf(" (decimal: %d)\n", decimal);
        }
    } while (getch() != 27); // Esperar a que el usuario presione la tecla Esc (ASCII 27)

    printf("\nNumeros binarios generados: %s\n", binario_concatenado); // Mostrar la concatenación de los números binarios
    system("pause");

    return 0;
}
