// 
#include<iostream>
using namespace std;

struct Queue {
    int *a;  // "a" is a pointer to integer
    int front;
    int rear;
    int size;
    unsigned c; // capacity
};
////////////////////////////////////////////////////////////////////////////////////////////////////
struct Queue* create(unsigned c) // A function to create a queue with capacity "c"
{
    struct Queue* q; // "q" is a pointer to struct
    // Allocate a memory space for the Queue from Heap memory
    q = (struct Queue*) malloc(sizeof(struct Queue)); // size of the struct as input and the output is a pointer to the struct "Queue"

    q->c = c;
    q->front = 0;
    q->rear = c-1;
    q->size = 0;
    q->a = (int*) malloc(q->c * 4); // Assuming integers are 4 byte

    return q;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
int isEmpty(struct Queue* q)
{
    return(q->size ==0);
}
////////////////////////////////////////////////////////////////////////////////////////////////////
int isFull(struct Queue* q)
{
    return(q->size == q->c);
}
////////////////////////////////////////////////////////////////////////////////////////////////////
void add(struct Queue* q, int item)
{
    if(isFull(q))
        return;
    q->rear = (q->rear+1)%q->c;

    int i;
    i=q->rear;
    q->a[i] = item;
    q->size = q->size+1;
    cout << item << "add" << endl;
}