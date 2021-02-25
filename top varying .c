#include<stdio.h>
#include<conio.h>
#define max_size 5
void display(int stack[], int top);
int push(int *stack, int top)
{
	int value;
	int item;
	
	if(top == max_size - 1)
	{ 
		printf("Stack overflow");
	}
	else
	{
		top++;
		printf("Enter the value you want to enter onto the stack \n");
        scanf("%d",&item);
	    stack[top]=item;
	    printf("%d \n",stack[0]);
	    printf("%d",top);
	    
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
	for(i=0; i<top ; i++)
	{
		printf("%d \n ",stack[i]);
	}
	
}
int main()
{
	int top=-1;
	int stack[4];
	char a;
do{
	printf("Enter what do you want to \n ");
	int choice;
	scanf("%d",&choice);
	
	
   switch (choice)
	{
	case 1: top = push(stack, top);
	       break;
	case 2: top = pop(stack, top);
	       break;
	case 3: display(stack, top);
	        break;
    }
    printf("%d \n",top);
	printf("do you wanna continue? \n");
    scanf("%s",&a);
}
	while(a=='y' || a=='Y');
	return 0;
}
