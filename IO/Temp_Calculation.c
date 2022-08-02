
#include <stdio.h>



int main(void)

{

    printf("Please enter your tempature in F. ");

    float temperatureF;
    scanf("%f", &temperatureF);

    float temperatureC = (temperatureF - 32.0) * 5.0 / 9.0;

    printf("The temperature in Celsius is %f C. \n", temperatureC);

    return 0;



}