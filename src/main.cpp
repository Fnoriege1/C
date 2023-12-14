#include <stdio.h>

float convertir(float f);

int main()
{
    float temp_f,temp_c;

    printf("Temperature en Fahrenheit: ");
    scanf("%f", &temp_f); //stoke dans la variable temp_f la valeur envoye au programme.
    temp_c = convertir(temp_f);
    printf("%.1fF vaut %.1fC\n", temp_f, temp_c);
    return 0;
}

float convertir(float f)
{
    return (f-32)/1.8;
}