#include <iostream>
#include <string>

using namespace std;

//queue (array)
class Q



ueue
{
    public:
        string queue[5];
        int front = -1;
        int rear = -1;
        
    void enqueue(string name)
    {
        if(rear == 4)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            if(front == -1)
            {
                front = 0;
            }
            
            rear++;
            
            queue[rear] = name;
        }
    }
    
    void dequeue()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Deleted: " << queue[front] << endl;
            front++;
        }
    }
    
    void peek()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Front: " << queue[front] << endl;
        }
    }
    
    void display_queue()
    {
        int display_node = front;
        
        while(display_node <= rear)
        {
            cout << queue[display_node] << endl;
            display_node++;
        }
    }
};

int main()
{
    Queue* queue = new Queue();
    
    queue->enqueue("A");
    queue->enqueue("B");
    queue->enqueue("C");
    queue->enqueue("D");
    
    queue->display_queue();
    cout << endl;
    
    queue->peek();
    cout<<endl;
    
    queue->dequeue();
    cout<<endl;
    
    queue->display_queue();
    
    return 0;
}