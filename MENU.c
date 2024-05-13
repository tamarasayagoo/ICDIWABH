#include <stdio.h>

int main() {
    int opcion;

    do {
        // Mostrar el men�
        printf("Menu:\n");
        printf("1. Opcion 1\n");
        printf("2. Opcion 2\n");
        printf("3. Opcion 3\n");
        printf("4. Salir\n");
        printf("Ingrese su opci�n: ");
        
        // Leer la opci�n del usuario
        scanf("%d", &opcion);
        
        // Realizar acciones seg�n la opci�n seleccionada
        switch(opcion) {
            case 1:
                printf("Ha seleccionado la Opcion 1.\n");
                break;
            case 2:
                printf("Ha seleccionado la Opcion 2.\n");
                break;
            case 3:
                printf("Ha seleccionado la Opcion 3.\n");
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opci�n inv�lida. Por favor, seleccione una opci�n v�lida.\n");
        }
        
        // Agregar una l�nea en blanco para separar cada iteraci�n del men�
        printf("\n");
        
    } while (opcion != 4);

    return 0;
}
