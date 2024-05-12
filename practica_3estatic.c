#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int devuelvoticket();
void devuelvoticket_importe(int ,int );
void nohaylugar();
float fimp (char[]);
main()
{
      int diafestival;
      char ubicacion[4];
      /*float precio;*/
      int nroticket;
      char continuar;
      int contcam1=0,contcam2=0,contcam3=0,contpla1=0,contpla2=0,contpla3=0,contpac1=0,contpac2=0,contpac3=0;
      float sumcam1=0,sumcam2=0,sumcam3=0,sumpla1=0,sumpla2=0,sumpla3=0,sumpac1=0,sumpac2=0,sumpac3=0, imp;
     
      printf("\t\t\n\n\nDesea vender tickets para el festival (s/n):  ");
      scanf("%c",&continuar);
      while (continuar == 's' || continuar=='S'){
            printf("\n\n\t\tIngrese ubicación deseada(cam/pla/pac)  ");
            fflush(stdin);
            gets(ubicacion);
            printf("\n\n\t\tIngrese dia deseado:  ");
            fflush(stdin);
            scanf("%d",&diafestival);
            switch(diafestival){
                  case 1:
                       if(!(strcmp(ubicacion,"cam"))){
                            if(contcam1<3500){
                    			contcam1++;
                                sumcam1+=60;
                                imp = fimp(ubicacion);
                                printf( "Imp %f", imp);
                                system("pause");
                                devuelvoticket_importe(devuelvoticket(),60);                                            
                                } 
                                else {
                                    nohaylugar();}
                                                     }
                       if(!(strcmp(ubicacion,"pla"))){
                            if(contpla1<1000){
                                contpla1++;
                                sumpla1+=80;
                                printf( "Imp %f", fimp(ubicacion));
                                system("pause");
                                devuelvoticket_importe(devuelvoticket(),80);                                            
                                } 
                                else {
                                    nohaylugar();}
                                                     }
                       if(!(strcmp(ubicacion,"pac"))){
                            if(contpac1<500){
                                contpac1++;
                                sumpac1+=120;
                                printf( "Imp %f", fimp(ubicacion));
                                system("pause");
                                devuelvoticket_importe(devuelvoticket(),120);                                            
                                            } 
                            else {
                                	nohaylugar();}
                                                     }
                       
                       break;
                  case 2:
                       if(!(strcmp(ubicacion,"cam"))){
                            if(contcam2<3500){
                                contcam2++;
                                sumcam2+=60;
                                printf( "Imp %f", fimp(ubicacion));
                            	system("pause");
                                devuelvoticket_importe(devuelvoticket(),60);                                            
                                            } 
                            else {
									nohaylugar();}
                                                     }
                       if(!(strcmp(ubicacion,"pla"))){
                            if(contpla2<1000){
                                contpla2++;
                                sumpla2+=80;
                                printf( "Imp %f", fimp(ubicacion));
                                system("pause");
                                devuelvoticket_importe(devuelvoticket(),80);                                            
                                            } 
                    		else {
                                    nohaylugar();}
                                                     }
                       if(!(strcmp(ubicacion,"pac"))){
                            if(contpac2<500){
                                    contpac2++;
                                    sumpac2+=120;
                                    printf( "Imp %f", fimp(ubicacion));
                                    system("pause");
                                    devuelvoticket_importe(devuelvoticket(),120);                                            
                                            } 
                            else {
                                    nohaylugar();}
                                                     }
                       
                       break;
                  case 3:
                       if(!(strcmp(ubicacion,"cam"))){
                            if(contcam3<3500){
                                	contcam3++;
                                    sumcam3+=60;
                                    printf( "Imp %f", fimp(ubicacion));
                                    system("pause");
                                    devuelvoticket_importe(devuelvoticket(),60);                                            
                                            } 
                            else {
                                    nohaylugar();}
                                                     }
                       if(!(strcmp(ubicacion,"pla"))){
                            if(contpla3<1000){
                                    contpla3++;
                                    sumpla3+=80;
                                    printf( "Imp %f", fimp(ubicacion));
                                    system("pause");
                                    devuelvoticket_importe(devuelvoticket(),80);                                            
                                            } 
                            else {
                                    nohaylugar();}
                                                     }
                       if(!(strcmp(ubicacion,"pac"))){
                            if(contpac3<500){
                                    contpac3++;
                                    sumpac3+=120;
                                    printf( "Imp %f", fimp(ubicacion));
                                    system("pause");
                                    devuelvoticket_importe(devuelvoticket(),120);                                            
                                            } 
                        else {
                                    nohaylugar();}
                                                     }
                       
                       break;           
                   
                   }     
            printf("\n\n\n\t\tDesea continuar vendiendo tickets para el festival (s/n):  ");
            fflush(stdin);
            scanf("%c",&continuar);
            }
      
      system("cls");
      printf("\n\n\n\t\tLa cantidad de entradas vendidas campo del dia 3 es: %d",contcam3);
      printf("\n\n\n\t\tLa cantidad de entradas totales vendidas es %d y el total recaudado es %.2f",contcam1+contcam2+contcam3+contpla1+contpla2+contpla3+contpac1+contpac2+contpac3,sumcam1+sumcam2+sumcam3+sumpla1+sumpla2+sumpla3+sumpac1+sumpac2+sumpac3);
      system("pause");
      }


int devuelvoticket(){
    static int ticket=0;
    ticket++;
    return ticket;
    }
float fimp (char ub [4] ){
    float impub;
      if(!(strcmp(ub,"pac"))) impub = 100 ;
      else impub = 500;
    return impub;
    }
void devuelvoticket_importe(int ticket,int precio){
     system("cls");
     printf("\n\n\t\tEl nro de ticket es %d y el precio a abonar es %d\n\n\n",ticket,precio);
     system("pause");
     system("cls");
          }
void nohaylugar(){
     system("cls");
     printf("\n\n\t\tNo hay mas lugares para ese dia y sector\n\n\n");
     system("pause");
     system("cls"); 
     }
