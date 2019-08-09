#include<stdio.h>
#include<string.h>

struct student
{
	char name[50];
	char id[50];
	int age;
	
};

int main()
{
   struct student std[2];
   char temp[50]; int k;
   
   
  for(int i=0; i<2; i++)
  {
	   printf("Enter Name \n");
	   scanf("%s",&temp);
	   strcpy(std[i].name,temp);
	   printf("Enter Id \n");
	   scanf("%s",&temp);
	   strcpy(std[i].id,temp);
	   printf("Enter Age \n");
	   scanf("%d",&k);
	   std[i].age=k;
	   
  }
   
   
   

   for(int i=0; i<2; i++)
   {
	   printf("Name is: %s \n",std[i].name);
	   printf("Enter Id is:%s \n",std[i].id);
	   printf("Enter Age is:%d \n",std[i].age);
   }
   
   
return 0;
}

/*

Answer:-
Enter Name 
Guhan
Enter Id 
A001
Enter Age 
27
Enter Name 
Anbu
Enter Id 
A002
Enter Age 
21
Name is: Guhan 
Enter Id is:A001 
Enter Age is:27 
Name is: Anbu 
Enter Id is:A002 
Enter Age is:21 
*/
