/*🏋️ El Desafío: Calculadora de Descuentos
Escribe un programa en C que pida al usuario el precio original de un producto (un número decimal) y aplique un descuento dependiendo del monto:

Si el precio es mayor a $100.00, se le aplica un 10% de descuento.

Si el precio es igual o menor a $100.00, no tiene descuento.

Al final, el programa debe mostrar el descuento aplicado y el precio final a pagar.*/

#include <stdio.h>
int main() {

float precio, descuento, precio_final;

printf("Ingrese el precio original del producto: ");
scanf("%f", &precio);

if (precio > 100.00) {
    descuento = precio * 0.10;
    precio_final = precio - descuento;
} else {
    descuento = 0;
    precio_final = precio;
}

printf("Descuento aplicado: %.2f\n", descuento);
printf("Precio final a pagar: %.2f\n", precio_final);

return 0;

}