#include<iostream>
using namespace std;
#include<queue>

int main()
{
    queue<int>s;
    s.push(40);
    s.push(41);
    s.push(67);
    s.push(40);
    s.push(41);
    s.push(67);
    while(!s.empty())
    {
        cout<<s.front()<<"-";
        s.pop();
    }
   /* s.pop();
    cout<<s.empty();
    cout<<s.size();
    cout<<s.front();*/

    return 0;
}
