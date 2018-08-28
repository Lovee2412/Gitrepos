/*
*this program to convert infix expression to postfix expression
*author lavanya balla
*created 31/08/2018
*/
//required header files
#include<stdio.h>
#define MAX 15
char stack[MAX];
int top = -1;
void push(char ch)
{
	stack[++top] = ch;
}
 
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
 
int priority(char ch)
{
    if(ch == '(')
        return 0;
    if(ch == '+' || x == '-')
        return 1;
    if(ch == '*' || x == '/')
        return 2;
}
 
int main()
{
	char exp[20];
        char *e, x;
        printf("Enter the expression :: ");
	scanf("%s",exp);
	e = exp;
	while(*e != '\0')
	{
		if(isalnum(*e))
			printf("%c",*e);
		else if(*e == '(')
		    	push(*e);
		else if(*e == ')')
		{
		    	while((x = pop()) != '(')
		        	printf("%c", x);
		}
		else
		{
		    	while(priority(stack[top]) >= priority(*e))
		        	printf("%c",pop());
		    	push(*e);
		}
		e++;
	    }
	    while(top != -1)
	    {
		printf("%c",pop());
	    }
	return 0;
}
