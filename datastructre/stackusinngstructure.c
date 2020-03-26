#include<stdio.h>
#include<stdlib.h>
#define MAX 2

struct stack{
	int top;
	int stk[];
}s;

void push(int num, int n)
{
	if(s.top == n - 1)
	{
		printf("Stack is Full\n");
	}
	else{
		s.stk[++(s.top)] = num;
		}
}

int pop()
{
	if(s.top == -1)
	{
		printf("Stack is empty\n");
		return -1;
	}
	else{
		printf("The popped value is:%d\n",s.stk[s.top--]);
	}
	return 0;
}

void display()
{
	int i;
	printf("Stack elements are:\n");
	for(i = s.top;i >= 0;i--)
	{
	printf("%d\n",s.stk[i]);
	}
}

int main()
{
	int choice, val, n;
	printf("Enter the size of stack\n");
	scanf("%d",&n);
	s.top = -1;
	printf("Stack Menu:\n");
	while(1)
	{
		printf("Enter your choice:\n");
		printf("1:PUSH 2:POP 3:DISPLAY 4:EXIT\n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:printf("Enter the value to be pushed:\n");
			scanf("%d",&val);
			push(val,n);
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default:printf("Wrong input\n");
		}
	}
	return 0;
}