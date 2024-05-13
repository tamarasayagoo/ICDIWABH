#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Función para obtener el código de estación
int obtenerCodigoEstacion() {
    int codigo;
    
    // Mostrar el menú de estaciones
    printf("Seleccione la estacion de la lista:\n");
    printf("1. Moreno\n");
    printf("2. Paso del Rey\n");
    printf("3. Merlo\n");
    printf("4. Padua\n");
    printf("5. Ituzaingo\n");
    printf("6. Castelar\n");
    printf("7. Moron\n");
    printf("8. Haedo\n");
    printf("9. Ramos Mejia\n");
    printf("10. Ciudadela\n");
    printf("11. Liniers\n");
    printf("12. Villa Luro\n");
    printf("13. Floresta\n");
    printf("14. Flores\n");
    printf("15. Caballito\n");
    printf("16. Once\n");
    
    // Leer el código de estación seleccionado por el pasajero
    printf("Ingrese el codigo de la estacion: ");
    scanf("%d", &codigo);
    
    return codigo;
}

// Función para calcular el importe del viaje
int calcularImporte(int codigoEntrada, int codigoSalida) {
    return (codigoSalida - codigoEntrada) * 2;
}

// Función para mostrar los datos del viaje
void mostrarDatosViaje(int identificacion, int importe, int numeroViaje) {
    printf("Viaje %d:\n", numeroViaje);
    printf("Identificacion del pasajero: %d\n", identificacion);
    printf("Importe a cobrar: $%d\n", importe);
}

int main() {
    int identificacion, edad, codigoEntrada, codigoSalida, importe, numeroViaje = 0;
    int cantidadPasajeros = 0, importeTotal = 0, importeMayor = 0;
    
    do {
        // Solicitar la edad del pasajero
        printf("Ingrese la edad del pasajero: ");
        scanf("%d", &edad);
        
        // Si la edad es menor a 5 años, no se cobra pasaje
        if (edad < 5) {
            printf("Pasajero exento de pago.\n");
            continue; // Pasar al próximo pasajero
        }
        
        // Solicitar identificación y password
        printf("Ingrese su identificacion (numerica): ");
        scanf("%d", &identificacion);
        
        char password[20]; // Variable para almacenar el password alfanumérico
        printf("Ingrese su password (alfanumerico): ");
        scanf("%s", password);
        
        // Obtener el código de estación de entrada
        codigoEntrada = obtenerCodigoEstacion();
        
        // Solicitar nuevamente identificación y password
        printf("Ingrese nuevamente su identificacion (numerica): ");
        scanf("%d", &identificacion);
        
        char password2[20]; // Variable para almacenar el password alfanumérico
        printf("Ingrese nuevamente su password (alfanumerico): ");
        scanf("%s", password2);
        
        // Obtener el código de estación de salida
        codigoSalida = obtenerCodigoEstacion();
        
        // Calcular el importe del viaje
        importe = calcularImporte(codigoEntrada, codigoSalida);
        
        // Mostrar los datos del viaje
        mostrarDatosViaje(identificacion, importe, ++numeroViaje);
        
        // Actualizar estadísticas
        cantidadPasajeros++;
        importeTotal += importe;
        if (importe > importeMayor) {
            importeMayor = importe;
        }
        
        printf("\n");
    } while (true);

    return 0;
}
