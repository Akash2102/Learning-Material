#include<stdio.h>

void swap(int *px, int *py)
{
	int temp;
	
	temp = *px;
	*px = *py;
	*py = temp;
	
	printf("The swapped numbers are %d and %d\n", *px, *py);
}

void main()
{
	int num1, num2;
	printf("Enter the numbers\n");
	scanf("%d %d",&num1,&num2);
	
	swap(&num1, &num2);
}