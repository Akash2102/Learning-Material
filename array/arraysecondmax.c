#include<stdio.h>

int main()
{
	int arr[100];
	int n, i, max = -32968, smax = -32968;
	
	printf("Enter the array size:\n");
	scanf("%d",&n);
	
	printf("Enter the numbers:\n");
	for(i = 0;i < n;i ++)
		scanf("%d",&arr[i]);
	
	for(i = 0;i < n;i ++)
	{
		if(max < arr[i])
		{
			smax = max;
			max = arr[i];
		}
	}
	printf("The second largest value is:%d\n",smax);
	return 0;
}