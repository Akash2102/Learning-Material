#include<stdio.h>
#include<string.h>
#define MAXLINE 1000

int getlines(char s[], int lim)
{
	int c,i;
	for (i = 0; i < lim - 1 && (c=getchar())!=EOF && c != '\n'; ++i)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void strcati(char *s, char *t)
{
	while(*s != '\0')
		s++;
	s--;
	
	while((*s = *t) != '\0')
	{
		s++;
		t++;
	}
}
int main()
{
	char s[MAXLINE], t[MAXLINE];
	putchar('s');
	putchar('\n');
	getlines(s,MAXLINE);
	
	putchar('t');
	putchar('\n');
	getlines(t,MAXLINE);
	
	strcati(s,t);
	
	printf("%s\n",s);
	return 0;
}