#include<stdio.h>
int main ( ){
    int a;
    printf("ENTER A INTEGER : ");
    scanf("%d" , &a);
     float b;
     printf("ENTER ANY FLOAT NUMBER : ");
     scanf("%f"  , &b);

     double g;
     printf("ENTER ANY DOUBLE NUMBER : ");
     scanf("%lf"  , &g);
      
      char ch;
      printf("ENTER ANY CHARACTER : ");
      scanf(" %c" , &ch);

     printf("THE SIZE OF THE FLOAT NUMBER IS : %d\n" , sizeof(float));

     printf("THE SIZE OF THE DOUBLE NUMBER IS : %d\n " , sizeof(double));

     printf("THE SICE OF THE CHARACTER IS  : %d\n"   , sizeof(char));

    


    printf("THE SIZE OF THWE INTEGER IS : %d\n " , sizeof(int));
    return 0;

}