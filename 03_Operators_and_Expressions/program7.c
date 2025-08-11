 // Binary operators
  
#include<stdio.h>

void main (){

int x=5;
int y=7;
int ansxy;

ansxy = x || y;

	printf ("%d\n",ansxy);

ansxy = x && y; 

        printf ("%d\n",ansxy); 

   int a = 8;
   int b = 11;
   int ansab;

   ansab = ++a || ++b;

           printf ("%d\n",ansab);       
	   printf ("%d\n",a); 
    	   printf ("%d\n",b);

   ansab = a++ && ++b;

              printf ("%d\n",ansab);
           printf ("%d\n",a);
           printf ("%d\n",b);

	   
}
