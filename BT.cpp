#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root)
{
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"Enter the data for inserting at the left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter the data for inserting at the right of "<<data<<endl;
    root->right=buildtree(root->right);

}

void buildlevelordertraversal(node* &root)
{
    queue<node*> q;
    int data;
    cout<<"Enter the data for root"<<endl;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty())
    {
        node * temp=q.front();
        q.pop();
        cout<<"Enter the data for inserting at the left of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter the data for inserting at the right of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }

}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void inorderleaf(node* root,int &cnt)
{
    if(root==NULL)
    {
        return;
    }
    inorderleaf(root->left,cnt);
    if(root->left==NULL && root->right==NULL)
    cnt++;
    inorderleaf(root->right,cnt);
}

int countnoofleafnode(node* root)
{
    int cnt=0;
    inorderleaf(root,cnt);
    return cnt;
}

int main()
{
    node* root=NULL;
    //buildlevelordertraversal(root);
    root=buildtree(root);
    cout<<countnoofleafnode(root)<<endl;
    
    cout<<"In order traversal is : "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Pre order traversal is : "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Post order traversal is : "<<endl;
    postorder(root);
}
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1