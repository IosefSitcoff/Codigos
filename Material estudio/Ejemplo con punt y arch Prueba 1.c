#include<stdio.h>
#define indi 2
void carga_datos();
void carga_punteros(char *fvttari, int *fvconsumo);
void informe(char *fvttari, int *fvconsumo);

main()
{
    int menu=0,vconsumo[indi];
    char vttari[indi];
    
    while(menu!=4)
    {
        printf("Aplicacion la Luz.\n");
        printf("*******************\n");
        printf("(1)Cargar Datos.\n");
        printf("(2)Cargar Punteros.\n");
        printf("(3)Informes totales.\n");
        printf("(4)Salir.\n");
        scanf("%i",&menu);
        
        switch(menu)
        {
            case 1:
                    carga_datos();
            break;
            case 2:
                    carga_punteros(vttari,vconsumo);
            break;
            case 3:
                    informe(vttari,vconsumo);
            break;
            
        }
    }
//    getch();
}
////////////////////////////////////////////////////////////////////////////////////////////
void carga_datos()
{
    FILE *archivo;
    int  consumo,total;
    char ttari;
                    
                    system("cls");
                    printf("Ingrese el tipo de tarifa:\nC = casa 2$ por unidad de consumo (kilovatio).\nP= pyme 3$ por unidad de consumo (kilovatio).\n");      
                    fflush(stdin);
                    scanf("%c",&ttari);
                    printf("Cantidad de unidades de consumo (Kilobatios):\n");
                    scanf("%i",&consumo);
                   
                    if(ttari=='c'){total= consumo*2;}
                    if(ttari=='p'){total= consumo*3;}
                 //   else{total=consumo*3;}
                    printf("El total a Pagar %i.",total);
                    
                    archivo=fopen("tarifa.txt","a+");
                    if (archivo == NULL)
                    {printf("\nError de apertura del archivo. \n\n");} 
                    else
                    {fprintf(archivo,"%c\t%i\n",ttari,consumo);}
                    fclose(archivo);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
void carga_punteros(char *fvttari, int *fvconsumo)
{
    FILE *archivo;
    int i;
 
    archivo=fopen("tarifa.txt","r");
    
                    if (archivo == NULL)
                    {printf("\nError de apertura del archivo. \n\n");}
                    else
                    {
                      for(i=0;i<indi;i++)
                        {
                          fscanf(archivo,"%c\t%i\n",fvttari,fvconsumo);
                          printf("%c\t%i\n",*fvttari,*fvconsumo);
                          fvttari++;
                          fvconsumo++;
                        }
                    }
                    fclose(archivo);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void informe(char *fvttari, int *fvconsumo)
{
    int i, acu=0, bacu2=0;
    
    for(i=0;i<indi;i++)
    {
        if(*(fvttari+i)=='c'){acu=acu+*(fvconsumo+i);}
        if(*(fvttari+i)=='p'){bacu2=bacu2+*(fvconsumo+i);}
        //else{acu2=acu2+*(fvconsumo+i);}
    }
    system("cls");
    printf("Total de consumo tipo casa: %i\n",acu);
    printf("Total de consumo tipo pyme: %i\n",bacu2);
}
