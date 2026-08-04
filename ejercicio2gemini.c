/*Escribe un programa en C que determine la multa de un conductor según su velocidad (en km/h).

📋 Reglas:
Hasta 60.0 km/h: "Velocidad permitida. ¡Buen trabajo!" (Multa = $0.00)

Entre 60.1 km/h y 80.0 km/h: "Exceso leve de velocidad." (Multa = $50.50)

Más de 80.0 km/h: "Exceso grave de velocidad." (Multa = $120.00)*/


#include <stdio.h>

int main(){

float velocidad, velocidad_max;
float multaleve = 50.50;
float multagrave = 120.00;
printf ("Ingrese la velocidad maxima del vehículo en km/h: ");
scanf("%f", &velocidad_max);

if(velocidad_max <= 60.0){
    printf("Velocidad permitida, no hay multa \n");
}
else if (velocidad_max >= 60.01 && velocidad_max <= 80.0){
    printf("Exceso leve de velocidad, la multa es de $%.2f \n", multaleve);
    }
else { 
    printf("Exceso grave de velocidad, la multa es de $%.2f \n", multagrave);
    }
    return 0;
}

