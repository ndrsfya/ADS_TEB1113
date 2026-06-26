#include <iostream>
#include <string>

using namespace std;

//stack (linked list)
class Stack
{
    public: 
        string name;
        Stack* next = NULL;
        Stack* curr_node = NULL;

    void push(string name) // push method -> adding
    {
        Stack* newnode = new Stack();
        newnode->name = name;
        newnode->next = curr_node;
        curr_node = newnode;
    }

    
    void display_stack()
    {
        Stack* display_node = curr_node;
        while(display_node != NULL)
        {
            cout << display_node->name << endl;
            display_node = display_node->next;
        }
    }
    
    void pop() // delete method
    {
        Stack* delete_node = curr_node;
        curr_node = curr_node->next;
        
        delete delete_node;
        
    }
    
    void peek() 
    {
        if(curr_node == NULL)
        {
            cout << "Empty Stack" << endl;
        }
        else
        {
            cout << "The top element is: " << curr_node->name << endl;
        }
        
    }
    
    
};

int main() {
  Stack* stack = new Stack();

  stack->push("A");  
  stack->push("B"); 
  stack->push("C"); 
  stack->push("D"); 

  stack->display_stack();
  cout << endl;
  
  stack-> peek();
  cout << endl;
  
  stack->pop();
  cout << endl;
  
  stack->display_stack();
  
}