#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,evencount=0,oddcount=0,totalodd,totaleven;

  for(i=1;i<=10;i++)
  {
    printf ("\nINPUT YOU NUMBER HERE : ");
    scanf ("%d", &num);
   if (num%2 == 0)
 {
   printf ("This is even number");
   evencount+=1;
   totaleven+=num;
 }
else
 {
   printf ("This is odd number");
   oddcount+=1;
   totalodd+=num;
 }
 }
 printf("\nodd numbers: %d",oddcount);
 printf("\neven numbers: %d",evencount);
 printf("\nTotal of odd numbers: %d",totalodd);
 printf("\nTotal of even numbers: %d",totaleven); 
    return 0;
}

