#include<stdio.h>
#define OUT 0
#define IN 1
int main()
{
int c,nw,state;  
    state=OUT;  
    while((c=getchar())!=EOF) 
    {  
       if(c==' '||c=='\n'||c=='\t')  
       {  
            state=OUT;  
            printf("\n");                      
       }  

       else if(state==OUT)  
       {  
            putchar(c);   /* To print the first character */
            state=IN;  
            ++nw;  
            c=getchar();  
            putchar(c);  /* To print the other characters of the word*/
       }
    }
}  