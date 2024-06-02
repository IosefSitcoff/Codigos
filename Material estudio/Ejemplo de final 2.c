#include<stdio.h>
#include<stdlib.h>
int menu();
void ingresar_cobro();
void cargar_vectores(int *fvcod_emp, int *fvturno, char *fvtm, char *fvpago);
void informe1(char *fvtm, char *fvpago);
void informe2(int *fvcod_emp, int *fvturno);
main()
{
	int ini=0, vcod_emp[5],vturno[5];
	char vtm[5], vpago[5];
	
    ini=menu();
	while(ini!=5)
	{
		switch(ini)
		{
			case 1:
				ingresar_cobro();
			break;
			case 2:
				cargar_vectores(vcod_emp,vturno,vtm,vpago);
			break;
			case 3:
				informe1(vtm, vpago);
			break;
			case 4:
				informe2(vcod_emp, vturno);
			break;
			
		}
		ini=menu();
	}
}
//////////////////////////////////////////////////////////////////////////////////
void informe2(int *fvcod_emp, int *fvturno)
{
	int i,cont=0;
	
	for(i=0;i<5;i++)
	{
		if(*fvturno==1){cont++;}
		else{printf("El codigo de empleado que facturo horario normal: %i\n",*fvcod_emp);}
		fvcod_emp++;
		fvturno++;
	}
	printf("El total acumulado de todos los turnos tipo pico es: %i\n",cont*15);
	getch();
	system("cls");
}
/////////////////////////////////////////////////////////////////////////////////
void informe1(char *fvtm, char *fvpago)
{
	int i,cantm=0,cants=0,cante=0;
	
	for(i=0;i<5;i++)
	{
		if(*fvtm=='m'){cantm++;}
		if(*fvpago=='s'){cants++;}
		else{cante++;}
		fvtm++;
		fvpago++;
	}
	
	system("cls");
	printf("Informes 1.\n");
	printf("***********\n");
	printf("Cantidad peajes del tipo MOTO: %i\n",cantm);
	printf("Cantidad de Peajes que pagaron con la Sube: %i\n",cants);
	printf("Cantidad de Peajes que pagaron con efectivo: %i",cante);
	getch();
    system("cls");
}
/////////////////////////////////////////////////////////////////////////////////
void cargar_vectores(int *fvcod_emp, int *fvturno, char *fvtm, char *fvpago)
{
		FILE *archivo;
	
	
	archivo=fopen("peajes.txt","r");
	if(archivo==NULL)
     {
          printf("Apertura de Archivo erronea");
     }
     else
         {
         	 while (!feof(archivo))
         	 {
			    fscanf(archivo,"%i\t%c\t%i\t%c\n",fvcod_emp,fvtm,fvturno,fvpago);
                printf("%i\t%c\t%i\t%c\n",*fvcod_emp,*fvtm,*fvturno,*fvpago);
                fvcod_emp++;
				fvtm++;
				fvturno++;
				fvpago++;
             }
         }
     fclose(archivo);
     getch();
     system("cls");
}
/////////////////////////////////////////////////////////////////////////////////
void ingresar_cobro()
{
	FILE *archivo;
	int cod_emp, turno,total,ban;
	char tm,pago;
	
	system("cls");
	printf("Ingresos.\n");
	printf("----------\n");
	printf("Ingresar Codigo de Empleado.\n");
	scanf("%i",&cod_emp);
	printf("\nCodigo tipo de movil:\n(m) Moto 20.\n(a) Auto 40.\n(c) Camión 50.\n");
	fflush(stdin);
	scanf("%c",&tm);
	printf("\nIngresar Turno:\n(1)Pico 15.\n(2)Normal 0.\n");
	scanf("%i",&turno);
	printf("\nIngresar Pago:\n(S)Sube.\n(E)Efectivo.\n");
	fflush(stdin);
	scanf("%c",&pago);
	
	archivo=fopen("peajes.txt","a+");
	if(archivo==NULL)
     {
          printf("Apertura de Archivo erronea");
     }
     else
         {
            fprintf(archivo,"%i\t%c\t%i\t%c\n",cod_emp,tm,turno,pago);
            printf("%i\t%c\t%i\t%c\n",cod_emp,tm,turno,pago);
         }
     if(turno==1){ban=15;}
     else{ban=0;}
     switch(tm)
     {
               case 'm':
                    total=20+ban;
               break;
               case 'a':
                    total=40+ban;
               break;
               case 'c':
                    total=50+ban;
               break;
     }
     
     printf("Debe pagar: %i",total);
     getch();
     fclose(archivo);
     system("cls");
}
/////////////////////////////////////////////////////////////////////////////////
int menu()
{
	int resp;
	
	printf("Aplicacion PEAJES\n");
	printf("*******************\n\n");
	printf("(1)Ingreso Cobro.\n");
	printf("(2)Cargar Vectores.\n");
	printf("(3)Informes 1.\n");
	printf("(4)Informes 2.\n");
	printf("(5)Salir.\n");
	scanf("%i",&resp);
	return resp;
}
