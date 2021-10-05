#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int arr[MAX];
int top = -1;

void push(int item);
int pop();
int peek();
int empty();
int full();
void show();

int main()
{
        int choice,item;
        while(1)
        {
            printf("\n1.Push\n");
            printf("2.Pop\n");
            printf("3.show the top element\n");
            printf("4.show all stack elements\n");
            printf("5.Quit\n");
            printf("\nEnter your choice : ");
            scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :
                        printf("\nEnter the item to be pushed : ");
                        scanf("%d",&item);
                        push(item);
                        break;
                 case 2:
                        item = pop();
                        printf("\nPopped item is : %d\n",item );
                        break;
                 case 3:
                        printf("\nItem at the top is : %d\n", peek() );
                        break;
                 case 4:
                        show();
                        break;
                 case 5:
                        exit(1);
                 default:
                        printf("\nWrong choice\n");
                }
        }

        return 0;

}

void push(int item)
{
        if( full() )
        {
                printf("\nStack Overflow\n");
                return;
        }
        top = top+1;
     arr[top] = item;
}

int pop()
{
        int item;
        if( empty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        item = arr[top];
        top = top-1;
        return item;
}

int peek()
{
        if( empty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        return arr[top];
}

int empty()
{
        if( top == -1 )
                return 1;
        else
                return 0;
}

int full()
{
        if( top == MAX-1 )
                return 1;
        else
                return 0;
}

void show()
{
        int i;
        if( empty() )
        {
                printf("\nStack is empty\n");
                return;
        }
    printf("\nStack elements :\n\n");
        for(i=top;i>=0;i--)
                printf(" %d\n", arr[i] );
        printf("\n");
}
