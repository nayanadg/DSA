#include <iostream>
#include<string>
#include <bits/stdc++.h>
#include<cstring>
#include <regex>  
#include<stack>  
using namespace std;

//-----------------------------------------------------------BASIC 1---------------------------
/*
int main()
{
    string str;
    string str1(5,'n');//five n's will be printed
    cout<<str1<<endl;
    string str2="hello world";
    cout<<str2<<endl;
    string str3;
    cout<<"Enter a string"<<endl;
    getline(cin,str3);
    cout<<str3<<endl;
}*/

/*int main()
{
    string s1="fam";
    string s2="ily";
    //s1.append(s2);
    cout<<s1+s2<<endl;
}*/

/*int main()
{
    string str="abc";
    cout<<str<<endl;
    str.clear();
    if(str.empty())
    {
        cout<<"String is empty"<<endl;
    }

}*/

/*int main()
{
    string str="abcdefghijklmn";
    // str.erase(3,3);//syntax erase(index,no. of char)
    // cout<<str<<endl;
    str.find("def");
    cout<<str.find("def")<<endl;
}*/

/*int main()
{
    string str="poiuytrewas";
    string s= str.substr(6,4);
    cout<<s<<endl;
}*/

/*int main()
{
    string str="789";
    int x=stoi(str);
    cout<<x+2<<endl;
    int str2 =786;
    cout<<to_string(str2)+"2"<<endl;
    string str3 ="sdyyewgwjknsa";
    sort(str3.begin(),str3.end());
    cout<<str3<<endl;

}*/


//--------------------------------------------------BASIC 2 ----------------------------------------------
/*int main()
{
    string str="sdjdhusdyshs";
    //to upper case
    for(int i=0;i<str.size();i++)
    {
        str[i]=str[i]-32;
    }
    cout<<str<<endl;
    //to lower case
    for(int i=0;i<str.size();i++)
    {
        str[i]=str[i]+32;
    }
    cout<<str<<endl;

    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;

}*/

//Form the biggest number
/*int main()
{
    string str="563214899";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;

}*/

//Find the frequency and the number
/*int main()
{
    string str="sdhnsudfhfuy";
    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<str.size();i++)
    {
        freq[str[i]-'a']=freq[str[i]-'a']+1;
    }
    char ans='a';
    int maxf=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxf)
        {
            maxf=freq[i];
            ans=i+'a';
        }
    }

    cout<<maxf<<"  "<<ans<<endl;

}*/


//Length of an array

/*int length(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cin>>name;
    //name[2]='\0';
    //cout<<"Your name is: "<<name<<endl;
    cout<<"Length is: "<<length(name)<<endl;
}*/


//Reverse a string

/*int reverse(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(name[s++],name[e--]);
    }
}

int main()
{
    char name[20];
    cin>>name;
    int n;
    cin>>n;
    reverse(name,n);
    cout<<name<<endl;

}*/


//check string is a palindrome
//input Noon does not work
/*bool palindrome(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(name[s]==name[e])
        {
            s++;
            e--;
        }
        else{
           // cout<<"no";
           return 0;
        }
    }
    return 1;
}

int main()
{
    char name[20];
    cin>>name;
    int n;
    cin>>n;
    cout<<"Palindrom : "<<palindrome(name,n);
    return 0;

}*/

//upper to lower  ch-'A'+'a'
//lower to upper ch-'a'+'A'

/*char tolower(char ch)
{
    if(ch>='a'&& ch<='z')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool palindrome(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(tolower(name[s])==tolower(name[e]))
        {
            s++;
            e--;
        }
        else{
           // cout<<"no";
           return 0;
        }
    }
    return 1;
}

int main()
{
    char name[20];
    cin>>name;
    int n;
    cin>>n;
    cout<<"Palindrom : "<<palindrome(name,n);
    return 0;

}*/

//------------------------------------------------------------------------Questions
//Valid palindrome
/*int main()
{
    string s="race a car";
    //getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    s.erase(remove(s.begin(), s.end(), ' '),s.end());
    s.erase(remove(s.begin(), s.end(), ':'),s.end());
    s.erase(remove(s.begin(), s.end(), ','),s.end());
    cout<<s<<endl;
    int len=s.length();
    bool ispalindrome=true;
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-1-i])
        {
            ispalindrome=false;
            break;
        }
    }
    if(ispalindrome)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
}*/

//valid anagrams
/*int main()
{
    string s="rat";
    string t="car";
    bool exp=true;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s.length()!=t.length())
    {
        cout<<"false"<<endl;
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=t[i])
        {
            exp=false;
            break;
        }
    }
    if(exp)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
}*/

//Valid Parentheses
/*int main()
{
    string s,x;  
    cin>>s>>x;              //s is the string , x is the substring
    int a,l; 
    
    l=x.length();
    while(true)
    {
        a=s.find(x);
        if(a==-1)
        {break;}                       // if substring is not found
        else
        {
            //erase(index, length)
            s.erase(a,l);                  //if substring is found 
        }
    }
    if(s.length()==0)                  // if string length becomes null printing 0 
        cout<<"true"<<"\n";      
    else 
        cout<<"false"<<endl;     
}*/   

//Remove Consecutive Characters

/*int main()
{
    string s="aabbssxdcc";
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]==s[i+1])
        {
            s.erase(i,1);
        }
        len=s.length();
    }
    cout<<s<<endl;
}*/


//Longest common prefix
/*string longestprefix(string s[],int n)
{
    if(n==0)
    {
       // return ;
    }
    if(n==1)
    {
        return s[0];
    }
    sort(s,s+n);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    int minstr=min(s[0].length(),s[n-1].length());
    cout<<minstr<<endl;
    int count=0,i=0;
    for(i=0;i<minstr;i++)
    {
        if(s[0][i]==s[n-1][i])
        {
            count++;
        }
    }
    cout<<count<<endl;
    string ans=s[0].substr(0,count);
    cout<<ans<<endl;

}

int main()
{
    string s[4]={"flower","flow","flight","fwo"};
    int n=4;
    cout<<longestprefix(s,n)<<endl;
    
}*/


//Print all duplicates in the input string
/*string duplicate(string str)
{
    int len=str.length();
    int arr[26];
    int count[26];
    for(int i=0;i<26;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<len;i++)
    {
        char c=str[i];
        int index= c-'a';
        count[index]++;
        // if(count[index]>1)
        // {
        //     cout<<c<<" ";
        // }
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]>1)
        {
            char c=i+'a';
            cout<<c<<" "<<count[i]<<endl;
        }
    }
    
}*/

/*string duplicate(string str,int n)
{
    char ch[n];
    for(int i=0;i<n;i++)
    {
        ch[i]=str[i];
    }
    sort(ch,ch+n);
    for(int i=0;i<n;i++)
    {
        if(ch[i]==ch[i+1])
        {
            cout<<ch[i]<<" ";
        }
    }
}*/

/*int main()
{
    string str="ihdhhyhhdd";
    int n=str.length();
    // char c=str[1];
    // int index=c-'a';
    // cout<<index;
    //cout<<str[1];
    duplicate(str);
}*/

//Longest Substring Without Repeating Characters
/*string longstring(string str)
{
    string ans="";
    int len=str.length();
    ans=ans+str[0];
    int anslen=ans.length();
    for(int i=1;i<len;i++)
    {
        if(ans.find(str[i])<anslen)
        {
            return ans;
        }
        else
        {
            ans=ans+str[i];
            anslen=ans.length();
        }
    }
}
int main()
{
    string str="abcabcbb";
    cout<<longstring(str);
    return 0;
}*/


/*string replace(string s,int k)
{
    int alpha=repeatingchar(s,k);
    char c=alpha+'a';
    int count=0;

}


int minrepeatingchar(string s,int k)
{
    int len=s.length();
    int store[26];
    int minindex=INT_MAX;
    for(int i=0;i<26;i++)
    {
        store[i]=0;
    }
    for(int i=0;i<26;i++)
    {
        char c=s[i];
        int index=c-'a';
        store[index]=store[index]+1;
    }
    for(int i=0;i<26;i++)
    {
        if(store[i]!=0)
        {
            if(store[i]<minindex)
            {
                minindex=i;
            }
        }
    }
    return minindex;
}

int main()
{
    string str="abab";
    int k=2;
    repeatingchar(str,k);
}*/

//remove recursively adjacent duplicate

/*void removedup(string str)
{
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]==str[i+1])
        {
            str.erase(i,1);
        }
        len=str.length();
    }
    cout<<str<<endl;
}
int main()
{
    string str="geeksforgeeks";
    removedup(str);
}*/

//rotate by two places or not

/*string rotate(string a,string b)
{
    if(a.length()!=b.length())
    {
        cout<<"No"<<endl;
    }
    string c="";
    int x=a.length()-2;
    c.append(a,2,x);
    c.append(a,0,2);
    if(c==b)
    {
        cout<<c<<endl;
    }
    else
    cout<<"false"<<endl;
    
    
}

int main()
{
    string a="amazon";
    string b="azonam";
    rotate(a,b);
    return 0;
}*/

//longest non reapeting prefix

/*string longest(string str)
{
    int len=str.length();
    string c="";
    //c.append(str,0,1);
    for(int i=0;i<len;i++)
    {
        int lenc=c.length();
        int x=c.find(str[i]);
        if(x>=0 && x<lenc)
        {
            return c;
        }
        else
        {
            c.append(str,i,1);
        }

    }
    return c;

}

int main()
{
    string str="geeksforgeeks";
    cout<<longest(str);
}*/


//---------------------------------------------------------GFG
//Reverse words in a given string
/*string reverse(string s)
{
    stack<string> str;
    for(int i=0;i<s.length();i++)
    {
        string word="";
        while(s[i]!=' ' && i<s.length())
        {
            word=word+s[i];
            i++;
        }
        str.push(word);
    }
    while(!str.empty())
    {
        cout<<str.top()<<" ";
        str.pop();
    }
    cout<<endl;
}

int main()
{
    string s = "geeks quiz practice code" ;
    reverse(s);
}*/

//Find the minimum distance between the given two words
/*int mindist(string s[],string word1,string word2)
{
    int d1=-1,d2=-1;
    int ans=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(s[i]==word1)
        d1=i;
        if(s[i]==word2)
        d2=i;
        if(d1!=-1 && d2!=-1)
        ans=min(ans,abs(d1-d2));
    }
    cout<< ans;
}

int main()
{
    string s[5]={"geeks","for","geeks","contribute","practice"};
    string word1="geeks", word2 = "practice";
    mindist(s,word1,word2);
}*/

/*int isdivisible(int num)
{
    if(num<0)
    return isdivisible( -num);
    if(num==0 || num==7)
    return 1;
    if(num<10)
    return 0;

    return isdivisible( num / 10 - 2 *( num - num / 10 * 10 ) );
}

int main()
{
    int num = 616;
    if(isdivisible(num))
    cout<<"D";
    else
    cout<<"ND";
}*/

