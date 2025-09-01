#include<stdio.h>
#include<conio.h>
 int main () 
 { 
    
    float dollars, rupees, pounds;

    // Input amount in dollars
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    // Convert dollars to rupees
    rupees = dollars * 48;

    // Convert rupees to pounds
    pounds = rupees / 70;

    // Output result
    printf("%.2f Dollar(s) = %.2f Pound(s)\n", dollars, pounds);

    return 0;





   
   getch() ;
   
   }
 
 
 
 
 
 