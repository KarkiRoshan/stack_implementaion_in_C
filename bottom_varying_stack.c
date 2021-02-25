
#include<stdio.h>
#include<conio.h>
#define maxsize 5
int push(int stack[] ,int bot)
{
	int i,item;
	if(bot==maxsize)
	{
		printf("stack is full \n");
	}
	else
	{
		for(i=bot ; i>0;i--)
		{
			stack[i]=stack[i-1];
			
		}
		printf("Enter your item \n");
		scanf("%d",&item);
		stack[0]=item;
		bot++;
	}
	return bot;
}
int pop(int stack[] ,int bot)
{
	int i;
	int item;
	if(bot==0)
	{
		printf("stack is empty");
	}
	else
	{
		item=stack[0];
		bot--;
		for(i=0;i<bot;i++)
		{
			stack[i]=stack[i+1];
		}
		printf("the popped item is %d ",item);
	}
	return bot;
}
void display(int stack[], int bot)
{
	int i;
	for(i=0;i<bot;i++)
	{
		printf("%d \n",stack[i]);
	}
	
}
int main()
{
	int stack[4],choice;
	int bot = 0;
	int new_bot=0;
	char a;
	do
	{
		bot=new_bot;
		printf("what do you want to do?");
	    scanf("%d",&choice);
	    switch(choice)
	      {
		    case 1: new_bot=push(stack, bot);
		            break;
		    case 2: new_bot=pop(stack,bot);
		            break;
		    case 3: display(stack, bot);
		            break;
	      }
		printf("Do you want to continue? \n");
		scanf("%s",&a);
	}while(a=='y' || a=='Y');
	
	return 0;
}
