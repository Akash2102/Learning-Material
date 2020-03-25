#include<stdio.h>

void printArray(char input[],int n)
{
	int j;
	for(j = 0; j <= n; j++)
	{
		printf("%c\n",input[j]);
	}
}

int main()
{
	int i,n;
	char input[100];
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	if(n < 1){
		printf("Invalid Input\n");
	}
	else {
	printf("Enter the characters\n");
	for(i = 0; i <= n; i++)
	{
		scanf("%c",&input[i]);
	}
	}
	printArray(input,n);
	return 0;
}