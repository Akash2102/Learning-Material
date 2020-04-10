#include<stdio.h>

int main()
{
	int arr[100];
	int i = 0;
	int j, n;
	
	printf("Enter any decimal number:\n");
	scanf("%d",&n);
	
	while(n != 0)
	{
		arr[i++] = n % 2;
		n = n / 2;
	}
	
	printf("The required binary number is:\n");
	for(j = i - 1;j >= 0;j --)
		printf("%d\n",arr[j]);
	
	return 0;
}