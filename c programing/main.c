#include <stdio.h>
#include <stdlib.h>

int main()
{
   float number_1=0,number_2=0,sum=0,sub=0,mult=0,div=0;
   int rem=0;

   printf("please enter two numbers\n");
  scanf("%f \n %f",&number_1,&number_2);
   printf("the first number is \t%0.1f",number_1);
   printf("\n the second number is \t%0.1f",number_2);
   sum=number_1+number_2;
   printf("\n the summation of two number's is \t%0.1f",sum);
   sub=number_1-number_2 ;
   printf("\n the  subtraction of two number's is \t%0.1f",sub);
   mult =number_1 *number_2 ;
   printf("\n the Multiplication of two number's is \t%0.1f",mult);
   if (number_2!=0){
      div=number_1/number_2 ;
      printf("\n the Division of two number's is \t%0.1f",div);}
   else
        {
            printf("\n in the Division zero is not allowed in the denominator ");}

   if (number_2!=0){
   rem =(int)number_1%(int)number_2;
   printf("\n the  remainder of two number's is \t%d",rem);}
   else {

    printf("\n it is not allowed in the remainder to use zero in the denominator ");


   }
    return 0;
}
