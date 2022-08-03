#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<" Memory is free for node with data "<<value<<endl;
    }
};
void inserthead(Node* &head, int data)
{
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertheadtail(Node* &tail, int data)
{
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertatposition(Node* &head,Node* &tail,int position,int data)
{
    if(position==1)
    {
        inserthead(head,data);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1)
    {
        if(temp->next==NULL)
        {
            break;
        }
        temp = temp->next;
        cnt++;
    }

    // inserting at last Position
    if(temp->next==NULL)
    {
        insertheadtail(tail,data);
        return;
    }
    // creating  node for data
    Node* NodeToinsert = new Node(data);
    NodeToinsert->next = temp->next;

    temp->next =  NodeToinsert; 
}










void deletnode(int position, Node* &head)
{
   if(position==1)
   {
    Node* temp = head;
     head = head->next;
     //memory free
    temp -> next = NULL;
    delete temp;
   }
   else
   {
    // deleteing any middle or last node
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt<position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
   if(curr->next != NULL){
    prev->next = curr->next;
    curr->next = NULL;
   }
   prev->next = NULL;
    delete curr;
   }   
}

void printnode(Node* &head)
{
   Node* temp = head;
   while(temp != NULL)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   }

   cout<<endl;
}

int main()
{
    Node* node1  = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;


    // head pointed to node1;
    Node* head = node1;
    Node* tail = node1;
    printnode(head);

    inserthead(head,25);
    insertheadtail(tail,12);
    printnode(head);

   
    // insertheadtail(tail,15);

    insertatposition(head,tail,3,75);
    printnode(head);

    deletnode(4,head);
    printnode(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    return 0;
}