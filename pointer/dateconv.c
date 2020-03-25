#include<stdio.h>

static char daytab[2][13] ={ {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
                           };
						   
void day_of_year(int year, int month, int day)
{
	int i, leap;
	
	leap = year%4 == 0 && (year%100 != 0 || year%400 == 0);
	for(i = 1; i < month; i++)
		day = day + daytab[leap][i];
	printf("The day is:%d\n",day);

}

int month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;
	
    leap = year%4 == 0 && (year%100 != 0 || year%400 ==0);
	for(i = 1; yearday > daytab[leap][i]; i++)
	{
		yearday = yearday - daytab[leap][i];
	}
	*pmonth = i;
	*pday = yearday;
	
	printf("The given day is of day %d and month %d\n", yearday, i);
}

int main()
{
	int month, year, yearday, choice, day;
	printf("Enter the choice of search: 1 for day_of_year and 2 for month_day\n ");
	printf("Enter the choice:\n");
	scanf("%d",&choice);
	switch(choice){
			case 1:printf("Enter the day,month and year\n");
			       scanf("%d %d %d",&day, &month, &year);
				   day_of_year(year, month, day);
            break;
			
			case 2:printf("Enter the yearday\n");
			       scanf("%d",&yearday);
				   month_day(year, yearday, &month, &day);
			break;
			default:printf("Wrong choice\n");
			break;
	}
	return 0;
}