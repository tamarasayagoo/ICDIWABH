/*Ejercicio Control de Peajes*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

float cobrar(float vb,int dia,char h);
float fvuelto(float importe, float entrega);
void imprime(float importe, float vuelto);

int main()
{
	
float base, dinero_entregado, importe_a_cobrar, vuelto, acumrec;
char cat[9], horario, seguir[3];  // categoria es cadena
int dia, contautos, conttotal;
contautos=0;
conttotal=0;
acumrec=0;
	
do{
	fflush(stdin);
	printf("Ingrese la categoria del vehiculo (moto/auto/camioneta/camion): ");
	scanf("%s",cat);
	fflush(stdin);
	printf("Ingrese dia de la semana (1=lunes, 2=martes, 3=miercoles, 4=jueves, 5=viernes, 6=sabado, 7=domingo): ");
	scanf("%d", &dia);
	fflush(stdin);
	printf("Ingrese franja horaria (a=hora pico, b=hora no pico): ");
	scanf("%c", &horario);
		
	if(strcmp(cat,"moto")==0)
       {
	     base=5;
	    }
	else if(strcmp(cat,"auto")==0)
	       { 
		    	base=10;
	    	    if(horario=='a')
			    	{
				     contautos++;
				    }
	        }
		 else if(strcmp(cat,"camioneta")==0)
			{
				base=15;
			} else 
			    {
				    base=20;
				}
		
		importe_a_cobrar=cobrar(base,dia,horario);
		fflush(stdin);
		printf("Ingrese el importe entregado por el conductor: ");
		scanf("%f", &dinero_entregado);
		
		vuelto=fvuelto(importe_a_cobrar,dinero_entregado);
		
		imprime(importe_a_cobrar,vuelto);
		conttotal++;
		acumrec=acumrec+importe_a_cobrar;
		
		fflush(stdin);
		printf("\nDesea seguir vendiendo? (responda con si/no):");
		scanf("%s", seguir);
		
					   		
	}
	while(strcmp(seguir,"si")==0);
	
	printf("\n\nCantidad de ventas de categoria auto en horario pico: %d\n", contautos);
	printf("Total de pases vendidos: %d\nTotal recaudado: $ %.2f", conttotal, acumrec);
}

float cobrar(float vb,int dia,char h){
	
	int cobrar;
	
	if(dia>=1 && dia <=5 && h=='a')
	  {cobrar=vb*1.2;}
	else
	  {cobrar=vb*0.8;}
	
	return cobrar;
}

float fvuelto(float importe,float entrega){
	
	int vuelto;
	vuelto=entrega-importe;
	
	return vuelto;
}

void imprime(float importe, float vuelto){
	
	system("cls");		
	printf("Importe: $ %.2f\nVuelto:$ %.2f\n", importe,vuelto);
}
		
		
