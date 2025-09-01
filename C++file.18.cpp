#include<stdio.h>
#include<conio.h> 
int main() 
{ 

    float length, breadth, area, perimeter;

    // Input length and breadth from user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("Area of Rectangle = %.2f\n", area);
    printf("Perimeter of Rectangle = %.2f\n", perimeter);
    getch() ;

    return 0;
}

    



    
    
   
   
 
 
 
 
 
 