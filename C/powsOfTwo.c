#include<stdio.h>
int main()
{
    int t;
    int a[1000]; //array will have the capacity to store 1000 digits.
    int n,i,j,aux,car,x;

    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);// n is the power.
       a[0]=1;  //initializes array with only 1 digit, the digit 1.
       car=1;    // initializes digit counter
       i=2;// i is base 2
       int k=1;//k is a counter that goes from 1 to  n.
       aux = 0; //Initializes carry variable to 0.
       while(k<=n)
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
             k++;
      }
              for(i=car-1;i>=0;i--) //printing answer
              printf("%d",a[i]);
              printf("\n");

    }
    return 0;
}