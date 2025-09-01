#include<stdio.h>
#include<conio.h> 
int main() 
{
  int bytes, megabytes, kilobytes,gigabytes;
  /* convert bytes in to kb, mb, gb*/
  clrscr() ;
  printf("enter value of bytes") ;
  scanf ("%d", &bytes) ;
  kilobytes= 1024*bytes;
  printf (" %d=%d*1024", kilobytes, bytes) ;
  megabytes=1024*1024*bytes;
  printf ("%d=%d*1024*1024", megabytes, bytes) ;
  gigabytes=1024*1024*1024*bytes;
  printf ("%d=%d*1024*1024*1024", gigabytes, bytes) ;
  
  
  
 getch() ;
 return 0;
 }
 
    
    
   
   
 
 
 
 
 
 