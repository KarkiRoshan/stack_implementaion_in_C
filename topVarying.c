#include<stdio.h>
#define max_size 5

int push(int stack[], int top)
{
	int item;
		if(top == max_size - 1)
	{ 
		printf("Stack overflow");
	}
	else
	{
		top++;
		printf("enter your item ");
		scanf("%d",&item);
		stack[top]=item;
		
	}
	
	return top;
	
	
}
int pop(int stack[], int top)
{
	int item;
	
	if(top==-1)
	{
		printf("Stack underflow \n");
	}
	else
	{
		
		item=stack[top];
		top--;
		printf("popped value is: %d \n", item);
	}

	return top;
	
}
void display(int stack[], int top)
{
	int i;
	for(i=0; i<=top ; i++)
	{
		printf("%d \n ",stack[i]);
	}
	
}
int main()
{
	char a;
	int stack[4],choice;
	int top=-1 ,n_top=-1;
	do
	{
		top=n_top;
		printf("What do you want to do?? \n");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
		        
		      n_top = push(stack, top);
	       break;
		case 2: display(stack, top);
	        break;
		
		case 3: n_top= pop(stack, top);
		       break;
	}
	printf("do you wanna continue? \n");
    scanf("%s",&a);
	}while(a=='y' || a=='Y');
	return 0;
	
}
