#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

float cobrar(float,int,char);
float vuelto(float ,float );
void muestra(float ,float);
void main()
{
	char salida,categoria[10],horario;
	int dia,cavehp=0,pases=0;
	float base,monto,mvuelto,imp_cli,tot_pases=0;
	do 
	{
		printf("\nIngrese la categoria del vehiculo  ");
		fflush(stdin);
		gets(categoria);
		printf("Ingrese dia de la semana 1-7 ");
		scanf("%d",&dia);
		printf("Ingrese el horario a-Pico b-No pico ");
		fflush(stdin);
		scanf("%c",&horario);
		if(strcmp(categoria,"auto")==0)
			base=10;
		else if(strcmp(categoria,"moto")==0)
			base =5;
		else if(strcmp(categoria,"camioneta")==0)
			base = 15;
		else if(strcmp(categoria,"camion")==0)		
			base=20;
		monto=cobrar(base,dia,horario);
		printf("Ingrese el importe del cliente : ");
		scanf("%f",&imp_cli);
		
		mvuelto=vuelto(monto,imp_cli);
		muestra(monto,mvuelto);
		if(strcmp(categoria,"auto")==0 && horario=='a')
			cavehp++;
		pases++;
		tot_pases=tot_pases+monto;
		printf("\nDesea continuar (s/n)");
		salida=toupper(getche());
		
	}while(salida=='S');
	printf("\nCantidad de autos hora pico = %d",cavehp);
	printf("\nCantidad Total de pases %d con monto %.2f",pases,tot_pases);
}

float cobrar(float bc,int dia,char ho)
{
	float retorno;
	switch (dia)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			if (ho=='a')
			{
				retorno=bc+(bc*.20);
			
			}
			else
			{
				retorno=bc-(bc*.20);
			}
			break;
		case 6:
		case 7:
			 retorno=bc-(bc*.20);
			 break;
			 
	}
	return(retorno);
}

float vuelto(float cobrar,float cliente)
{
	return (cliente-cobrar);
	
}

void muestra(float cobrar,float vuelto)
{
	system("cls");
	printf("El importe a cobrar es %.2f",cobrar);
	printf("\nEl vuelto es %.2f",vuelto);
	
}
