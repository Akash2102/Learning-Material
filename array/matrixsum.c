#include<stdio.h>

int main()
{
	int mata[10][10], matb[10][10];
	int rowa, cola;
	int rowb, colb;
	int i, j;
	
	printf("Enter the row for matrix A:\n");
	scanf("%d",&rowa);
	printf("Enter the column for matrix A:\n");
	scanf("%d",&cola);
	
	printf("Enter the row for matrix B:\n");
	scanf("%d",&rowb);
	printf("Enter the column for matrix B:\n");
	scanf("%d",&colb);
	
	if(rowa == rowb && cola == colb)
	{
		printf("Enter the elements of matrix A:\n");
		for(i = 0;i < rowa;i ++)
			for(j = 0;j < cola;j ++)
				scanf("%d",&mata[i][j]);
		
		printf("Enter the elements of matrix B:\n");
		for(i = 0;i < rowb;i ++)
			for(j = 0;j < colb;j ++)
				scanf("%d",&matb[i][j]);
			
	    printf("The required Sum matrix is:\n");
		
		for(i = 0;i < rowa;i ++)
		{
			printf("\n");
			for(j = 0;j < cola;j ++)
				printf("%d\t",mata[i][j] + matb[i][j]);			

		}	
	}
	else
		printf("Row and Column dimensions of both matrix must be equal:\n");
	return 0;
}