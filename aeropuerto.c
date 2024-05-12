#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
int tiempototal(int,int,int);
void mostrar(int,int,int,int);
main()
{
	int t_estimado,nro,t_vuelo,cant_esc,total;
	char destino,escalas,rta[3];
	int cont_vnac=0,cont_vmerc=0,cont_int=0,m_tiempo=0,nro_se=0;
	do 
	{
		printf("Ingrese el tiempo estimado de espera por escala en minutos: ");
		scanf("%i",&t_estimado);
		printf("\nIngrese numero de vuelo: ");
		scanf("%i",&nro);
		printf("\nIngrese destino 'N'= nacional,'M'= internacional mercosur,'I'= internacional: ");
		fflush(stdin);
		scanf("%c",&destino);
		switch(destino){
			case 'N': cont_vnac++;
						break;
			case 'M': cont_vmerc++;
						break;
			case 'I': cont_int++;
						break;
			default: break;
		}
		
		printf("\nIngrese tiempo de vuelo en minutos: ");
		scanf("%i",&t_vuelo);
		printf("\nEl vuelo tiene escalas? S/N : ");
		fflush(stdin);
		scanf("%c",&escalas);
	
		if(escalas=='S'){
			printf("\n\tIngrese cantidad de escalas: ");
			scanf("%i",&cant_esc);
			total=tiempototal(t_vuelo,cant_esc,t_estimado);
			printf("\nTiempo total de vuelo: %i minutos\n",total);
		}else if(escalas=='N'){
		 	cant_esc=0;
			total=t_vuelo;
		 	printf("\nTiempo total de vuelo: %i minutos\n",total);
			if(m_tiempo==0 || t_vuelo<m_tiempo){
				m_tiempo=t_vuelo;
				nro_se=nro;
			}
		}
		printf("\n\t¿Desea seguir ingresando vuelos? SI/NO :");
		fflush(stdin);
		scanf("%s",rta);
		system("pause");
	}while(strcmp(rta,"SI")==0);
	
	mostrar(cont_vnac,cont_vmerc,cont_int,nro_se);
	system("pause");
	return 0;
}

int tiempototal(int tiempovuelo,int c_escalas,int est_escal)
{
	int total;
	if(c_escalas >= 1)
	{
		total=(tiempovuelo+est_escal)*c_escalas;
	}
	return total;
}

void mostrar(int n,int m,int i,int mt)
{
	printf("\nCantidad de vuelos con destino nacional: %i, internacional mercosur: %i, internacional:%i",n,m,i);
	printf("\n Numero de vuelo con menor tiempo de vuelo sin escalas: %i",mt);
}


