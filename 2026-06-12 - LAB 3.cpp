#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string name;
    Node* next = NULL;
    
    Node(string n = ""
    {
        name = n;
        next = NULL;
    }
    
    // VOID INSERTION
    void insertion(Node* &head, string name)
    {
        Node* newNode = new Node(name);
        
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node* temp = head;
            
            while(temo->next != NULL)
            {
                temp = temp->next;
            }
            
            temp->next = newNode;
        }
    }
    
    //VOID DELETION
    void deletion(Node* &head, string name)
    {
        if(head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        
        // to delete first Node
        if(head->name == name)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
            returm;
        }
        
        Node* current = head;
        
        while(current->next->name == name)
        {
            if(current->next->name == name)
            {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
                return;
            }
            
            current = current->next;
        }
        
        cout << "Name not found" << endl;
    }
    //VOID DISPLAY LIST --> HW 
    void display_list(Node* head)
    {
        Node* display_node = head;
        
        while(display_node != NULL)
        {
            cout << display_node->name << endl;
            display_node = display_node->next;
        }
    }
};

int main()
{
    Node* head = NULL;
    
    // for insertion
    head->insertion(head, "Aimar");
    head->insertion(head, "Ahmad");
    head->insertion(head, "Anjana");
    head->insertion(head, "Jessy");
    
    cout << "Linked List: " << endl;
    head->display_list(head);
    
    // for deletion
    cout << "\nAfter deleting Ahmad:" << endl;
    
    head->display_list(head);
    
    return 0;
    
}