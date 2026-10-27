#include <stdio.h>

int main()
{

    int edad = 0;
    int genero = 0;
    int destino = 0;
    int puntuacion = 0;
    int destinoEsp = 0;
    int destinoBra = 0;
    int destinoJap = 0;
    float pjeBrasil = 0;
    float pjeEspaña = 0;
    float pjeJapon = 0;
    float puntuacionPromedioBra = 0;
    float puntuacionPromedioEsp = 0;
    float puntuacionPromedioJap = 0;
    int sumaBra = 0;
    int sumaEsp = 0;
    int sumaJap = 0;
    float promedioMaximo = 0;
    float promedioEdadJapon = 0;

    for (int i = 0; i < 10; i++)
    {

        do
        {

            printf("Ingresar edad entre 18 y 100: ");
            scanf("%d", &edad);
        } while (edad < 18 || edad > 100);

        do
        {

            printf("Ingresar genero (1 = F, 2 = M): ");
            scanf("%d", &genero);
        } while (genero != 1 && genero != 2);

        do
        {

            printf("Ingresar destino (1 = BRA, 2 = ESP, 3 = JAP): ");
            scanf("%d", &destino);
        } while (destino != 1 || destino != 2 || destino != 3);

        do
        {
            printf("Ingresar puntuacion del destino (1-10): ");
        } while (puntuacion < 1 || puntuacion > 10);

        if (destino == 1)
        {
            destinoBra++;
            sumaBra = sumaBra + puntuacion;
        }

        if (destino == 2)
        {
            destinoEsp++;
            sumaEsp = sumaEsp + puntuacion;
        }

        if (destino == 3)
        {
            destinoJap++;
            sumaJap = sumaJap + puntuacion;
            promedioEdadJapon += edad;
        }
    }

    printf("Personas que fueron a brasil: %d\n", destinoBra);
    printf("Personas que fueron a españa: %d\n", destinoEsp);
    printf("Personas que fueron a japon: %d\n", destinoJap);

    pjeBrasil = ((float)destinoBra * 100) / 10;
    pjeEspaña = ((float)destinoEsp * 100) / 10;
    pjeJapon = ((float)destinoJap * 100) / 10;

    printf("Porcentaje que fueron a brasil: %.2f\n", pjeBrasil);
    printf("Porcentaje que fueron a brasil: %.2f\n", pjeEspaña);
    printf("Porcentaje que fueron a brasil: %.2f\n", pjeJapon);

    if (destinoBra >= 1)
    {
        puntuacionPromedioBra = (float)sumaBra / destinoBra;
    }
    if (destinoEsp >= 1)
    {
        puntuacionPromedioEsp = (float)sumaEsp / destinoEsp;
    }
    if (destinoJap >= 1)
    {
        puntuacionPromedioJap = (float)sumaJap / destinoJap;
    }

    printf("Puntuacion promedio Brasil: %.2f\n", puntuacionPromedioBra);
    printf("Puntuacion promedio España: %.2f\n", puntuacionPromedioEsp);
    printf("Puntuacion promedio Japon: %.2f\n", puntuacionPromedioJap);

     promedioMaximo = puntuacionPromedioBra;

    if (puntuacionPromedioEsp > promedioMaximo)
    {
        promedioMaximo = puntuacionPromedioEsp;
    }

    if (puntuacionPromedioJap > promedioMaximo)
    {
        promedioMaximo = puntuacionPromedioJap;
    }

    if (puntuacionPromedioBra == promedioMaximo)
    {
        printf("Brasil tiene el mayor promedio\n");
    }

    if (puntuacionPromedioEsp == promedioMaximo)
    {
        printf("España tiene el mayor promedio\n");
    }

    if (puntuacionPromedioJap == promedioMaximo)
    {
        printf("Japon tiene el mayor promedio\n");
    }

    return 0;
}
