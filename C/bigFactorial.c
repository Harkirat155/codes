#include<stdio.h>

int main()
{
    int t;
    int a[200]; //array will have the capacity to store 200 digits.
    int n,i,j,aux,car,x;

    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       a[0]=1;  //initializes array with only 1 digit, the digit 1.
       car=1;    // initializes digit counter

       aux = 0; //Initializes carry variable to 0.
       for(i=1;i<=n;i++)
       {
            for(j=0;j<car;j++)
            {
               x = a[j]*i+aux; //x contains the digit by digit product
               a[j]=x%10; //Contains the digit to store in position j
               aux = x/10; //Contains the carry value that will be stored on later indexes
            }
             while(aux>0) //while loop that will store the carry value on array.
             { 
               a[car]=aux%10;
               aux = aux/10;
               car++; // increments digit counter
             }
      }
              for(i=car-1;i>=0;i--) //printing answer
              printf("%d",a[i]);
              printf("\n");
    }
    return 0;
}