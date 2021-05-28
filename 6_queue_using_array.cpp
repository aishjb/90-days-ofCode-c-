#include<iostream>
using namespace std;

class queueusingarray
{
public:
int *data;
int nextindex;
int firstindex;
int Size;
int capacity;

public:
    queueusingarray(int s)
    {
        data=new int[capacity];
        nextindex=0;
        firstindex=-1;
        Size=0;
        capacity=s;
    }
int getsize()
{
    return Size;
}
bool isempty()
{
    return Size==0;
}
void enqueue(int ele)
{
if(Size==capacity)
{
    int *newdata=new int[capacity*2];
    int j=0;
    for(int i=firstindex;i<capacity;i++)
    {
      newdata[j] =data[i];
      j++;
    }
    for(int i=0;i<firstindex;i++)
    {
        newdata[j]=data[i];
        j++;
    }
    delete [] data;
    data=newdata;
    firstindex=0;
    nextindex=capacity;
    capacity=capacity*2;



}
else
  data[nextindex]=ele;
  nextindex=(nextindex + 1)%capacity;
  if(firstindex==-1)
    firstindex=0;
Size++;
}

int Front()
{
    if(isempty())
    {
        cout<<"empty ";
        return 0;
    }
    else
        return data[firstindex];
}

int dequeue()
{
    if(isempty())
    {
        cout<<"empty ";
        return 0;
    }
    int ans=data[firstindex];
    firstindex=(firstindex+1) % capacity;
    Size--;
    if(Size==0)
    {
        firstindex=-1;
        nextindex=0;
    }
    return ans;
}




};
int main()
{
    queueusingarray s(4);
    s.enqueue(40);
    s.enqueue(80);
    s.enqueue(120);
    s.enqueue(160);
    s.enqueue(4);
    s.enqueue(8);
    s.enqueue(12);
    s.enqueue(16);
    cout<<s.dequeue()<<endl;
    cout<<s.isempty()<<endl;
    cout<<s.getsize()<<endl;
    cout<<s.Front()<<endl;

    return 0;
}
