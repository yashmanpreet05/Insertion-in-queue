#include<iostream>
using namespace std;
class Queue {
    public:
    int front;
    int rear;
    const int n= 5;

    int a[5];
    Queue()
    {
        front = -1;
        rear = -1;
    }
    bool isfull()
    {
        return rear = n-1;   
    }
    bool isempty()
    {
        return front = -1;
    }
    void enqueue(int data)
    {
        if(isfull())
        {
            return;
        }
        if(isempty())
        {
            front =0;
        }
        rear = rear +1;
        a[rear] = data;
    }
    void dequeue()
    {
        int temp;
        if(isempty())
        {
            return ;
        }
        temp = a[front];
        front = front +1;

    }
    void print()
    {
        int i ;
        for(i=front;i<=rear;i++)
        {
            cout<<" "<<a[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    //q.dequeue();
    q.print();
    return 0;
}