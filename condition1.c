#include <stdio.h>
   #include <stdlib.h>
int main()


{
    float f,c;
    printf("la température en Fahrenheit:\n");
scanf("%f",&f);
c=(f-32)/1.8;
if(c<=1){
        printf("tres froid %.2f c :\n",c);
}
else if (c>2 && c<=19){
        printf("froid%.2f c :\n",c);
}
else if (c>19 && c<=30){
printf( "chaud %.2 c :\ n",c);}

else if (c>30){
        printf("tres chaud%.2f c:\n",c);
}


    return 0;
}
