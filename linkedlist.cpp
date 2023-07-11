#include<iostream>
using namespace std;


//---------------------------------------------------------Singly Linked List
/*class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free the node with data "<<value<<endl;
    }
};

void insertathead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next= head;
    head=temp;
}

void insertattail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;

}

void insertatposition(Node* &tail,Node* &head,int pos,int data)
{
    if(pos==1)
    {
        insertathead(head,data);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,data);
        return;
    }
    Node* nodetoinsert=new Node(data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}

void deletenode(int pos,Node* &head)
{
    if(pos==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        int cnt=1;
        Node*prev,*curr;
        prev=NULL;
        curr=head;
        while(cnt<pos)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &head)
{
    Node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail=node1;
    //print(head);
    // insertathead(head,100);
    // insertathead(head,12);
    // print(head);
    insertattail(tail,100);
    insertattail(tail,1000);
    insertattail(tail,1456);
    print(head);
    insertatposition(tail,head,3,5);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    // insertatposition(head,tail,3,5);
    // deletenode(4,head);
    // print(head);
    
}*/

//--------------------------------------------------------------Doubly Linked List
/*class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for the node with data "<<value<<endl;
    }

};

int length(Node* head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

void insertathead(Node* &head,Node* &tail,int data)
{
    if(head==NULL)
    {
        Node* temp=new Node(data);
        head=temp;
    }
    else
    {
        Node* temp=new Node(data);
        temp->next=head;
        head->prev=temp;
        //temp->prev=NULL;
        head=temp;
    }
    
}

void insertattail(Node* &head,Node* &tail,int data)
{
    if(tail==NULL)
    {
        Node* temp=new Node(data);
        tail=temp;
        head=temp;
    }
    else
    {
        Node* temp=new Node(data);
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    
}

void insertatposition(Node* &head,Node* &tail,int pos,int data)
{
    if(pos==1)
    {
        insertathead(head,tail,data);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertattail(head,tail,data);
        return;
    }

    Node* newnode=new Node(data);

    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;

}

void deleteNode(Node* &head,Node* &tail,int pos)
{
    
    if(pos==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<pos)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}

void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    cout<<length(head)<<endl;
    insertathead(head,tail,100);
    print(head);
    insertattail(head,tail,1000);
    insertattail(head,tail,789);
    print(head);
    insertatposition(head,tail,1,50);
    print(head);
    deleteNode(head,tail,5);
    print(head);
}*/

//----------------------------------------------------------Circular Linked List
/*class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for the node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int data)
{
    if(tail==NULL)
    {
        Node* newnode=new Node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else
    {
        Node* curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }    
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;

    }
}


void deletenode(Node* &tail,int value)
{
    if(tail==NULL)
    {
        cout<<"Empyt list"<<endl;
        return;
    }
    else
    {
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //if only one node is present we need to delete that means 
        if(curr=prev)
        {
            tail=NULL;//Use this only one node is present else comment it
        }
        if(tail==curr)//to delete 1st node we need to do this
        {
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &tail)
{
    if(tail==NULL)
    {
        cout<<"Empty list"<<endl;
    }
    Node* temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
    
}

int main()
{
    Node* tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    // insertNode(tail,3,5);
    // insertNode(tail,5,6);
    // insertNode(tail,6,7);
    // insertNode(tail,7,8);
    // print(tail);
    deletenode(tail,3);
    print(tail);
}*/

//Questions
//-------------------------------------------------Reverse a Linked List
/*class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertattail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;

}
void print(Node* &head)
{
    Node* curr=head;
    Node* prev=NULL,*next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    while(prev!=NULL)
    {
        cout<<prev->data<<" ";
        prev=prev->next;
    }
    cout<<endl;
}
int main()
{
    Node* node1=new Node(1);
    Node* head=node1;
    Node* tail=node1;
    insertattail(tail,2);
    insertattail(tail,3);
    insertattail(tail,4);
    insertattail(tail,5);
    print(head);

}*/


