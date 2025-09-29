/*WAP a C program to Convert temperature from Celsius to Fahrenheit using the 
formula: F = (C * 9/5) + 32.*/

#include <stdio.h>

int main()
{
    float cel,far;
    printf("Enter temprature in celsius:");
    scanf("%f",&cel);                          //Enter temprature in celsius

    far=(cel*(9/5))+32;                           //calculating farenhite
    printf("Temprature in Farenhite is:%f",far);


    return 0;
}