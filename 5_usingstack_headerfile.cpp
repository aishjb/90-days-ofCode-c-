
#include<iostream>
using namespace std;
#include <stack>
int main()
{
    stack<int>s;  //bcz it uses template
    s.push(11);
    s.push(12);
    s.push(13);
    cout<<s.top()<<endl;
    s.push(15);
    s.pop();
    cout<<"size" <<s.size()<<endl;
    bool ans=s.empty();
    cout<<"empty"<<ans;
    return 0;
}
