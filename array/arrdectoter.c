#include<stdio.h>

int main()
{
	int arr[100];
	int i = 0;
	int j, n;
	
	printf("Enter the decimal number:\n");
	scanf("%d",&n);
	
	while(n != 0)
	{
		arr[i++] = n % 3;
		n = n / 3;
	}
	printf("The required ternary number is:\n");
	
	for(j = i - 1;j >= 0;j --)
		printf("%d\n",arr[j]);
	
	return 0;
}