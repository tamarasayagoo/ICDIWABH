#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
float litroscarga(float,char);
float vuelto(float,float); /*solo si es efvo*/
void mostrar(float,float,float,float,float,float);
int main()
{
	char password[20],password2[20],tipo,mediop,rta[3];
	float valor,imprec,tlitd=0,tlitn=0,totefvo=0,totcre=0,totdeb=0,totbv=0,litros,vuelto2;
	do
	{
		printf("\tIngrese su password: ");
		fflush(stdin);
		scanf("%s",password);
		printf("\n\t Ingrese nuevamente su password: ");
		fflush(stdin);
		scanf("%s",password2);
		if(strcmp(password,password2)==0){
		printf("\nIngrese tipo de combustible Nafta='N', Diesel='D': ");
		fflush(stdin);
		scanf("%c",&tipo);
		printf("\nIngrese valor en pesos a cargar: ");
		scanf("%f",&valor);
		printf("\nIngrese medio de pago efectivo=E, credito=T, debito=D, billetera virtual=B: ");
		fflush(stdin);
		scanf("%c",&mediop);
		litros=litroscarga(valor,tipo);
		switch(mediop){
			case 'E': totefvo= totefvo + valor;
						break;
			case 'T': totcre= totcre + valor;
						break;
			case 'D': totdeb= totdeb + valor;
						break;
			case 'B': totbv= totbv + valor;
						break;
			default: break;
		}
		if(mediop=='E'){
			printf("\n\tIngrese importe recibido: ");
			scanf("%f",&imprec);
			vuelto2=vuelto(valor,imprec);
			printf("\n\tSu vuelto es: %.2f",vuelto2);
		}
		if(tipo=='N'){
			tlitn=tlitn+litros;
		}else if(tipo=='D'){
			tlitd=tlitd+litros;
		}
		if(strcmp(password,password2)==0){
			fflush(stdin);
			scanf("%s",password);
		}
		printf("Desea seguir ingresando datos?");
		fflush(stdin);
		scanf("%s",rta);
		system("pause");}
	}while(strcmp(rta,"si")==0);
	mostrar(totefvo,totcre,totdeb,totbv,tlitn,tlitd);
	system("pause");
	return 0;
}

float litroscarga(float importe_cargar,char tipocombustible) /*total de litros*/
{
	float litros;
	if (tipocombustible=='N'){
		litros=importe_cargar/1000;
		printf("\nTotal de litros: %.2f",litros);
	}else{
		litros=importe_cargar/1500;
		printf("\nTotal de litros: %.2f",litros);
	}
	return litros;
}
 float vuelto(float pesoscargar,float importerec)
 {
	float vuelto;
		vuelto=importerec-pesoscargar;
	return vuelto;
 }
 
void mostrar(float a,float b,float c,float d,float e,float f)
{
	printf("Totales: %.2f,%.2f,%.2f,%.2f,%.2f,%.2f,",a,b,c,d,e,f);
}

