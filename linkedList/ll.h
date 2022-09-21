#include <iostream>
using namespace std;
#define item int
class Linkedlist;
class Node
{
    item data;
    Node* next;
    public:
        Node();
        Node(item value);
        friend Linkedlist;
};
class Linkedlist
{
    Node* head;
    public:
        Linkedlist();
        void append(item value);
        void display(); 
        friend Node;
};