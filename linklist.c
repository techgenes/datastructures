#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};
typedef struct node Node;
Node *head;
Node *tail;
main()
{
    int choice,val,index;
    while(1)
    {
        printf("what do you want to do?\n 1.Insert \n 2.Fetch \n 3.display \n4.remove \n5.exit \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the value you want to insert");
            scanf("%d",&val);
            insert(val);
            break;
        case 2:
            printf("enter the index you want to fetch the element");
            scanf("%d",&index);
            fetch(index);
            break;

        case 3:
            display();
            break;
        case 4:
            remoove();
            break;
        case 5:
            printf("exiting");
            return 0;
            break;
        default:
            printf("wrong choice");
        }
    }
}
insert(int val)
{
    if(head==NULL)
    {
        head=(Node*)malloc(sizeof(Node));
        head->value=val;
        head->next=NULL;
        tail=head;
    }
    else
    {

        tail->next=(Node*)malloc(sizeof(Node));
        tail->next->value=val;
        tail->next->next=NULL;
        tail=tail->next;
    }
}
display()
{
    Node *pointer;
    pointer=head;
    if(head==NULL)
    {
        printf("link list is empty");
    }
    else
    {
        while(pointer!=NULL)
        {
            printf("%d\n",pointer->value);
            pointer=pointer->next;
        }
    }

}
int fetch(int index)
{
    int i;
    Node *pointer;
    pointer=head;
    if(head==NULL)
    {
        printf("link list is empty");
    }
    else
    {
        for(i=0; i<index; i++)
        {
            pointer=pointer->next;
        }
        printf("%d\n",pointer->value);
    }
}
remoove()
{
    if(head==NULL)
    {
        printf("link list is empty");
    }
    else
    {
        int ch;
        printf("how do you want to remove by 1.index or 2.value");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            removeIndex();
            break;
        case 2:
            removeValue();
            break;
        default:
            printf("wrong choice");
        }
    }return 0;
}
removeValue()
{
    int val;
    printf("enter value to be removed");
    scanf("%d",&val);
    Node *pointer;
    pointer=head;
    if(head->value==val)
    {
        head=head->next;
        return 0;
    }
    while(pointer!=NULL)
    {
        if(pointer->next->value==val && pointer->next->next!=NULL)
        {
            pointer->next=pointer->next->next;
        }
        else if((pointer->next->value==val) && (pointer->next->next=NULL))
        {
            tail=pointer;
            break;
        }
        else
        {
            pointer=pointer->next;
        }
    }
return 0;
}
removeIndex()
{
    Node *pointer;
    int index,i=0;
    printf("enter index to be removed");
    scanf("%d",&index);
    if (index==0)
    {
        head=head->next;
        return 0;
    }
    pointer=head;
    while(pointer!=NULL)
        {
        if(i==index-1)
        {
            printf("hello");
            pointer=pointer->next->next;
        }
        else
        {
            pointer=pointer->next;
            printf("%d",pointer->value);
        }
    i++;
    }return 0;
}
