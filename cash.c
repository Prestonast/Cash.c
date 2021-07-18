#include<cs50.h>
#include<stdio.h>



void greedyAlgorithm(float c);

int main (void)
{
    float changeowed;

    printf("cash owed in cents:");
    scanf("%f", &changeowed);
    greedyAlgorithm(changeowed); 
}

void greedyAlgorithm(float c)
   {
   float Q=0, N=0, D=0, P=0, count =0;

   while(c >= 25)
   {
       Q++;
       c=c-25;
   }

   while(c >= 10)
   {
       D++;
       c=c-10;
   }

   while(c >= 5)
   {
       N++;
       c=c-5;
   }

   while(c >= 1)
   {
       P++;
       c=c-1;
   }

   //print change statement
printf("Cashier, please give user the following:\n");
   printf("%f Quaters\n", Q);
   printf("%f Dimes\n", D);
   printf("%f Nickels\n", N);
   printf("%f Pennies\n", P);

 }