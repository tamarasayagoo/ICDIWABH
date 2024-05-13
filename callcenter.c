#include <stdio.h>
#include <stdbool.h>

// Función para calcular el valor del pedido
float calcularValorPedido(int tipoPedido, float precioBase, int cantidad) {
    float valorPedido = 0;
    if (tipoPedido == 1 || tipoPedido == 2) { // Pedido de producto (bolsa de 2Kg o 10Kg)
        valorPedido = precioBase * cantidad;
        // Aplicar descuentos según la cantidad de kilos
        if (cantidad <= 100) {
            valorPedido *= 0.9; // Descuento del 10%
        } else {
            valorPedido *= 0.75; // Descuento del 25%
        }
    } else if (tipoPedido == 3) { // Pedido de service
        valorPedido = precioBase;
    }
    return valorPedido;
}

// Función para mostrar los datos del pedido
void mostrarDatosPedido(int numeroPedido, float valorPedido) {
    printf("Pedido Numero: %d\n", numeroPedido);
    printf("Valor del Pedido: $%.2f\n", valorPedido);
}

int main() {
    int numeroPedido = 0;
    float valorTotalPedidos = 0;
    int cantidadServiciosSabado = 0;
    
    do {
        char codigoCliente[9];
        int tipoPedido;
        int cantidad;
        int diaEntrega;
        
        // Solicitar datos del pedido
        printf("Ingrese Código de Cliente (alfanumérico de 8 posiciones): ");
        scanf("%s", codigoCliente);
        
        printf("Ingrese Código de producto (1 para bolsa de 2Kg, 2 para bolsa de 10Kg, 3 para pedido de service): ");
        scanf("%d", &tipoPedido);
        
        printf("Ingrese Cantidad de producto en bolsas (Ingrese solo para pedido de producto): ");
        if (tipoPedido == 1 || tipoPedido == 2) {
            scanf("%d", &cantidad);
        } else {
            cantidad = 1; // Se considera cantidad siempre = 1 para pedido de service
        }
        
        printf("Ingrese Día de entrega/visita (1 a 6, siendo 1=Lunes): ");
        scanf("%d", &diaEntrega);
        
        // Calcular valor del pedido
        float valorPedido = calcularValorPedido(tipoPedido, (tipoPedido == 3) ? 500 : 50, cantidad);
        
        // Mostrar datos del pedido si hay stock suficiente
        if ((tipoPedido == 1 || tipoPedido == 2) && cantidad > 0) {
            if (diaEntrega == 6) { // Si es un servicio solicitado para sábado
                cantidadServiciosSabado++;
            }
            valorTotalPedidos += valorPedido;
            mostrarDatosPedido(++numeroPedido, valorPedido);
        } else {
            printf("No se registró pedido\n");
        }
        
        // Preguntar si desea cerrar el turno
        char respuesta[3];
        printf("Desea cerrar el turno? (SI/NO): ");
        scanf("%s", respuesta);
        
        if (strcmp(respuesta, "SI") == 0) {
            break;
        }
        
        printf("\n");
    } while (true);

    printf("\nValor Total de los Pedidos: $%.2f\n", valorTotalPedidos);
    printf("Cantidad de Pedidos de Service solicitados para un sábado: %d\n", cantidadServiciosSabado);

    return 0;
}
