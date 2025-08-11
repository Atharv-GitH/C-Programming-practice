
# include <stdio.h>

void main (){

   int x=0;
   int y=5;
   int ansxy;

   ansxy = x++ || ++y;

           printf ("%d\n",ansxy);
           printf ("%d\n",x);
           printf ("%d\n",y);

   ansxy = x++ && y++;

           printf ("%d\n",ansxy);
           printf ("%d\n",x);
           printf ("%d\n",y);


	   ansxy = x++ || --x;

           printf ("%d\n",ansxy);
           printf ("%d\n",x);
           printf ("%d\n",y);

 ansxy = x && --y;

           printf ("%d\n",ansxy);
           printf ("%d\n",x);
           printf ("%d\n",y);

}
