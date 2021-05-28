#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
Node(int data)
{
    this->data=data;
    next=NULL;
}

};

class Stack
{private:
    Node *head;
    int Size;


public:
    Stack()
    {
        head=NULL;
        Size=0;
    }

    int getsize()
    {
        return Size;
    }

    bool isempty()
    {
        if (Size==0)
        {
            return true;
        }
        else
            return false;
    }

    void push(int data)
    {
        Node *newnode=new Node(data);
        newnode->next=head;
        head=newnode;
        Size=Size+1;
    }

    int pop()
    {
        if(head==NULL)
        {
            return 0;
        }
        else
        {
        int ans=head->data;
        Node *temp=head;
        head=head->next;
        delete temp;
        Size--;
        return ans;
        }


    }

    int top()
    {
        if(head==NULL)
        {
            return 0;
        }
        else
            return head->data;
    }


};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"size of stack"<<s.getsize()<<endl;
    cout<<s.pop()<<endl;;
    cout<<s.pop()<<endl;;
    s.push(200);
    cout<<s.isempty()<<endl;;
    cout<<s.getsize();

    return 0;
}
