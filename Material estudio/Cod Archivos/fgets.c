#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMITE 50
int main() {
    char cadena1 [LIMITE];     
	char cadena2 [LIMITE];
    char cadena3 [LIMITE];
    
    FILE* fichero;
    fichero = fopen("ventas.txt", "rt");
    
    fgets (cadena1, LIMITE, fichero);
    fgets (cadena2, LIMITE, fichero);
    fgets (cadena3, LIMITE, fichero);
    
    fclose(fichero);
    
    puts ("Extraido de fichero lo siguiente: \n");
    puts (cadena1); 
	puts (cadena2); 
	puts (cadena3);
    printf("Termine");
    return 0; 
}
