#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
float montoviatico(float,float,float);
void mostrar(int);
int main()
{
	int codleg, cont_emp=0;
	char catemp,rta[3];
	float kmr, peaje, comidas, anticipo,valorkmr,monto,mvma;
	do
	{
		printf("Ingrese codigo de legajo: ");
		fflush(stdin);
		scanf("%i",&codleg);
		printf("\nIngrese categoria del empleado 'v'=vendedor,'j'=jefe comercial,'g'=gerente de producto: ");
		fflush(stdin);
		scanf("%c",&catemp);
		if(catemp=='v'){
			printf("\nIngrese anticipo: ");
			fflush(stdin);
			scanf("%f",&anticipo);}
		printf("\nIngrese kilometros recorridos: ");
		fflush(stdin);
		scanf("%f",&kmr);
		if(kmr==2000){
			valorkmr=kmr*10;
		}else if(kmr>2000){
			valorkmr=kmr*5;
		}
		if(catemp=='v' && kmr>2000){
			cont_emp++;
		}
		printf("\nIngrese gastos de peaje: ");
		fflush(stdin);
		scanf("%f",&peaje);
		printf("\nIngrese gastos de comidas: ");
		fflush(stdin);
		scanf("%f",&comidas);
		monto=montoviatico(valorkmr,peaje,comidas);
		mvma=monto-anticipo;
		if(mvma>0){
			printf("\nImporte a pagar por la empresa %.2f",mvma);
		}else{
			printf("\nImporte a devolver por el empleado %.2f",mvma);
		}
		printf("\n¿Desea seguir registrando empleados? (si/no): ");
		fflush(stdin);
		scanf("%s",rta);
	}while(strcmp(rta,"si")==0);
	mostrar(cont_emp);
	return 0;
}



float montoviatico(float km_valorizados,float gastos_peaje,float gastos_comidas)
{
	float monto;
	monto=km_valorizados+gastos_peaje+gastos_comidas;
	return monto;
}

void mostrar(int empleados)
{
	printf("\nCantidad de empleados que recorrieron mas de 2000km: %d ",empleados);
}


