#include<iostream>
using namespace std;
#include<queue>
template<typename T>
class binarytreenode
{
    public:
    T data;
    binarytreenode *left;
    binarytreenode *right;

    binarytreenode(T data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }

    ~binarytreenode()
    {
        delete left;
        delete right;
    }
};


 binarytreenode<int>* takeinput()
{
    int rootdata;
    cout<<"enter rootdata"<<endl;
    cin>>rootdata;
    if(rootdata == -1)   //base condition for NULL
       {
        return NULL;

       }
    binarytreenode<int>* root=new binarytreenode<int>(rootdata);
    binarytreenode<int>* leftdata=takeinput();
    binarytreenode<int>* rightdata=takeinput();
    root->left=leftdata;
    root->right=rightdata;
    return root;


}

/*binarytreenode<int>* takeinputlevelwise()
{
    int rootdata;
    cout<<"enetr node"<<endl;
    cin>>rootdata;
    if(rootdata == -1)
    {
        return 0;
    }
    binarytreenode<int>* root=new binarytreenode<int>(rootdata);
    queue<binarytreenode<int>*> pendingnodes;
    pendingnodes.push(root);

    while(pendingnodes.size() != 0)
    {
     binarytreenode<int>* Front=pendingnodes.front();
     pendingnodes.pop();

     cout<<"enter left child of data"<<Front->data<<endl;
     int leftchild;
     cin>>leftchild;
     if(leftchild!=-1)
     {
         binarytreenode<int>* child=new binarytreenode<int>(leftchild);
         Front->left=child;
         pendingnodes.push(child);
     }

     cout<<"enter right child of data"<<Front->data<<endl;
     int rightchild;
     cin>>rightchild;
     if(rightchild!=-1)
     {
         binarytreenode<int>* child2=new binarytreenode<int>(rightchild);
         Front->left=child2;
         pendingnodes.push(child2);
     }
    }
  return root;

}
*/


void printinput(binarytreenode<int>* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" : ";


    if(root->left!=NULL)
    {
        cout<<"L"<<root->left->data<<"";

    }
    if(root->right!=NULL)
    {
        cout<<"R"<<root->right->data;

    }
    cout<<endl;
    printinput(root->left);
    printinput(root->right);

}

int totalnode(binarytreenode<int>* root)
{
    if (root==NULL)
    {
        return 0;
    }
    else
        return 1+totalnode(root->left)+totalnode(root->right);
}


void inorder(binarytreenode<int>* root)
{
    if(root==NULL)
    {
        return ;
    }
    else
     inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(binarytreenode<int>* root)
{
    if(root==NULL)
    {
        return ;
    }
    else
    cout<<root->data<<" ";
     preorder(root->left);
    preorder(root->right);
}

void postorder(binarytreenode<int>* root)
{
    if(root==NULL)
    {
        return ;
    }
    else
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}




int main()
{
    binarytreenode<int>* root=takeinput();
    //binarytreenode<int>* root=takeinputlevelwise();
    printinput(root);
    int ans;
    ans=totalnode(root);
    cout<<"total no of elements in binary tree"<<ans<<endl;
    cout<<"inorder"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"posteorder"<<endl;
    postorder(root);


    delete root;
    return 0;
}
