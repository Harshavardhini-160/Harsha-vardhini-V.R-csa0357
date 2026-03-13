#include <stdio.h>

int queue[50], front = -1, rear = -1, n;

void enqueue()
{
    int x;

    if(rear == n-1)
        printf("Queue Overflow\n");
    else
    {
        if(front == -1)
            front = 0;

        printf("Enter element: ");
        scanf("%d", &x);

        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
    {
        printf("Deleted element: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;

    if(front == -1)
        printf("Queue is empty\n");
    else
    {
        printf("Queue elements: ");
        for(i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}

int main()
{
    int ch;

    printf("Enter queue size: ");
    scanf("%d", &n);

    do
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
        }

    } while(ch != 4);

    return 0;
}
