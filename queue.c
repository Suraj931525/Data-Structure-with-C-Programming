#include<stdio.h>

int queue[5];
int front=-1,rear=-1;

void enqueue(int value)
{
    if(rear==5-1)
    {
        printf("Queue Overflow!\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }

        rear++;
        queue[rear]=value;
        printf("%d inserted\n",value);
    }
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("Queue Underflow!\n");
    }
    else
    {
        printf("Deleted %d\n",queue[front]);
        front++;
    }
}

void display()
{
    if(front==-1 || front>rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements: ");

        for(int i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }

        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    display();

    return 0;
}