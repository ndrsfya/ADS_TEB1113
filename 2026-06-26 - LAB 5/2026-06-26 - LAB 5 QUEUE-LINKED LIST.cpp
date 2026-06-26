#include <iostream>
#include <string>

using namespace std;

// queue (linked list)

class Queue
{
    public:
    
    string name;
    
    Queue* next = NULL;
    Queue* front = NULL;
    Queue* rear = NULL;
    
    void enqueue(string name) // to add into the Queue
    {
        Queue* newnode = new Queue();
        
        newnode->name = name;
        newnode->next = NULL;
        
        if(rear == NULL) // for empty Queue
        {
            front = rear = newnode;
        }
        else
        {
            rear->next = newnode;
            rear = newnode;
        }
        
    }
    
    void dequeue() // to delete from the Queue
    {
        if(front == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            Queue* delete_node = front;
            cout << "Deleted: " << delete_node->name << endl;
            front = front->next;
            
            if(front == NULL)
            {
                rear = NULL;
            }
            
            delete delete_node;
        }
    }
    
    void peek()
    {
        if(front == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Front: " << front->name << endl;
        }
    }
    
    void display_queue()
    {
        Queue* display_node = front;
        
        while(display_node != NULL)
        {
            cout << display_node->name << endl;
            display_node = display_node->next;
        }
    }
};

int main()
{
    Queue* queue = new Queue();
    
    queue->enqueue("A");
    queue->enqueue("B");
    queue->enqueue("c");
    queue->enqueue("D");
    
    queue->display_queue();
    cout << endl;
    
    queue->peek();
    cout << endl;
    
    queue->dequeue();
    cout << endl;
    
    queue->display_queue();
    
    return 0;
}