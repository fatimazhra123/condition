#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{

       int a , b , c  , dlt;
       float  X1 , X2 , X3;
        printf(" entre     a \n " );
    scanf("%d",&a); 
    printf(" entre     b \n " );
    scanf("%d",&b); 
    printf(" entre     c \n " );
    scanf("%d",&c); 
        
          dlt= pow(b,2) - 4*a*c;

          if ( dlt > 0){
              X1= ( -b + sqrt(dlt)) / 2*a ;
              X2= ( b - sqrt(dlt)) / 2*a ;
              printf(" la soulistion de la fonction  %dx² + %dx + %d  ext : x1 =  et x2 = \n ", a ,b , c , X1,X2) ;
          }else if ( dlt == 0) {
               X3= -b  / 2*a ;
               printf(" la soulistion de la fonction  %dx² + %dx + %d  ext : x3 = %f \n ", a ,b , c , X3) ;
          }else {
               printf(" equation  n admit aucune  solution  \n ") ;

          }




     	 	return 0;
}
