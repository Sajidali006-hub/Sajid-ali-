#include<stdio.h>
#include<conio.h> 
int main() 
{ 
   
    float grossSalary, allowances, deductions, netSalary;

    // Input gross salary
    printf("Enter Gross Salary: ");
    scanf("%f", &grossSalary);

    // Calculate allowances (10% of gross)
    allowances = 0.10 * grossSalary;

    // Calculate deductions (3% of gross)
    deductions = 0.03 * grossSalary;

    // Calculate net salary
    netSalary = grossSalary + allowances - deductions;

    // Output result
    printf("Net Salary = %.2f\n", netSalary);
    getch() ;
    return 0;
}

    


    



    
    
   
   
 
 
 
 
 
 