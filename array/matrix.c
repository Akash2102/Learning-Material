#include<stdio.h>

int main()
{
	int mat[10][10];
	int row, col;
	int i, j;
	printf("Enter the row size:\n");
	scanf("%d",&row);
	printf("Enter the column size:\n");
	scanf("%d",&col);
	
	printf("Enter the elements of the matrix:\n");
	for(i = 0;i < row;i ++)
		for(j = 0;j < col;j ++)
			scanf("%d",&mat[i][j]);
		
	printf("The matrix is:\n");
	for(i = 0;i < row;i ++)
	{
 		printf("\n");
		for(j = 0;j < col;j ++)
			printf("%d\t",mat[i][j]);
	}
	
	return 0;
}