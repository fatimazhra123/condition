#include <stdio.h>
#include <stdlib.h>

int main ()
{

   
 
 int nomber1 ;
 int nomber2 = 2 ;

 printf ("entre  nomber1 ",nomber1 ) ;
     scanf ( "%d" , &nomber1 );
     printf ("entre  nomber2 ",nomber2 ) ;
     scanf ( "%d" , &nomber2 );
     
     
     if (( nomber1 != nomber2)|| (nomber1<nomber2)) {
     	
     	
          printf (" les deux variables ne sont pas identique ou la première valeur est inférieure à la deuxième.") ;
	
     	
	 }else {
	 	 printf ("error .") ;
	
	 }
	    
     
     
     
    
       
       
     
     
	 	return 0;
}
