#include<iostream>
using namespace std;

template <typename T,typename V>
class pairs
{
T x;
V y;
public:
    void setx(T x)
    {
        this->x=x;
    }
    T getx()
    {
        return x;
    }

    void sety(V y)
    {
        this->y=y;
    }
    V gety()
    {
        return y;
    }
};

int main()
{
    pairs<int,string>p1;
    p1.setx(100);
    p1.sety("aish");
    cout<<p1.getx()<<endl;
    cout<<p1.gety()<<endl;


    cout<<"using triplate"<<endl;


    pairs <pairs<int,double>,double> p4;
    p4.sety(400.444);
    pairs<int,double>p2;
    p2.setx(11);
    p2.sety(12);
    p4.setx(p2);
    cout<<p4.getx().getx()<<endl;
    cout<<p4.getx().gety()<<endl;
    cout<<p4.gety();



    return 0;
}
