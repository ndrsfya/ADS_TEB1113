#include <iostream>
#include <string>

using namespace std;

//stack (array)
class Stack
{
    public: 
        string stack[5];
        int top = -1;
        int curr_node = -1;
    
    void push(string name)
    {
        if(top == 4) // will stop from adding more
        {
            cout << "Stack is full" << endl;
        }
        
        else
        {
            curr_node++;
            top++;
            stack[curr_node] = name;
        }
    }
    
    void pop() // to delete from stack
    {
        if(top == -1) // indicate to users that the stack is empty 
        {
            cout << "Stack is empty" << endl; 
        }
        else
        {
            curr_node--;
            top--;
        }
    }

    void peek()
    {
        if(curr_node == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Top: " << stack[curr_node] << endl;
        }
    }
    
    void display_stack() // to display stack
    {
        int display_node = curr_node;
        
        while(display_node >= 0)
        {
            cout << stack[display_node] << endl;
            display_node--;
        }
    }
};

int main()
{
    Stack* stack = new Stack();
    
    stack->push("A");
    stack->push("B");
    stack->push("C");
    stack->push("D");
    
    stack->display_stack();
    cout << endl;
    
    stack->peek();
    cout << endl;
    
    stack->pop();
    cout << endl;
    
    stack->display_stack();
}
