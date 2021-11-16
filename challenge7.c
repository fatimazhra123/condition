
#include <stdio.h>
#include <stdlib.h>


int main ()
{

       int   moyenne ;
       menu:
       printf ("entre la moyenne : \n");
       scanf ("%d" ,&moyenne);
     
     
     
            if ( moyenne < 	10){
            
				printf ("recale");
				
			}else if  ( moyenne  < 12){
            
				printf ("passable");
				
	     	}else if  ( moyenne < 14){
            
				printf ("assez bien ");	

            }else if  ( moyenne < 16){
            
				printf ("bien  ");	
            
             }else if  ( moyenne < 20){
            
				printf ("tres bien   ");	
				
             }
			 else {
            
				printf ("VOUS DOUVEZ ENTRER UN NOMBRE ENTRE 1 ET 20  \n");
				goto menu;	


           }

     	 	return 0;
}




