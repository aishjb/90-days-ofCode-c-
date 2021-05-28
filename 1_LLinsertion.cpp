#include<iostream>
using namespace std;

 class Node
{
    public:
    int data;
    Node *next;

    //constructor
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }

 };


 /*Node* printhead()
 {
     int data;
     cin>>data;
     Node *head=NULL;

     while(data!=-1)
     {
      Node *newnode=new Node(data);
      if(head==NULL)
      {
          head=newnode;
      }
      else
      {
          Node *temp=head;
          while(temp->next!=NULL)
          {
              temp=temp->next;

          }
          temp->next=newnode;

      }
      cin>>data;
      }
      return head;
}*/
Node* betterinput()
{

    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail =NULL;

    while(data!=-1)
    {
    // student *s1=new student(11);
    Node *newnode=new Node(data);
        if (head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
cin>>data;
}
return head;
}


Node* reversenode(Node* head)
{
  if(head==NULL || head->next==NULL)
  {
      return head;
  }
    Node* aishhead=reversenode(head->next);
    Node* temp=aishhead;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
   temp->next=head;
   head->next=NULL;

  return aishhead;
  }


Node* deletenode(Node* head,int i)
{
    Node *temp=head;
    int count=0;
    if(i==0)
    {
        head=temp->next;
        return head;
    }
    else
    {
      while(count<i-1)
    {
        temp=temp->next;
        count++;
    }
    temp->next=temp->next->next;

    }


return head;

}

 void printLL(Node *head)
 {
     while(head!=NULL)
     {
         cout<<head->data;
         cout<<"->";
         head=head->next;
     }
 }

Node* insertnode(Node* head,int i,int data)
{
    Node* temp=head;
    Node *newnode=new Node(data);
    int count=0;
    if(i==0)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(count<i && temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL)
    {
    newnode->next=temp->next;
    temp->next=newnode;

    }
    return head;

}

int main()
{
  /*  Node n1(10);
    Node *head=&n1;
    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(50);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

//prinLL*/
//Node *head=printhead();
Node *head=betterinput();
printLL(head);
cout<<"after deletion element at 2nd position"<<endl;
//head=insertnode(head,0,99);
//head=deletenode(head,0);
head=reversenode(head);
printLL(head);


    return 0;
}
