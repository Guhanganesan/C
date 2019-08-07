#include <stdio.h>

unsigned long long int fact(unsigned int i)
{
   if(i<=1)
   {
       return 1;
   }
   
   i = i* fact(i-1);
   return i;
}

int main()
{
   
   unsigned long long int res;
   res=fact(5);
   printf("Factorial: %d",res);
    return 0;
}
