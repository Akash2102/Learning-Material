#include<stdio.h>

int main()
{
	int arr[100], i, n;
	printf("Enter the array size:\n");
	scanf("%d",&n);
	
	printf("Enter the numbers:\n");
	for(i = 0;i < n;i ++)
		scanf("%d",&arr[i]);
	
	printf("The reverse order is:\n");
	for(i = n-1;i >= 0; i --)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}