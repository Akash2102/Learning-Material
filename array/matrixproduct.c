#include<stdio.h>

int main()
{
	int mata[10][10], matb[10][10], pro[10][10];
	int rowa, cola, rowb, colb;
	int i, j, k;
	
	printf("Enter the row for matrix A:\n");
	scanf("%d",&rowa);
	printf("Enter the column for matrix A:\n");
	scanf("%d",&cola);
	
	printf("Enter the row for matrix B:\n");
	scanf("%d",&rowb);
	printf("Enter the column for matrix B:\n");
	scanf("%d",&colb);
	
	if(cola != rowb)
	{
		printf("Multiplication not possible\n");
	}
	else
	{
		printf("Enter the elements of matrix A:\n");
		for(i = 0;i < rowa;i ++)
			for(j = 0;j < cola;j ++)
				scanf("%d",&mata[i][j]);
		
		printf("Enter the elements of matrix B:\n");
		for(i = 0;i < rowb;i ++)
			for(j = 0;j < colb;j ++)
				scanf("%d",&matb[i][j]);
		
		printf("The product is:\n");
		for(i =0;i < rowa;i ++ )
		{
			printf("\n");
			for(j = 0;j < colb;j ++)
			{
				pro[i][j] = 0;
				for(k = 0;k < cola;k ++)
					pro[i][j] += mata[i][k] * matb[k][j];
				printf("%d\t",pro[i][j]);
			}
		}
	}
	return 0;
}