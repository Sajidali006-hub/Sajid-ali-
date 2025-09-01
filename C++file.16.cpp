#include<stdio.h>
#include<conio.h> 
int main() 
 { 
    float P, R, N, I;
    printf("Enter Principal: P");
    scanf("%f", &P);
    printf("Enter Rate of Interest:R ");
    scanf("%f", &R);
    printf("Enter a time in years: N");
    scanf("%f", &N);

    I = (P * R * N) / 100;

    printf("Interest is: %.2f\n", I);
    return 0;
}



    
    
   
   
 
 
 
 
 
 