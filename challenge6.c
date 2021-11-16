#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
  char chaine[40];
  int i;
  int k=0;
  int lg=strlen(chaine);
  
  
   printf ("entre une chaine de caracter : ");
   gets(chaine);
   
     for (i=0; i < lg/2 ; i++)
	   {
     	
     	  if ( chaine [i] != chaine[ lg-i-1] )
		   {
     	  
     	  	k=1;
     	  	break;
     	  
		   }
	   }
	
		        if (k==0)
		        	
		        	printf(" palindrom ");
		        	
				else 
					printf (" n est pas palindrom");
				
		   
		   
	 
     
      

     	 	return 0;
}

