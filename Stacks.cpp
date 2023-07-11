#include<iostream>
#include<stack>
using namespace std;

//Using STL
/*int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"Top element is : "<<s.top()<<endl; 
    if(s.empty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"Size of stack is : "<<s.size()<<endl;
}*/

// Harcode Implementation
/*class Stack
{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;

        }
    }
    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"Stack UnderFlow"<<endl;
        }
    }
    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack empty"<<endl;
            return -1;
        }
    }
    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};

int main()
{
    Stack s(5);
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(5);
    s.push(10);
    s.push(15);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    if(s.isempty())
    {
        cout<<"Stack Empty"<<endl;
    }
    else{
        cout<<"Stack not empty"<<endl;
    }


}*/

// Implementaion of two stacks in an array
/*class Stack
{
    public:
    int * arr;
    int top1;
    int size;
    int top2;
    Stack(int size)
    {
        this->size=size;
        top1=-1;
        top2=size;
        arr=new int[size];
    }
    void push1(int element)
    {
        if(top2-top1>1)
        {
            top1++;
            arr[top1]=element;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }
    void push2(int element)
    {
        if(top2-top1>1)
        {
            top2--;
            arr[top2]=element;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }
    int pop1()
    {
        if(top1>=0)
        {
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else
        {
            cout<<"Stack UnderFlow"<<endl;
            return -1;
        }
    }
    int pop2()
    {
        if(top2<size)
        {
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else
        {
            cout<<"Stack UnderFlow"<<endl;
            return -1;
        }
    }
    int peek1()
    {
        if(top1>=0)
        {
            return arr[top1];
        }
        else
        {
            cout<<"Stack UnderFlow"<<endl;
            return -1;
        }
    }
    int peek2()
    {
        if(top2<size)
        {
            return arr[top2];
        }
        else
        {
            cout<<"Stack UnderFlow"<<endl;
            return -1;
        }
    }
    bool isempty1()
    {
        if(top1==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isempty2()
    {
        if(top2==size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s(10);
    s.push1(1);
    s.push1(2);
    s.push1(3);
    s.push2(100);
    s.push2(99);
    s.push2(98);
    cout<<s.pop1()<<endl;
    cout<<s.pop2()<<endl;
}*/

//---------------------------------Using linked list
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

class Stack
{
    public:
    Node* head;
    int size;
    
    Stack(int size)
    {
        this->size=size;
        this->head=NULL;
    }
    void push(int element)
    {
        int cnt=0;
        Node* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            cnt++;
        }
        if(cnt<size)
        {
            Node* newnode=new Node(element);
            if(head==NULL)
            {
                head=newnode;
                return;
            }
            else
            {
                newnode->next=head;
                head=newnode;

            }
            
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop()
    {
        if(head==NULL)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            Node* temp=head;
            cout<<"Popped out element is : "<<temp->data<<endl;
            head=temp->next;
            delete temp;
        }
    }
    void peek()
    {
        if(head==NULL)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            cout<<head->data<<endl;
        }
    }
    bool isempty()
    {
        if(head==NULL)
        {
            return true;
        }
        else return false;
    }
};

int main()
{
    Stack s(5);
    s.push(5);
    // s.push(15);
    // s.push(25);
    // s.push(35);
    // s.push(45);
    // s.push(55);
    s.peek();
    bool ans=s.isempty();
    cout<<ans<<endl;
    s.pop();
    s.pop();
    return 0;
}*/

//-----------------------------------------Method 2 without using size
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

class Stack
{
    public:
    Node* head;
    
    Stack()
    {
        this->head=NULL;
    }
    void push(int element)
    {
        
            Node* newnode=new Node(element);
            newnode->next=head;
            head=newnode;
    }
    void pop()
    {
        if(head==NULL)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            Node* temp=head;
            cout<<"Popped out element is : "<<temp->data<<endl;
            head=temp->next;
            delete temp;
        }
    }
    void peek()
    {
        if(head==NULL)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            cout<<head->data<<endl;
        }
    }
    bool isempty()
    {
        if(head==NULL)
        {
            return true;
        }
        else return false;
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(15);
    s.push(25);
    s.push(35);
    s.push(45);
    s.push(55);
    s.peek();
    bool ans=s.isempty();
    cout<<ans<<endl;
    s.pop();
    s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    return 0;
}*/

//GFG Question
//reverse a string without reversing each word
 /*string reverse(string str)
 {
    int len=str.length();
    string s2="";
    for(int i=len-1;i>=0;i--)
    {
        if(str[i]=='.')
        {
            int sublen=len-i;
            len=i-1;
            s2.append(str.substr(i+1,sublen));
            s2.append(".");
        }
    }
    s2.append(str.substr(0,1));
    return s2;
 }
int main()
{
    string s="i.like.this.program";
    cout<<reverse(s);
}*/

//Longest palindrome substring
