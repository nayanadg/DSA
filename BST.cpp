#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertintobst(Node* root,int data)
{
    //Base case
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }
    else if(data>root->data)
    {
        root->right=insertintobst(root->right,data);
        return root;
    }
    else
    {
        root->left=insertintobst(root->left,data);
        return root;
    }
}

//recursion case
/*bool searchinbst(Node* root,int x)
{
    if(root==NULL)
    return false;
    if(root->data==x)
    return true;
    if(root->data>x)
    {
       return searchinbst(root->left,x);
    }
    else
    {
        return searchinbst(root->right,x);
    }
}*/

//Iterative case
bool searchinbst(Node* root,int x)
{
    Node* temp=root;
    while(temp!=NULL)
    {
        if(temp->data==x)
        return true;
        if(temp->data>x)
        temp=temp->left;
        else
        temp=temp->right;
    }
    return false;
}

Node* minval(Node* root)
{
    Node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}

Node* maxval(Node* root)
{
    Node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}

Node* deletefrombst(Node* root,int val)
{
    if(root==NULL)
    return root;
    if(root->data==val)
    {
        //0 node
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }

        //1node
        if(root->left!=NULL && root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }

        //2node
        if(root->left!=NULL && root->right!=NULL)
        {
            int mini=minval(root->right)->data;//finding minmum value from right side (or we can find maximum value form the left also)
            root->data=mini;
            root->right=deletefrombst(root->right,mini);
            return root;
        }
    }
    else if(root->data>val)
    {
        root->left=deletefrombst(root->left,val);
        return root;
    }
    else 
    {
        root->right=deletefrombst(root->right,val);
        return root;
    }
}

void getinput(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=insertintobst(root,data);
        cin>>data;
    }
}

int main()
{
    Node* root = NULL;
    cout<<"Enter data to create BST : "<<endl;
    getinput(root);
    cout<<"Status of the element is : "<<searchinbst(root,25)<<endl;
    cout<<"Minimum value is : "<<minval(root)->data<<endl;
    cout<<"Maximum value is : "<<maxval(root)->data<<endl;
    root=deletefrombst(root,25);
    cout<<"Status of the element is : "<<searchinbst(root,25)<<endl;
    cout<<"Minimum value is : "<<minval(root)->data<<endl;
    cout<<"Maximum value is : "<<maxval(root)->data<<endl;
    return 0;
}
//40 30 50 25 35 45 60 -1