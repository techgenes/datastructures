#include<stdio.h>
#include<stdlib.h>
#define size 8

struct stack
{
    int top;
    int store[size];
};
typedef struct stack stk;
void push(int,int*);

main()
{
    stk s;
    s.top=-1;
    int choice,num;
    while(1)
    {
        printf("enter the action you want to perform \n 1.push \n 2.pop \n 3.display \n 4.exit \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nenter the number you want to push\n");
            scanf("%d",&num);
            push(num,&s);
            break;
        case 2:
            num=pop(&s);
            printf("\nthe popped element is %d\n",num);
            break;
        case 3:
            printf("\nthe stack is\n");
            display(&s);
            break;
        case 4:
            printf("\nexiting\n");
            return 0;
        default:
            printf("\nwrong choice\n");
        }
    }
}
push(int num,stk *s)
{

    if(s->top==size-1)
    {
        printf("stack is full");
    }
    else
    {
        s->top=s->top+1;
        s->store[s->top]=num;
    }

}
int pop(stk *s)
{
    int k;
    if(s->top==-1)
    {
        printf("stack is empty");
        return 0;
    }
    else
    {
        k=s->store[s->top];
        s->top--;
        return k;
    }
}
display(stk *s)
{
    if(s->top==-1)
    {
        printf("stack is empty");
        return 0;
    }
    else
    {
        while(s->top>-1)
        {
            printf("%d\n ",s->store[s->top]);
            s->top--;
        }
    }
}
