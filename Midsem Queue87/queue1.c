// Queue follow FIFO discipline..front and rear pointer
#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q, int val)
{ 
    if (isfull(q))
    {
        printf("Queue overflow");
        return;
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
        return;
    }
}
int dequeue(struct queue *q)
{
    int a = -1;
    if (isempty(q))
    {
        printf("Queue underflow and no element for dequeue");
    }
    else
    {
        q->f = q->f + 1;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct queue q;
    q.size = 100;
    q.f = -1;
    q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    // Enqueue some elements..
    enqueue(&q, 12);
    enqueue(&q, 15);
    // Dequeue opereation..
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    return 0;
}