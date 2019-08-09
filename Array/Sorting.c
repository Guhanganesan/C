#include<stdio.h>
#include<string.h>

int main()
{
   
   int arr[7]={5,3,7,2,4,1,8};
   
   int temp;
   
   for(int i=0; i<7; i++)
   {
       for(int j=i+1; j<7; j++)
       {
           if(arr[i]>arr[j])
           {
               temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
           }
       }
   }
   for(int i=0; i<7; i++)
   {
       printf("%d",arr[i]);
   }
   
return 0;
}
