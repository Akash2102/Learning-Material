#include<stdio.h>

int main(void)
{
	int mata[10][10], tran[10][10];
	int i, j;
	int row, col;
	
	printf("Enter the row for matrix:\n");
	scanf("%d",&row);
	printf("Enter the column for matrix:\n");
	scanf("%d",&col);
	
	printf("Enter the elements:\n");
	for(i = 0;i < row;i ++)
		for(j = 0;j < col;j ++)
			scanf("%d",&mata[i][j]);
	
	for(i = 0;i < row;i ++)
	{
		for(j = 0;j < col;j ++)
		{
			tran[j][i] = mata[i][j];
		}	
	}
	
	printf("The transpose matrix is:\n");
	for(i = 0;i < row;i ++)
	{
		printf("\n");
		for(j = 0;j < col;j ++)
			printf("%d\t",tran[j][i]);
	}
}
