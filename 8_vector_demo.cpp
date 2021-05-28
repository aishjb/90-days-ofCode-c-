#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v;

for(int i=0;i<100;i++)
{
    cout<<"capacity"<<v.capacity()<<endl;
    cout<<"size"<<v.size()<<endl;
    v.push_back(i);
}

/*
v.push_back(11);
v.push_back(12);
v.push_back(13);
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<endl;
}
v.pop_back();
cout<<v.size()<<endl;

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<endl;
}

cout<<v[0]<<endl;
cout<<v[1]<<endl;
cout<<v[2]<<endl;
cout<<v.size()<<endl;
//cout<<v.at(5);


*/
return 0;
}
