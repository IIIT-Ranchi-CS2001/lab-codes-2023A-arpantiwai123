// Circular queue.. Very important for midsem..
#include <stdio.h>
#include <stdlib.h>
struct Circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct Circularqueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct Circularqueue *q)
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
void enqueue(struct Circularqueue *q, int val)
{
    if (isfull(q))
    {
        printf("Queue overflow");
    }
    else
    {
        printf("Enqueued elements :%d\n",val);
        q->r = (q->r + 1) % q->size; // circular increment..
        q->arr[q->r] = val;
    }
}
int dequeue(struct Circularqueue *q)
{
    int val = -1;
    if (isempty(q))
    {
        printf("Queue underflow");
    }
    else
    {
        q->f = (q->f + 1) % q->size; // circular increment..
        val = q->arr[q->f];
    }
    return val;
}
int main()
{
    struct Circularqueue *q;
    q->f = 0;// in circular we initialise it from 0 as -1 value nhi mil skti by divide
    q->r = 0;// in circular we initialise it from 0 as -1 value nhi mil skti by divide
    q->size = 4;// and one place is now reserve for 0..
    q->arr = (int *)malloc(q->size * sizeof(int));
    // Enqueue;
    enqueue(q, 10);
    enqueue(q, 15);// we can insert only three element..
    enqueue(q, 30); // r pointer at size-1..

    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    // now checking if cq work .. as size is 4
    enqueue(q, 82);//hum circular queue ki help se back me jo space hain use use kr pa rhe hain..
    // ab hum enqueue kr skte hain as dequeue is done earlier..
    enqueue(q, 66);
    enqueue(q, 88);


    printf("%d\n", isempty(q)); // yes it works..
    printf("%d\n", isfull(q));
    return 0;
}