#include <iostream> 
using namespace std; 

class Node { 
public: 
    int data; 
    Node* next; 
    Node() 
    { 
        data = 0; 
        next = NULL; 
    } 
    Node(int data) 
    { 
        this->data = data; 
        this->next = NULL; 
    } 
}; 

class Linkedlist { 
    Node* head; 
  
public: 
    Linkedlist() { head = NULL; } 
    void insertNode(int); 
    void printList(); 
    void reverseList(); 
}; 

void Linkedlist::insertNode(int data) 
{ 
    Node* newNode = new Node(data); 
    if (head == NULL) { 
        head = newNode; 
        return; 
    } 
    Node* temp = head; 
    while (temp->next != NULL) { 
        temp = temp->next; 
    } 
    temp->next = newNode; 
} 

void Linkedlist::printList() 
{ 
    Node* temp = head; 
    if (head == NULL) { 
        cout << "List empty" << endl; 
        return; 
    }  
    while (temp != NULL) { 
        cout << temp->data << " "; 
        temp = temp->next; 
    } 
} 

void Linkedlist::reverseList() {
    if (head == NULL || head->next == NULL) {
        return;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

int main() 
{ 
    Linkedlist list; 
    list.insertNode(1); 
    list.insertNode(2); 
    list.insertNode(3); 
    list.insertNode(4); 
  
    cout << "Elements of the list are: "; 
    list.printList(); 
    cout << endl; 

    list.reverseList(); 

    cout << "Elements of the reversed list are: "; 
    list.printList(); 
    cout << endl; 

    return 0; 
}
