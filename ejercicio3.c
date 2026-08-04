/*Crea un programa que le pida al usuario su nota final de un examen (un número decimal entre 0.0 y 10.0) y muestre un mensaje según el resultado:

Menor a 4.0: "Reprobado. Tienes que estudiar más."

Entre 4.0 y 6.9: "Aprobado. ¡Buen esfuerzo!"

7.0 o más: "Excelente. ¡Nota sobresaliente!"*/



#include <stdio.h>

int main(){

float nota;

printf ("Que nota te sacaste en el examen?\n");
scanf ("%f", &nota);

if (nota < 4.00){

    printf ("Espantoso, sos un pelotudo\n");
}
else if (nota >= 4.00 && nota < 7.00) {

    printf ("Aprobaste de pedo\n");
}
else {

    printf ("Seguro te macheteaste gil\n");
}

    return 0;
}