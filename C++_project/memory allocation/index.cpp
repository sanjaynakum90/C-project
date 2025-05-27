#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int ele)
    {
        this->data = ele;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *HEAD;
    int size;

    LinkedList()
    {
        this->HEAD = NULL;
        this->size = 0;
    }

    void insertAtBeginning(int ele)
    {
        Node *newNode = new Node(ele);
        newNode->next = this->HEAD;
        this->HEAD = newNode;
        this->size++;
    }

    void search(int key); // Function declaration
    void reverse();       // Function declaration
    void delStartNode();
    void delEndNode();
    void display();
};

// Function definition outside class
void LinkedList::search(int key)
{
    Node *temp = HEAD;
    while (temp)
    {
        if (temp->data == key)
        {
            cout << "Element found: " << key << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Element not found!" << endl;
}

void LinkedList::reverse()
{
    Node *prev = nullptr;
    Node *current = HEAD;
    Node *next = nullptr;

    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    HEAD = prev;
    cout << "List reversed!" << endl;
}

void LinkedList::delStartNode()
{
    if (!HEAD)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node *ptr = HEAD;
    HEAD = ptr->next;
    delete ptr;
    size--;
}

void LinkedList::delEndNode()
{
    if (!HEAD)
    {
        cout << "List is empty!" << endl;
        return;
    }
    if (!HEAD->next)
    {
        delete HEAD;
        HEAD = NULL;
        size--;
        return;
    }
    Node *ptr = HEAD;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    delete ptr->next;
    ptr->next = NULL;
    size--;
}

void LinkedList::display()
{
    if (!HEAD)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node *ptr = HEAD;
    cout << "Linked List: ";
    while (ptr != NULL)
    {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    LinkedList list;
    int choice = -1;

    while (choice != 0)
    {

        int ele;
        cout << "\n1. Insert at Beginning";
        cout << "\n2. Search Element";
        cout << "\n3. Delete Node";
        cout << "\n4. Reverse Linked List";
        cout << "\n5. Display List";
        cout << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element to insert: ";
            cin >> ele;
            list.insertAtBeginning(ele);
            break;
        case 2:
            cout << "Enter element to search: ";
            cin >> ele;
            list.search(ele);
            break;
        case 3:
            int delChoice;
            cout << "\n1 1 to delete node at start2 of List...!";
            cout << "\n2 to delete node at end of List...!";
            cout << "Enter your choice: ";
            cin >> delChoice;

            switch (delChoice)
            {
            case 1:
                list.delStartNode();
                break;
            case 2:
                list.delEndNode();
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
            }
            break;
        case 4:
            list.reverse();
            break;
        case 5:
            list.display();
            break;
        case 6:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    }
    return 0;
}