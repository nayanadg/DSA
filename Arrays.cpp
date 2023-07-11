#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//-------------------------------------------------EASY------------------------------
// 1 find minimum and maximum in an array
/*int minmax(int arr[],int n)
{
    int resmin=arr[0];
    for(int i=1;i<n;i++)
    {
        resmin=min(resmin,arr[i]);
    }
    cout<<resmin<<endl;
    int resmax=arr[0];
    for(int i=1;i<n;i++)
    {
        resmax=max(resmax,arr[i]);
    }
    cout<<resmax<<endl;
}

int main()
{
    int arr[]={4,487,8,9,61,54,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    minmax(arr,n);
    return 0;
}*/

// Reverse an array

/*int reversearray(int arr[],int start,int end,int n)
{
    while(start<end)
    {
        // int temp=arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;
        // start++;
        // end--;
        swap(arr[start],arr[end]);
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

/*int maxsubarraysum(int arr[],int n)
{
    int maxsum=INT_MIN;
    int sum;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i+1;j<n;j++)
        {
            sum=sum+arr[i]+arr[j];
            if(sum>maxsum)
            {
                maxsum=sum;
            }
            sum=sum-arr[i];
        }
    }
    return maxsum;
}
int main()
{
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;
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
    int arr[]={1,2,3,1};
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
    int arr[]={3,2,1};
    next_permutation(arr,arr+3);
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // do
    // {
    //     for(int i=0;i<3;i++)
    //     {
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;
    // }while(next_permutation(arr,arr+3));
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

//Repeat and Missing Number Array
/*int repeatmissing(int arr[],int n)
{
    sort(arr,arr+n);
    int i=0,j=i+1;
    while(j<n)
    {
        if(arr[j]-arr[i]==0)
        {
            cout<<"Repeating integer is : "<<arr[i]<<endl;
            return arr[i]+1;
        }
        else
        {
            i++;
            j++;
        }
    }
}
int main()
{
    int arr[]={93,95,97,95,94};
    int n=5;
    cout<<"Missing integer is : "<<repeatmissing(arr,n)<<endl;
    return 0;
}*/
//Kth Largest Element in an Array
/*
int main()
{
    
    int arr[]={3,2,1,5,6,4};
    int n=6;
    int k;
    cin>>k;
    if(k>n)
    return -1;
    sort(arr,arr+n);
    cout<<arr[n-k]<<endl;
}*/

//-----------------------------Traping rain water problem
/*int rainwater(int arr[], int n)
{
    int left[n];
    int right[n];
    left[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans+min(left[i],right[i])-arr[i];
    }
    return ans;

}
int main()
{
    int n=12;
    //cin>>n;
    int arr[12]={0,1,0,2,1,0,1,3,2,1,2,1};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans=rainwater(arr,n);
    cout<<ans<<endl;
    return 0;
}*/

//---------------------------------------Product of array except itself
/*void product(int arr[],int n)
{
    int product[n],left[n],right[n];
    left[0]=1,right[n-1]=1;
    for(int i=1;i<n;i++)
    {
        left[i]=arr[i-1]*left[i-1];
    }
    for(int j=n-2;j>=0;j--)
    {
        right[j]=arr[j+1]*right[j+1];
    }
    for(int i=0;i<n;i++)
    {
        product[i]=left[i]*right[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<product[i]<<endl;
    }

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    product(arr,n);
}*/


//--------------------------------------------------Maximum product subarray
/*int subarrayprod(int arr[], int n)
{
    int prod=1;
    int maxprod=INT_MIN;
    for(int i=0;i<n;i++)
    {
        prod=1;
        prod=prod*arr[i];
        for(int j=i+1;j<n;j++)
        {
            prod=prod*arr[i]*arr[j];
            if(prod>maxprod)
            {
                maxprod=prod;
            }
        }
        /*prod=prod*arr[i];
        if(prod>maxprod)
        {
            maxprod=prod;
        }
    }
    return maxprod;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans=subarrayprod(arr,n);
    cout<<ans;
}*/

//--------------------------------Find Minimum in rotated sorted array
/*int main()
{
    int arr[]={3,4,5,1,2,0};
    sort(arr,arr+6);
    cout<<arr[0]<<endl;
}*/

//---------------------------------Given Sum pair

/*bool findpair(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum;
            sum=arr[i]+arr[j];
            if(sum==key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    n=6;
    //cin>>n;
    int arr[n]={11, 15, 6, 8, 9, 10};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    int key;
    cin>>key;
    bool ans=findpair(arr,n,key);
    cout<<ans;
}*/

//-------------------------------------------------------3 Sum

/*void threesum(int arr[],int n)
{
    int ans[3];
    int sum;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=i+2;k<n;k++)
            {
                sum=arr[i]+arr[j]+arr[k];
                if(sum==0)
                {
                   // if(i!=j && i!=k && j!=k)
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }   
            }
            //cout<<endl;
        }
    }
}
int main()
{
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    int arr[]={-1,0,1,2,-1,-4};
    int n=6;
    threesum(arr,n);
}*/

//------------------------------------Container With most water
/*int container(int arr[],int n)
{
    int b,h,v;
    int maxv=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            b=j-i;
            h=min(arr[i],arr[j]);
            v=b*h;
            if(v>maxv)
            {
                maxv=v;
            }
        }
    }
    return maxv;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x=container(arr,n);
    cout<<x;
}*/

//-------------------------------------------------K-th Smallest element
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
    sort(arr,arr+n);
    cout<<arr[k-1];
}*/

//----------------------------------Merge Overlapping
/*int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> a;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >>x>>y;
        a.push_back({x,y});
    }
    sort(a.begin(),a.end());


}*/

//------------------------------------Find minimum number of merge operations to make an array palindrome

/*int merger(int arr[],int n)
{
    int ans=0;
    for(int i=0,j=n-1;i<=j;)
    {
        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }
        else if(arr[i]>arr[j])
        {
            j--;
            arr[j]=arr[j]+arr[j+1];
            ans++;
        }
        else{
            i++;
            arr[i]=arr[i]+arr[i-1];
            ans++;
        }
    }
    return ans;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x=merger(arr,n);
    cout<<x;
}*/

//-------------------------------------Arrange given numbers to form the biggest number | Set 1
/*
int mycompare(string x,string y)
{
    string temp1=x+y;
    string temp2=y+x;
    return temp1>temp2;
}
void largest(vector<string> arr)
{
    sort(arr.begin(),arr.end(),mycompare);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    vector<string> arr;
    arr.push_back("54");
    arr.push_back("546");
    arr.push_back("548");
    arr.push_back("60");
    largest(arr);
    return 0;
}*/


/*int main()
{
    int a,b;
    cin>>a>>b;
    int size=abs(b-a)+1;
    int arr[size];
    for(int i=a;i<=b;i++)
    {
        if(i%2==0 || i%5==0)
        arr[i]=1;
    }
    for(int i=a;i<=b;i++)
    {
        if(arr[i]==1)
        cout<<i<<" ";
    }
}*/

//Longest subarray with sum divisible by K
/*int subarraydiv(int arr[],int n,int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        //count=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum%k==0)
                count=max(count,j-i+1);
        }
    }
    
    return count;
}

int main()
{
    int n;
    n=6;
    int arr[n]={2, 7, 6, 1, 4, 5};
    int k=3;
    int ans=subarraydiv(arr,n,k);
    cout<<"Length : "<<ans<<endl;
    return 0;
}*/

//extra 10

/*void findpeak(int arr[],int n)
{
    int peek=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
            peek=arr[i];
            cout<<i<<endl;
        }
        if(i==n-1)
        {
            if(arr[i]>arr[i-1])
            cout<<i<<endl;
        }
    }
}

int main()
{
    int n=3;
    int arr[n]={3,4,2};
    findpeak(arr,n);
    return 0;
}*/

/*void minelement(int arr[],int n)
{
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Minimum : "<<min<<endl;
}

void maxelement(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Maximum : "<<max<<endl;
}

int main()
{
    int arr[]={1, 6, 46, 34, 23, 13,423, 53, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    // minelement(arr,n);
    // maxelement(arr,n);
    sort(arr,arr+n);
    cout<<"Minimum : "<<arr[0]<<" Maximum : "<<arr[n-1]<<endl;
}*/

/*void reversearray(int arr[],int n)
{
    int front=0,rear=n-1;
    while(front<=rear)
    {
        int temp=arr[front];
        arr[front]=arr[rear];
        arr[rear]=temp;
        front++;
        rear--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1, 2, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    reversearray(arr,n);
}*/

/*void sortfun(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                //swap(arr[i],arr[j]);
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={0, 23, 14, 12, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortfun(arr,n);
}*/

/*int main()
{
    int arr[]={7, 10, 4, 3, 20, 15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<k<<" th smallest element : "<<arr[k-1]<<endl;
    cout<<k<<" th largest element : "<<arr[n-k]<<endl;
}*/


/*void occurance(int arr[],int n,int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            count++;
        }
    }
    cout<<count<<endl;
}

int main()
{
    int arr[]={1, 1, 2, 2, 2, 2, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    occurance(arr,n,k);
    return 0;
}*/

/*void subsum(int arr[],int n,int k)
{
    int sum;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i+1;j<n;j++)
        {
            sum=sum+arr[i]+arr[j];
            if(sum==k)
            {
                cout<<i<<" "<<j<<endl;
            }
            if(sum>k)
            {
                break;
            }
            sum=sum-arr[i];
        }
    }
}

int main()
{
    int arr[]={1, 4, 0, 0, 3, 10, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    subsum(arr,n,k);
    return 0;
}*/

/*void printunion(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<m)
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<n)
    {
        cout<<arr2[j]<<" ";
        j++;
    }

}

void printintersection(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    while (i < m && j < n) 
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else 
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    printunion(arr1,arr2,m,n);
    cout<<endl;
    printintersection(arr1,arr2,m,m);
}*/
