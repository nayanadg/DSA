#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//-------------------------------------------------EASY------------------------------
// 1 find minimum and maximum in an array
/*struct Pair
{
    int min;
    int max;
};

Pair minmax(int arr[],int n)
{
    struct Pair p;
    if(n==1)
    {
        p.min=arr[0];
        p.max=arr[0];
        return p;
    }
    if(arr[0]>arr[1])
    {
        p.min=arr[1];
        p.max=arr[0];
    }
    else
    {
        p.min=arr[0];
        p.max=arr[1];
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]>p.max)
        {
            p.max=arr[i];
        }
        else if(arr[i]<p.min)
        {
            p.min=arr[i];
        }
    }
    return p;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    struct Pair p=minmax(arr,n);
    cout<<"Minumum "<<p.min<<endl;
    cout<<"Maximum "<<p.max<<endl;
    return 0;
}*/

// Reverse an array

/*int reversearray(int arr[],int start,int end,int n)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"Reverse array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reversearray(arr,start,end,n);
}*/

// Maximum Subarray

/*int maxsubarraysum(int arr[],int n)
{
    int currsum=0;
    int maxsum=0;
    int start=0,end=0,s=0;
    for(int i=0;i<n;i++)
    {
        currsum=currsum+arr[i];
        if(currsum>maxsum)
        {
            maxsum=currsum;
            start=s;
            end=i;
        }
        if(currsum<0)
        {
            currsum=0;
            s=i+1;
        }

    }
    cout<<"Starting index: "<<start<<endl;
    cout<<"Ending index: "<<end<<endl;
     return maxsum;
}
int main()
{
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=8;
    int max_sum=maxsubarraysum(arr,n);
    cout<<max_sum<<endl;
    //return 0;
}*/

// Contains Duplicate
/*bool containsdup(int arr[],int n)
{
    bool count=false;
    for(int i=0;i<n;i++)//1 2  4
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                return true;
            }
        }
    }
    return count;
}
int main()
{
    int n=4;
    int arr[]={1,2,2,4};
    bool x=containsdup(arr,n);
    cout<<x<<endl;
}*/

// Chocolate distribution problem
//  Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:
//  Each student gets one packet.
//  The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.
/*int main()
{
    int arr[]={3,2,7,9,12,4,56};
    int n=7;
    sort(arr,arr+n);
    int s;
    cin>>s;
    int z=s-1;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    int curdiff=INT_MAX;
    int i,j;
    i=0;
    j=i+z;
    //cout<<z<<endl;
    while(j<n)
    {
        int diff;
        diff=arr[j]-arr[i];
        if(diff<curdiff)
        {
            curdiff=diff;
        }
        i++;
        j=i+z;
    }
    cout<<curdiff<<endl;

}*/

// Search in Rotated Sorted Array
/*int Search(int arr[],int n,int target)
{
    int low=0,high=n-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target)
        return mid;
        else if(target<arr[mid])
        {
            high=mid-1;
        }
        else if(target>arr[mid])
        {
            low=mid+1;
        }
    }
    return -1;

}

int main()
{
    int arr[]={4,5,6,7,0,1,2};
    int n=7;
    int target;
    cin>>target;
    sort(arr,arr+n);
    cout<<Search(arr,n,target)<<endl;

}*/

//-------------------------------------------------------MEDIUM
// Next Permutation
/*int main()
{
    int arr[]={1,4,6};
    sort(arr,arr+3);
    do
    {
        for(int i=0;i<3;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }while(next_permutation(arr,arr+3));
}*/

// Buy and sell shares
/*int buysell(int arr[], int n)
{
    int maxprofit = 0;
    int sp,bp;
    for (int i = 0; i < n; i++)
    {
        bp=arr[i];
        for (int j = i + 1; j < n; j++)
        {
            sp=arr[j];
            if (sp>bp)
            {
                int profit=sp-bp;
                if(profit>maxprofit)
                maxprofit=profit;
            }
        }
    }
    return maxprofit;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << buysell(arr, n) << endl;
}*/


//Kth Largest Element in an Array
/*int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin>>k;
    if(k>n)
    return -1;
    sort(arr,arr+n);
    cout<<arr[n-k]<<endl;
}*/

//Repeat and Missing Number Array
/*int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
            }
        }
    }
    sort(arr,arr+n);
    int diff=1;
    int i=0,j=1;
    while(j<n)
    {
        int newdiff=arr[j]-arr[i];
        if(newdiff>diff)
        {
            cout<<arr[i]+1<<endl;
        }
        j++;
        i++;
    }
}*/

