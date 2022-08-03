#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

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
            next = NULL;
        }

        cout<<" memory is free for node with data "<<value<<endl;
    }
};
void insertNode(Node* &tail, int element, int data)
{
  //assuming that the element is present in the list
  if(tail==NULL)
  {
    Node* newNode = new Node(data);
    tail = newNode;
    newNode-> next = newNode;
  } 
  else
  {
    //None empty list
    //assuming that the elements is present in the list
    Node* curr = tail;
    while(curr->data!=element)
    {
        curr = curr->next;
    }

    //element found -> curr is representing element wala node
    Node* temp = new Node(data);
    temp->next = curr->next;
    curr->next = temp;
  }
}
void print(Node*  tail)
{
    Node* temp = tail;
    // cout<<tail->data<<endl;
    if(tail==NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }
    do
    {
     cout<<tail->data<<" ";
     tail= tail->next;
    }while(tail!=temp);
    cout<<endl;
}
void deletion(Node* &tail, int value)
{
  if(tail==NULL)
  {
    cout<<"List is empty please check again"<<endl;
  }
  else
  {

   // Assuming that value is present in the linked list
   Node* prev  = tail;
   Node* cur = prev->next;

   while(cur->data!=value)
   {
    prev = cur;
    cur= cur->next;
   }

   prev->next = cur->next;
   // 1 Node linked list
   if(cur==prev)
   {
    tail = NULL;
   }
   //>=2 node linked list
   if(tail==cur)
   {
    tail = prev;
   }
   cur->next = NULL;
   delete cur;
  }
}
int main()
{
   Node* tail = NULL;

   insertNode(tail,5,2);
   insertNode(tail,2,5);
//    insertNode(tail,5,7);
//    insertNode(tail,2,10);
   deletion(tail,2);
   deletion(tail,5);
   print(tail);

   return 0;
}