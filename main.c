#include <stdio.h>
int main()
{
    char studentsname[50];
    char studentsage[20];
    char studentsschool[20];
    char studentscourse[20];
    
    printf("enter your name: ");
    scanf("%s",studentsname);
    
    printf("enter your age: ");
    scanf("%s",studentsage);
    
    printf("enter name of school: ");
    scanf("%s",studentsschool);
    
    printf("enter name of course: ");
    scanf("%s",studentscourse);
    
    printf(" %s\n %s\n %s\n %s\n ",studentsname , studentsage ,studentsschool ,studentscourse);
    return 0;
}