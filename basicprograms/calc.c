#include<stdio.h>
#include<stdlib.h>

void sum()
{
	int num1, num2;
	printf("Enter the 1st number:\n");
	 while(scanf("%d",&num1) != 1)
    {
        printf("Please enter an integer: ");
        while(getchar() != '\n');
    }
	printf("Enter the 2nd number:\n");
	 while(scanf("%d",&num2) != 1)
    {
        printf("Please enter an integer: ");
        while(getchar() != '\n');
    }
	
	printf("Sum is:%d",num1 + num2);
}

void subtract()
{
	int num1, num2;
	printf("Enter the 1st number:\n");
	 while(scanf("%d",&num1) != 1)
    {
        printf("Please enter an integer: ");
        while(getchar() != '\n');
    }
	printf("Enter the 2nd number:\n");
	 while(scanf("%d",&num2) != 1)
    {
        printf("Please enter an integer: ");
        while(getchar() != '\n');
    }
	printf("Difference is:%d",num1 - num2);
}

void multiply()
{
	int num1, num2;
	printf("Enter the 1st number:\n");
	 while(scanf("%d",&num1) != 1)
    {
        printf("Please enter an integer: ");
        while(getchar() != '\n');
    }
	printf("Enter the 2nd number:\n");
	 while(scanf("%d",&num2) != 1)
    {
        printf("Please enter an integer: ");
        while(getchar() != '\n');
    }
	printf("Product is:%d",num1 * num2);
}

void divide()
{
	int num1, num2;
	printf("Enter the 1st number:\n");
	 while(scanf("%d",&num1) != 1)
    {
        printf("Please enter an integer: ");
        while(getchar() != '\n');
    }
	printf("Enter the 2nd number:\n");
	 while(scanf("%d",&num2) != 1)
    {
        printf("Please enter an integer: ");
        while(getchar() != '\n');
    }
	if(num2 == 0)
	    printf("Wrong value of 2nd number 'Value can't be 0'\n");
	else
		printf("Quotient is:%d",num1 / num2);
}

int main()
{
	int choice;
	printf("\tCalculator\n");
	while(1)
	{
		printf("\nEnter your choice:\n");
		printf("1:Sum\n2:Subtract\n3:Multiply\n4:Divide\n5:Exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:sum();
			break;
			case 2:subtract();
			break;
			case 3:multiply();
			break;
			case 4:divide();
			break;
			case 5:exit(0);
			default:printf("Wrong input of choice\n");
		}
	}
	return 0;
}