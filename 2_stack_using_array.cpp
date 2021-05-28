#include<iostream>
using namespace std;
#include<climits>
class stackusingarray
{
private:
    int *data;
    int nextindex;
    int capacity;

public:
stackusingarray(int totallength)
{
    data=new int[totallength];
    nextindex=0;
    capacity=totallength;
}

void push(int ele)
{
 if(nextindex==capacity)
 {
     cout<<"stack is full";
 }
 else
    data[nextindex]=ele;
    nextindex++;

}

int pop()
{
if(isempty())
{
  cout<<"stack is empty";
  return INT_MIN;
}
else
{
    nextindex--;
    return data[nextindex];
}
}



int top()
{
    return data[nextindex-1];
}





bool isempty()
{
 if (nextindex==0)
 {
     cout<<"stack underflow";
     return true;
 }
 else
     return false;

}


int size()
{
    return nextindex;
}



};

int main()
{
 stackusingarray s(3);
 s.push(10);
 s.push(20);
 s.push(25);
 s.push(78);
 cout<<s.pop()<<endl;
 cout<<s.pop()<<endl;
 cout<<s.top()<<endl;
 return 0;
}
