#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *next;
    
};

struct node *top;

void push()
{
    int value;
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("Memory cant be allocated \n ");
    }
    else 
    {
        printf("Enter the value to be pushed \n ");
        scanf("%d ",&value);
        //printf("xyz \n ");
        if(top == NULL)
        {
            ptr->val=value;
            ptr->next=NULL;
            top=ptr;
        }
        else
        {
            ptr->val=value;
            ptr->next=top;
            top=ptr;
        }
    
    }
    
}
void pop()
{
    int item;
    struct node *ptr;
    if(top == NULL)
    {
        printf("Stack is empty \n");
    }
    else 
    {
        item=top->val;
        ptr=top;
        top=ptr->next;
        free(ptr);
        printf("Popped value is: %d ",item);
    }
}
void display()
{
    int item;
    struct node *ptr;
    ptr= top;
    while(ptr != NULL)
    {
        item=ptr->val;
        ptr=ptr->next;
        printf("%d \n",item);

    }

}
int main()
{
    int choice;
    char cont;
    do
    {
        printf("What do you want to do? \n ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: push();
            break;
        case 2: pop();
            break;
        case 3: display();
           break;
        
        default:
            break;
        }
        printf("DO you still want to continue? \n ");
        fflush(stdin);
        scanf("%c",&cont);

    } while (cont=='y');
    return 0;
    
    

}
