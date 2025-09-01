#include<stdio.h>
#include<conio.h> 
int main() 
{ 
    float grossSales, netSales, discount;

    // Input gross sales
    printf("Enter the Gross Sales: ");
    scanf("%f", &grossSales);

    // Calculate 10% discount
    discount = 0.10 * grossSales;

    // Calculate net sales
    netSales = grossSales - discount;
    // Or simply: netSales = 0.9 * grossSales;

    // Output result
    printf("Gross Sales   = %.2f\n", grossSales);
    printf("Discount (10%%) = %.2f\n", discount);
    printf("Net Sales     = %.2f\n", netSales);
    getch() ;
    return 0;
}


    


    



    
    
   
   
 
 
 
 
 
 