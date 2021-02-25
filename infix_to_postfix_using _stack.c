#include<stdio.h>
#include<conio.h>
int top=-1;
#define max 10
char  stack[10],postfix[10];
void push(char c)
{
    if(top==max-1)
    {
        //
    }
    else{
        top++;
        stack[top]=c;
    }
}
char pop()
{
    char item;
    if(top == -1)
    {
        //
    }
    else
    {
        item=stack[top];
        top--;
        return item;
    }
}
int precedence(char c)
{
    if(c=='(' || c==')')
    {
        return 0;
    }
    else if(c=='+' || c=='-')
    {
        return 1;
    }
    else if(c=='*' || c=='/')
    {
        return 2;
    }
    else if(c=='^' || c=='$')
    {
        return 3;
    }
    else return -1;
}

int main()
{
    char infix[20],item;
    int i=0,j=0,k=0;
    printf("Enter infix exp \n");
    gets(infix);
    while(infix[i]!='\0')
    {
        if(infix[i]=='(')
        {
            push(infix[i]);
        }
        else if(infix[i]==')')
        {
            while(stack[top]!='(')
            {
                item=pop();
                postfix[j]=item;
                j++;
            }
            item=pop();
        }
        else if(infix[i]>=48 && infix[i]<=57)
        //else if(isalpha(infix[i]) || isdigit(infix[i]))
        {
            postfix[j]=infix[i];
            j++;
        }
        else
        {
            while(precedence(stack[top])>=precedence(infix[i]))
            {
                item=pop();
                postfix[j]=item;
                j++;
            }
            push(infix[i]);
        }
        i++;
    }
    while(top != -1)
    {
        item = pop();
        postfix[j]=item;
        j++;
    }
    while(postfix[k] != '\0')
    {
        printf("%c",postfix[k]);
        k++;
    }
    return 0;
}
