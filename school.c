#include <stdio.h>

int main()
{

    char username[50];
    char dateofbirth[20];
    char schoolname[30];
    char coursename[20];
    char studentidno[10];

    printf("enter username: ");
    scanf("%s",username);

    printf("date of birth(DD/MM/YYYY): ");
    scanf("%s",dateofbirth);

    printf("enter school name: ");
    scanf("%s",schoolname);

    printf("enter course name: ");
    scanf("%s",coursename);

    printf("enter student id no: ");
    scanf("%s",studentidno);
    return 0;
}