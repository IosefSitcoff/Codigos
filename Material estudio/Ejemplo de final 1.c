#include<stdio.h>
#include<stdlib.h>
#define indi 2
int menu();
void ingresar_pedidos();
void cargar_vectores(int *fvcod, char *fvcodenv, int *fvcant, float *fvprecio);
void informe1(char *fvcodenv,int *fvcant);
void informe2(int *fvcod,float *fvprecio);

main()
{
	int ini=0,vcod[indi],vcant[indi];
	char vcodenv[indi];
	float vprecio[indi];
	
	while (ini!=5)
	{
		ini=menu();
		
		switch(ini){
		
			case 1:
				ingresar_pedidos();
			break;
			case 2:
				cargar_vectores(vcod,vcodenv,vcant,vprecio);
			break;
			case 3:
				informe1(vcodenv,vcant);
			break;
			case 4:
				informe2(vcod,vprecio);
			break;
				   }
	}
	getch();	
} 
/////////////////////////////////funciones////////////////////////////////////////////
int menu()
{
	int res; 
	
	system("cls");
	printf("Aplicacion Embasadora.\n");
	printf("***********************\n\n");
	printf("(1) Ingresar Pedidos.\n");
	printf("(2) Cargar Vectores.\n");
	printf("(3) Informe 1.\n");
	printf("(4) Informe 2.\n");
	printf("(5) Salir.\n");
	scanf("%i",&res);
	
	return res;
	
}
////////////////////////////////////////////////////////////////////////////////////////////////
void ingresar_pedidos()
{
	FILE *archivo;
	int cod,cant;
	char codenv;
	float precio;
	
	
	system("cls");
	printf("Ingresos.\n");
	printf("----------\n");
	printf("Ingresar Codigo de Operados.\n");
	scanf("%i",&cod);
	printf("\nCodigo tipo de envase ((A) 1Litro,  (B) 1,5 Litros, (C) 2,25 Litros.)\n");
	fflush(stdin);
	scanf("%c",&codenv);
	printf("\nIngresar Cantidad de envases a embotellar.\n");
	scanf("%i",&cant);
	printf("\nIngresar Precio del pedido.\n");
	scanf("%f",&precio);
	
	archivo=fopen("pedidos.txt","a+");
	if(archivo==NULL)
     {
          printf("Apertura de Archivo erronea");
     }
     else
         {
            fprintf(archivo,"%i\t%c\t%i\t%f\n",cod,codenv,cant,precio);
            printf("%i\t%c\t%i\t%f\n",cod,codenv,cant,precio);
         }
     
     fclose(archivo);
     system("cls");
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
void cargar_vectores(int *fvcod, char *fvcodenv, int *fvcant, float *fvprecio)
{
	FILE *archivo;
	
	
	archivo=fopen("pedidos.txt","r");
	if(archivo==NULL)
     {
          printf("Apertura de Archivo erronea");
     }
     else
         {
         	 while (!feof(archivo))
         	 {
			    fscanf(archivo,"%i\t%c\t%i\t%f\n",fvcod,fvcodenv,fvcant,fvprecio);
                printf("%i\t%c\t%i\t%2.2f\n",*fvcod,*fvcodenv,*fvcant,*fvprecio);
                fvcod++;
				fvcodenv++;
				fvcant++;
				fvprecio++;
             }
         }
     fclose(archivo);
     getch();
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
void informe1(char *fvcodenv,int *fvcant)
{
	int cont1=0, cont2=0,cont3=0, i=0;
	float acu1=0, acu2=0, acu3=0;
	
	for(i=0;i<indi;i++)
	{
		if(*(fvcodenv+i)=='a')
		{
			cont1++;
			acu1=*(fvcant+i)+acu1;
		}
		else if(*(fvcodenv+i)=='b')
		{
			cont2++;
			acu2=*(fvcant+i)+acu2;
		}
		else if(*(fvcodenv+i)=='c')
		{
			cont3++;
			acu3=*(fvcant+i)+acu3;
		}
			
	}	
	
	system("cls");
	printf("Informes 1.\n");
	printf("***********\n");
	printf("Cantidad de pedidos botellas tipo a: %i\n",cont1);
	printf("Acumulado de Litros a: %2.2f\n",acu1*1);
	printf("Cantidad de pedidos botellas tipo b: %i\n",cont2);
	printf("Acumulado de Litros b: %2.2f\n",acu2*1.5);
	printf("Cantidad de pedidos botellas tipo c: %i\n",cont3);
	printf("Acumulado de Litros c: %2.2f\n",acu3*2.25);
	getch();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
void informe2(int *fvcod,float *fvprecio)
{
	int i=0,ban=0,aux;
	float acu=0,max;
	
	for(i=0;i<indi;i++)
	{
		if(ban==0)
		{
			ban=1;
			max=*(fvprecio+i);
		}
		else
		{
			if(max<*(fvprecio+i))
			{
				aux=*(fvcod+i);
				max=*(fvprecio+i);
			}
		}
		acu=*(fvprecio+i)+acu;
	}
	system("cls");
	printf("Informe 2.\n");
	printf("***********\n");
	printf("El precio mas alto es: %2.2f\nEl codigo del operador es: %i\n",max,aux);
	printf("El total acumulado es: %2.2f",acu);
	getch();
}
