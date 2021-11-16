
int main()
{
   int jour , mois , anne ;
   
    printf ("entre le jour :");
    scanf (" %d",&jour );
    
     printf ("entre le mois :");
    scanf (" %d",&mois );
    
     printf ("entre le anne :");
    scanf (" %d",&anne );
     
     
     switch (mois) {
         
         case(1):
         printf("la date %d -january- %d",jour,anne);
         break;
        
         
         case(2):
         printf("la date %d -february-%d", jour,anne);
         break;
         
         case(3):
         printf("la date %d-march-%d",jour, anne );
         break;
         
         case(4):
         printf("la date %d-april-%d", jour, anne );
         break;
         
         case(5):
         printf("la date %d-may-%d", jour , anne );
         break;
         
         case(6):
         printf("la date %d-jun-%d" , jour , anne );
         break;
         
          case(7):
         printf("la date %d -july- %d",jour,anne);
         break;
        
         
         case(8):
         printf("la date %d -august-%d", jour,anne);
         break;
         
         case(9):
         printf("la date %d-september-%d",jour, anne );
         break;
         
         case(10):
         printf("la date %d-october -%d", jour, anne );
         break;
         
         case(11):
         printf("la date %d- november-%d", jour , anne );
         break;
         
         case(12):
         printf("la date %d-december-%d" , jour , anne );
         break;
         
         default:
         printf("error");
         
         
     }
    

    return 0;
}

