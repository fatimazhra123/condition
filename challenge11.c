#include <stdio.h>

int main()
{
    int h1 , h2, m1,m2,s1,s2 ;
    int k=1;
    
    
    
     
    printf("donnez une heur1 ");
    scanf("%d",&h1);
    
    printf("donnez une heur2 ");
    scanf("%d",&h2);
    
    printf("donnez une m1 ");
    scanf("%d",&m1);
    
    printf("donnez une m2 ");
    scanf("%d",&m2);
    
    printf("donnez une second1 ");
    scanf("%d",&s1);
    
    printf("donnez une second2 ");
    scanf("%d",&s2);
    
    
    if (h1>h2){
        
        k=2;
    }
      
    if (h1==h2 && m1>m2){
    
        k=2;
    }
      
    if (h1==h2 &&  m1==m2 && s1>s2 ){
        
        k=2;
    }
    
          
    if (h1==h2 && m1==m2 && s1==s2){
        
        k=0;
    }
        
        
        
        
        switch (k) {
         
         case(1):
         printf("le premier instant  vient avant  le deuxiem ");
         break;
        
         
         case(2):
         printf("le deuxiem instant  vient avant  le premier");
         break;
         
         case(0):
         printf("il s agit du meme instant ");
         break;
        
           default:
         printf("error");
         
         
     }
        
  
    

    return 0;
}

