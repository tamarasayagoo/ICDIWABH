#include <stdio.h>

int main() {
    int opcion;

    do {
        // Mostrar el menú
        printf("Menu:\n");
        printf("1. Opcion 1\n");
        printf("2. Opcion 2\n");
        printf("3. Opcion 3\n");
        printf("4. Salir\n");
        printf("Ingrese su opción: ");
        
        // Leer la opción del usuario
        scanf("%d", &opcion);
        
        // Realizar acciones según la opción seleccionada
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
                printf("Opción inválida. Por favor, seleccione una opción válida.\n");
        }
        
        // Agregar una línea en blanco para separar cada iteración del menú
        printf("\n");
        
    } while (opcion != 4);

    return 0;
}
