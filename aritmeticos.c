#include <stdio.h>

int main()
{
    int edad;
    printf("ingresa tu edad\n");
    scanf("%d", &edad);
    if (edad >= 18)
    {
        printf("sos mayor de edad\n");
    }
    else if (edad == 17)
    {
        printf("sos casi mayor de edad\n");
    }
    else
    {
        printf("sos menor de edad\n");
    }
    return 0;
}