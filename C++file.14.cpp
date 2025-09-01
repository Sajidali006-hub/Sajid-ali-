#include<stdio.h>
#include<conio.h> 
int main() 
{
    float celsius, fahrenheit;

    // Ask the user for Celsius input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (9.0/5.0 * celsius) + 32;

    // Display the result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
    getch() ;
    }
    
    
   
   
 
 
 
 
 
 