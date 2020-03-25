#include<stdio.h>

void printHistogram(int input[], int length)
{
 int i,j,n,element;
 
 
 //printf("length of array : %d", length);

 for(i = 0; i < length; i++)
 {   
	 element = input[i];
	 //printf("element (input[%d]) is : %d", i, element);
	 for(j = 0; j < element; j++)
	 {
		 //printf(": %d", length);
		 printf("X");
	 }
	 printf("\n");
 }
}
int main()
{
	
	int input[]={3,2,5,6};
	int length = sizeof(input)/sizeof(int);
	printHistogram(input, length);
	int input2[] = {10,2,14,5,6};
	length = sizeof(input2)/sizeof(int);
	printHistogram(input2, length);
	return 0;
}	