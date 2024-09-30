#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>

float importe_cobrar(int,int,char);
float vuelto(float,int);
void mostrar(float,float);

void main()
{
	char vehiculo[10],rta,horario;
	int dia,importe,valorb,cont_autos=0,pases=0;
	float a_cobrar,vuelto0,total_recaudado=0;
	
	printf("Desea ingresar vehiculos? s/n:" );
	fflush(stdin);
	scanf("%c",&rta);
	while(rta=='s')
	{
		printf("\nIngrese vehiculo: (moto/auto/camioneta/camion) ");
		fflush(stdin);
		scanf("%s",vehiculo);
		printf("\nIngrese dia: (1=lunes, 2=martes... )");
		scanf("%i",&dia);
		printf("\nIngrese horario: a=pico, b=no pico ");
		fflush(stdin);
		scanf("%c",&horario);
		printf("\nIngrese el dinero entregado por el conductor: ");
		scanf("%i",&importe);
		pases++;
		if(strcmp(vehiculo,"moto")==0)
		{valorb=5;}
		else if(strcmp(vehiculo,"auto")==0)
		{valorb=10;}
		else if(strcmp(vehiculo,"camioneta")==0)
		{valorb=15;}
		else if(strcmp(vehiculo,"camion")==0)
		{valorb=20;}
		
		a_cobrar=importe_cobrar(valorb,dia,horario);
		vuelto0=vuelto(a_cobrar,importe);
		mostrar(a_cobrar,vuelto0);
		
		if(strcmp(vehiculo,"auto")==0 && horario=='a')
		{cont_autos++;}
		total_recaudado=total_recaudado+a_cobrar;
		printf("Desea continuar vendiendo?");
		fflush(stdin);
		scanf("%c",&rta);
	} printf("\nCantidad de ventas de categoria autos en horario pico: %i",cont_autos);
	printf("\nTotal de pases vendidos: %i",pases);
	printf("\nTotal recaudado: %.2f",total_recaudado);
}


float importe_cobrar(int base,int dia,char hor)
{
	
	if(base<=20 && dia <=5 && hor=='a')
	{
		base=base+(base*0.2);
	}else {
		base=base-(base*0.2);
	}
	return(base);
}

float vuelto(float acobrar,int imp_entregado)
{
	float vuelto1;
	if(imp_entregado > acobrar)
	{
		vuelto1=imp_entregado-acobrar;
	}
	return(vuelto1);
}

void mostrar(float a, float b)
{
	system("cls");
	printf("\nEl importe a cobrar es: %.2f",a);
	printf("\nEl vuelto es: %.2f",b);
}
