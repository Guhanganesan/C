
#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[100];
    char age;
    float fees;
    double percentage;
} member1;

int main()
{
    member1.id=1001;
    strcpy(member1.name,"Hariharan");
    member1.age=23;
    member1.fees=1200.55;
    member1.percentage=85.05;
    
    printf("Student id is: %d \n",member1.id);
    printf("Student name is: %s \n",member1.name);
    printf("Student age is: %d \n",member1.age);
    printf("Student fees is: %f \n", member1.fees);
    printf("Student fees is: %g \n", member1.percentage);
     
    return 0;
}

/*
Answer:-
Student id is: 1001 
Student name is: Hariharan 
Student age is: 23 
Student fees is: 1200.550049 
Student fees is: 85.05 
*/
