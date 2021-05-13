#include <iostream>

using namespace std;

struct Node {
    const char* element;
    Node* next;

    Node(const char* e = NULL, Node* n = NULL)
    {
        element = e;
        next = n;
    }
};

struct SLinkedList {
    Node * head;
    Node * tail;
    long size;
    SLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void destructor(Node * node) {
        if(node != NULL){
            cout << "freeing "<< node->element << endl;
            free(node->next);
            delete node;
        }
    }
    ~SLinkedList() {
        cout << "Destructor of linked list";
        free(head);
    }
    void addFirst(const char* s)
    {
       head = new Node(s, head);
       if(tail == NULL) tail = head;
    }
    void addLast(const char* s){
        Node *newNode = new Node(s, NULL);
        if(head == NULL) head = newNode;
        else tail->next = newNode;
        tail = newNode;
    }
    const char* removeFirst() {
        if(head == NULL) {
            return NULL;
        }
        Node * oldHead = head;
        head = head->next;
        const char* oldElement = oldHead->element;
        delete oldHead;
        return oldElement;
    }
    const char * removeLast() {
        Node * p = head;
        while(p->next != tail) {p = p->next;}
        const char * oldData = tail->element;
        delete tail;
        tail = p;
        tail->next = NULL;
        return oldData;
    }
    void printf() {
        for(Node *p = head; p != NULL; p = p->next) {
            cout << p->element << ".";
        }
        cout << endl;
    }
};

int main()
{
    SLinkedList der;

    der.addFirst("Vienna");
    der.printf(); cout << endl;
    der.addFirst("NY");
    der.printf(); cout << endl;
    der.addLast("Roma");
    der.printf();

    const char * s = der.removeFirst();
    der.printf(); //Vienna
    cout << s << endl; //NY

    const char * s = der.removeLast();
    der.printf();
    cout << s << endl << endl;

    Node * node = der.head;
    //while (node != NULL) {der.destructor(node); node = node->next;}
    return 0;
}