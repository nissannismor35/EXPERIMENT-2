#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>
#include <stdio.h>

int main()
{
   int x,y,sum=0;
   printf("enter a number : ");
   scanf("%d",&y);
  
   for(x=1;x<=y;x++)
   {
     printf("%d ",x);
     sum+=x;
   }
   printf("\nSum %d terms : %d \n",y,sum);

}
