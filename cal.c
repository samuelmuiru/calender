#include <stdio.h>
#include <time.h>

int days_in_months[] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *months[] = {
    "\n\n\n January",
    "\n\n\n February",
    "\n\n\n March",
    "\n\n\n April",
    "\n\n\n May",
    "\n\n\n June",
    "\n\n\n July",
    "\n\n\n August",
    "\n\n\n September",
    "\n\n\n October",
    "\n\n\n November",
    "\n\n\n December",
};

int inputyear(void)
{
    int year;
    
    printf("please enter a year (e.g., 1998): ");
    scanf("%d", &year);
    return year;
}

int determineleapyear(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        days_in_months[1] = 29;
        return 1;
    }
    else
    {
        days_in_months[1] = 28;
        return 0;
    }
}

int determinedaycode(int year)
{
    int daycode = 1;

    for (int i = 1; i < year; i++)
    {
        if (determineleapyear(i))
        {
            daycode++;
        }
        daycode++;
    }
    daycode = daycode % 7;
    return daycode;
}

void calendar(int year, int daycode)
{
    int month, day;
    for (month = 0; month < 12; month++)
    {
        printf("%s", months[month]);
        printf("\n\n Sun Mon Tue Wed Thu Fri Sat\n");
        for (day = 1; day <= 1 + daycode * 5; day++)
        {
            printf(" ");
        }
        for (day = 1; day <= days_in_months[month]; day++)
        {
            printf("%2d", day);
        
            if ((day + daycode) % 7 > 0)
                printf(" ");
            else
                printf("\n");
        }
        daycode = (daycode + days_in_months[month]) % 7;
    }
}

int main(void)
{
    int year, daycode;
    year = inputyear();
    daycode = determinedaycode(year);
    determineleapyear(year);
    calendar(year, daycode);

    printf("\n");
    return 0;
}