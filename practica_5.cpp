#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

float calcular_expensas(char, int, char  );
void mostrar( int  );

int main(){
    int nro, marcauso ;
    int cont_dep=0; 
    char cat, marcacochera, rpta;
    char continuar[3]={"si"};
    float multas, monto;
    
    while (!strcmp("si",continuar)){
    printf("\t\t\nIngrese Número de Departamento: ");
    fflush(stdin);
    scanf("%d",&nro);
    printf("\t\t\nIngrese categoría del departamento: ");
    fflush(stdin);
    scanf("%c",&cat);
    printf("\t\t\nIngrese Marca Uso Profesional 1=Sí, 0=No: ");
    fflush(stdin);
    scanf("%d", &marcauso);
    printf("\t\t\nIngrese Marca si tiene Cochera S/N");
    fflush(stdin);
    scanf("%c",&marcacochera);
    
    printf("\t\t\nTiene Multas S/N ");
    fflush(stdin);
    scanf("%c",&rpta);
      
    if (rpta=='S') {
       printf("\t\t\nIngrese Monto de Multas ");
       fflush(stdin);
       scanf("%f",&multas);}
    else {multas=0;} /* pongo en cero la variable multas para el resto de los casos. */
    
    monto=calcular_expensas(cat, marcauso, marcacochera) + multas;
       
       /* Calculo el monto de expensa y le sumo las multas */
    printf("Monto de Expensa Total a pagar %f\n", monto);                                   
        
       
    if (cat=='d' && marcauso==1) { cont_dep=cont_dep+1;}      
    
       
             
    system("pause");
    system("cls");
    printf("\t\tContinua ingresando datos de departamentos?: ");
    fflush(stdin);
    gets(continuar);
    system("cls");
    }
    
    mostrar(cont_dep);
   
    system("pause");
    }
 
float calcular_expensas( char a, int b, char c)
{
      float resul;   
      /* armo valor base según categoria */
      switch (a) {
             case 'p': resul=4000;
             break;
             case 's': resul=3000;
             break;
             case 'd': resul=2000;
             break;
             case 'm': resul=1000;         
             }
      if (b==1) {resul= resul + 2500;};
      
      if (c=='S') { resul=resul + 1500;}
                       
      return resul;    
}     

void mostrar(int a)
{
   printf("\t\tTotal departamentos de dos ambientes de uso profesional: %d\n", a);
    
}
   
   
