#include <stdio.h>
#include <stdlib.h>
int main() {
	 int i=3;
    char cadena1 [] = "Hola soy alumno de UNO (linea 1)\n";
    char cadena2 [] = "estoy en clase (linea 2)\n";
    int cadena3 [] = {12345};
    FILE* fichero;
    fichero = fopen("ventas3.txt", "wt");
    fprintf (fichero, "%s%s%dEscritas %d+1 lineas en fichero", cadena1, cadena2, *cadena3, i);
    fclose(fichero);
    printf("Termine");
    return 0; 
}
