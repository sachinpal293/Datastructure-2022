#include "iostream"
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if(next!=NULL)
        {
            delete next;
            next = NULL;
        }

        cout<<"Memory free for node with data "<<value<<endl;
    }
};


void print(Node* head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int getlength(Node* head)
{
    int len = 0;
    Node* temp = head;
    while(temp!=NULL)
   {
     len++;
     temp = temp->next;
   }
  cout<<len<<endl;
}
void insertathead(Node* &head,Node* &tail, int data)
{
    if(head==NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head =temp;
    }
}
void insterattail(Node* &tail,Node* &head,int data)
{
    if(tail==NULL)
    {
     Node* temp = new Node(data);
     tail = temp;
     head=temp;
    }
    else{
    Node* temp = new Node(data);
    tail->next=temp;
    temp->prev = tail;
    tail=temp;
    }
}
void insertatposition(Node* &head,Node* &tail,int position,int data)
{
     if(position==1)
 {
     insertathead(head,tail,data);
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
    insterattail(tail,head,data);
     return;
 }
 // creating  node for data
 Node* NodeToinsert = new Node(data);
 NodeToinsert->next = temp->next;
 temp->next->prev =  NodeToinsert; 
 temp->next = NodeToinsert;
 NodeToinsert->prev = temp;
}


void deletnode(int position, Node* &head)
{
   if(position==1)
   {
    Node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    
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
     curr->prev = NULL;
     prev->next = curr->next;
     curr->next = NULL;   
    delete curr;
   }   
}

int main()
{
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    // getlength(head);

    insertathead(head,tail,15);
    print(head);
    insterattail(tail,head,25);
    print(head);
    // getlength(head);
    insertatposition(head,tail,2,100);
    print(head);

    insertatposition(head,tail,1,200);
    print(head);

    insertatposition(head,tail,10,560);
    print(head);

    deletnode(5,head);
    print(head);
    return 0;
}