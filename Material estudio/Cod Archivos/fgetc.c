#include <stdio.h>
#include <stdlib.h>
int main() {
	char cadena1 [50];
    char cadena2 [50];
    char cadena3 [50];
    char control= 'a';
    int i;
    FILE* fichero;
    fichero = fopen("ventas2.txt", "rt");
    i=1;
    while (control >=32 && control<=126)  {
        control = fgetc(fichero);
        cadena1[i]='\0';
        if (control >=32 && control<=126)
        {cadena1[i-1] = control;}
        i++;
    }

    i=1;
    control= 'a';
    while (control >=32 && control<=126)  {
        control = fgetc(fichero);
        cadena2[i]='\0';
        if (control >=32 && control<=126)
       {cadena2[i-1] = control;}
        i++;
    }

    i=1;
    control= 'a';
    while (control >=32 && control<=126)  {
        control = fgetc(fichero);
        cadena3[i]='\0';
        if (control >=32 && control<=126)
       {cadena3[i-1] = control;}
        i++;
    }
    fclose(fichero);
    printf ("Extraido de fichero lo siguiente: \n");
    printf ("cadena1: %s \n", cadena1);
    printf ("cadena2: %s \n", cadena2);
    printf ("cadena3: %s \n", cadena3);
    printf("Termine");
    return 0; 
}
