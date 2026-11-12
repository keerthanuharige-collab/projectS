#include<stdio.h>
#define MAX 20
int stack[MAX];
int top =-1;

void push()
{
    int value;
    if(top==MAX-1)
    {
        printf("Stack is overflow\n");

        return;
    }
    else
    {
     printf("Enter element:");
     scanf("%d",&value);
     top++;
     stack[top]=value;
     printf("Element pushed successfully.\n");

    }

}
void pop()
{

    if(top==-1)
    {
        printf("Stack is underflow\n");
        return;

    }
    else
    {
        printf("Deleted element %d\n",stack[top]);
        top--;

    }
}
void display()
{

    int i;
    if(top==-1)
    {
        printf("\nStack is empty\n");
        return;
    }
    else
    {
        printf("Stack elements:\n");
        for(i=0;i<=top;i++)
        {
            printf("item %d\n",stack[i]);
        }
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n___STACK MENU___");
        printf("\n1.Push an element");
        printf("\n2.Pop an element");
        printf("\n3.Display stack");
        printf("\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:push();
               break;
        case 2:pop();
               break;
        case 3:display();
               break;
        case 4:printf("\nExiting program....");
               break;
        default : printf("Invalid choice");
        }
    }while(choice!=4);
     return 0;
}
