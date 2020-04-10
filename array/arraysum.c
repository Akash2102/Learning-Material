#include<stdio.h>

int main()
{
	int arr[100];
	int n, sum = 0;
	printf("Enter the array size\n");
	scanf("%d",&n);
	int i;
	printf("Enter the numbers:-\n");
	for(i = 0;i < n;i ++)
		scanf("%d",&arr[i]);
	
	for(i = 0;i < n;i ++)
		sum = sum + arr[i];
	printf("Sum is:%d\n",sum);
	return 0;
}