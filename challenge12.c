#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ()
{
   int ax,ay,bx,by,a,b ;
   float dist1 , dist2 , sidt3 ;
   
   
   printf (" entre la premier distance :");
      scanf ("%d %d",&ax,&ay);
      
     printf (" entre la deuxieme distance :");
      scanf ("%d %d",&bx,&by);
    
     printf (" entre la  distance de point  :");
      scanf ("%d %d",&a,&b);
    
     dist1 = sqrt(pow ((bx-ax),2)+pow((ay-by),2) );
      dist2 = sqrt(pow ((bx-a),2)+pow((by-b),2) );
       dist3 = sqrt(pow ((ax-a),2)+pow((ay-b),2) );
     
    if ( dist1== dist2+dist3)
    	printf (" le point se trouve sur le segment ");
    	
	else 
	printf(" le point ne se trouve pas sur le sugment ");
        
      

     	 	return 0;
}

