#include <stdio.h>
#include <stdlib.h>
int main() {
    char cadena1 [] = "Hola soy alumno de UNO (linea 1)\n";
    char cadena2 [] = "estoy en clase (linea 2)\n";
    char cadena3 [] = "y hago un arch (linea 3)";
    FILE* fichero;
    fichero = fopen("ventas.txt", "wt");
    fputs(cadena1, fichero);
    fputs(cadena2, fichero);
    fputs(cadena3, fichero);
    fclose(fichero);
    printf("Termine");
    return 0; // Ejemplo aprenderaprogramar.com
}
