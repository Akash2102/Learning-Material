#include<stdio.h>

/* copy input to its output,replacing each string of one or more blanks by a single blank */
int main()
{
int c;
while((c=getchar())!=EOF)
{
    if(c==' ')
    {
        while((c=getchar())==' ');
        putchar(' ');
        if(c==EOF) 
        break;
    }
    putchar(c);
}
}