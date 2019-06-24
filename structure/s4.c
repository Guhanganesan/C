#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    char name[100];
    char age;
    float fees;
    double percentage;
};

int main()
{
    struct Student member[3];
    member[0].id=1001;
    strcpy(member[0].name,"Hariharan");
    member[0].age=23;
    member[0].fees=1200.55;
    member[0].percentage=85.05;
    
    member[1].id=1002;
    strcpy(member[1].name,"Raja");
    member[1].age=23;
    member[1].fees=1100.55;
    member[1].percentage=87.05;
    
    member[2].id=1003;
    strcpy(member[2].name,"Guhan");
    member[2].age=24;
    member[2].fees=1100.55;
    member[2].percentage=65.05;
    
    for(int i=0; i<=2; i++)
    {
        printf("Student %d id is: %d \n", (i+1) , member[i].id);
        printf("Student %d name is: %s \n",(i+1), member[i].name);
        printf("Student %d age is: %d \n", (i+1), member[i].age);
        printf("Student %d fees is: %f \n", (i+1),  member[i].fees);
        printf("Student %d fees is: %g \n", (i+1),  member[i].percentage);
    }
   
    return 0;
}


/*
Answer:-
Student 1 id is: 1001 
Student 1 name is: Hariharan 
Student 1 age is: 23 
Student 1 fees is: 1200.550049 
Student 1 fees is: 85.05 
Student 2 id is: 1002 
Student 2 name is: Raja 
Student 2 age is: 23 
Student 2 fees is: 1100.550049 
Student 2 fees is: 87.05 
Student 3 id is: 1003 
Student 3 name is: Guhan 
Student 3 age is: 24 
Student 3 fees is: 1100.550049 
Student 3 fees is: 65.05 
*/
