#include <stdio.h>
int main()
{
    char Username;
    char Age;
    char Gender;
    char ID;
    char Profession;
    char Nationality;


    printf("enter Username: ");
    scanf("%c\n",Username);

    printf("enter Age: ");
    scanf("%c\n",Age);

    printf("enter Gender(male/female): ");
    scanf("%c\n",Gender);

    printf("enter ID number: ");
    scanf("%c\n",ID);

    printf("enter Profession: ");
    scanf("%c\n",Profession);

    printf("enter Nationality");
    scanf("%c",Nationality);

    printf(" %c %c %c %c %c %c ",Username ,Age ,Gender ,ID ,Profession ,Nationality);
}