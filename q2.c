#include<stdio.h>

float celcius_to_farenheit(int celcius){
    return printf("The %d is = %f ",celcius,((celcius * 1.8)+32));
}

int main()

{
    int celcius;
    printf("Enter the temperature in celcius : \n");
    scanf("%d",&celcius);
    celcius_to_farenheit(celcius);
    return 0;
}