#include<stdio.h>

int main()
{
	int arr[100];
	int n, i , j, temp;
	
	printf("Enter the array size:\n");
	scanf("%d",&n);
	
	printf("Enter the numbers:\n");
	for(i = 0;i < n;i ++)
		scanf("%d",&arr[i]);
	
	for(i = 0;i < n;i ++)
	{
		for(j = i + 1;j < n;j ++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("The sorted numbers are:\n");
	for(i = 0;i < n;i ++)
		printf("%d\n",arr[i]);
	
	return 0;
}