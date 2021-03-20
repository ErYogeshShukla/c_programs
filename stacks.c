#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Stack *CreateStack(int cap);
void Push(struct Stack *s,int data);
void Pop(struct Stack *s);
void Peek(struct Stack *s);
int menu();
struct Stack
{
    int capacity;
    int top;
    int *ptr;
};
struct Stack *CreateStack(int cap)
{
    struct Stack *n;
    n=(struct Stack*)malloc(sizeof(struct Stack));
    n->capacity=cap;
    n->top=-1;
    n->ptr=malloc(sizeof(int)*n->capacity);
    return n;
}
void Push(struct Stack *n,int data)
{
    if(n->capacity-1==n->top)
        printf("overflow");
    else
    {
        n->top+=1;
        n->ptr[n->top]=data;
    }
}
void Pop(struct Stack *n)
{
    if(n->top=-1)
        printf("OverFlow");
    else
        n->top-=1;
}
void Peek(struct Stack *n)
{
    if(n->top==-1)
        printf("Stack is Empty");
    else
        printf("%d",n->ptr[n->top]);
}
int menu()
{
    int choice;
    printf("\n1 PUSH");
    printf("\n2 POP");
    printf("\n3 PEEK");
    scanf("%d",&choice);
    return choice;
}
int main()
{
    struct Stack *n;
    n=CreateStack(5);
    int choice,data;
    while(1)
    {
        system("cls");
        printf("\n Enter your Opinion");
        switch(menu())
        {
            case 1:
                printf("Enter a number to Push");
                scanf("%d",&n);
                Push(&n,20);
                break;
            case 2:
                Pop(&n);
                break;
            default:
                printf("\n Invalid /n Retry!");
        }
    }
    getch();
}