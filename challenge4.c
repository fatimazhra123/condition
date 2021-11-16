#include <stdio.h>
#include <stdlib.h>


int main ()
{

    
 int nomber1 ;
 int nomber2  ;
 int somme ;
 int triple ;
 

     printf ("entre  nomber1 ",nomber1 ) ;
     scanf ( "%d" , &nomber1 );
     printf ("entre  nomber2 ",nomber2 ) ;
     scanf ( "%d" , &nomber2 );
     
     
                 somme = nomber1+nomber2 ;
                 
     
             if ( nomber1 == nomber2) {
     	
     	         triple = somme * 3 ;
                 printf (" le triple de la somme  est : %d " , triple );
                 
     	
	        }else {
	         	 printf ("les deux valeures ne sont pas  identique .") ;
	
	 }
	    




     	 	return 0;
}
