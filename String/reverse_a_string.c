#include <stdio.h>

int main()
{
    char name[100]="india";
    char temp[100];
    int count=0;
    int length=strlen(name)-1;
    for(int i=length; i>=0; i--)
    {   
        temp[count++]=name[i];
    }
    printf("%s",temp);
    return 0;
}


