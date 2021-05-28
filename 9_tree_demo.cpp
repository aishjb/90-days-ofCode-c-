#include<iostream>
using namespace std;
#include<vector>

template<typename T>
class treenode
{
    public:
    T data;
    vector<treenode<T>*> children;

    treenode(int data)
    {
        this->data=data;
    }
};

void printtree(treenode<int>*root)
{
    cout<<root->data<<":";
    for(int i=0;i< root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;

    for(int i=0;i< root->children.size(); i++)
    {
        printtree(root->children[i]);
    }

}

int main()
{
    treenode<int>* root=new treenode<int>(10);
    treenode<int>* node1=new treenode<int>(20);
    treenode<int>* node2=new treenode<int>(30);
    root->children.push_back(node1);
    root->children.push_back(node2);
    printtree(root);
    return 0;
}
