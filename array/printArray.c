#include<stdio.h>

void printArray(char input[],int length)
{
	int i;
	for(i = 0; i < length; i++)
	{
		printf("%c\n",input[i]);
	}
}

void occurence(char input[],int length)
{
	int i,j;
	char ch;
	int count=0;
	for(i = 0; i < length; i++)
	{
		if(ch==input[i])	
	    count++;
	    }
	}
	printf("The number of %c is: %d",ch,count);
}


int main()
{
	char input[]={"this is tommy"};
	int length=sizeof(input)/sizeof(char);
	printArray(input,length);
	occurence(input,length);
	return 0;
}