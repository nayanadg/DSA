#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*int binarysearch(int arr[],int n,int key)
{
    int s=0;
    int end=n-1;
    int mid=(s+end)/2;
    while(s<=end)
    {
        //int mid=(s+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>=arr[mid])
        {
            s=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(s+end)/2;
    }
    return -1;
}
int main()
{
    int even[6]={2,6,7,9,11,15};
    int  odd[5]={3,5,7,9,11};
    int index=binarysearch(odd,5,11);
    cout<<index;
}*/

//-------------------------------------------1st and last occurance of a number

/*int firstOccurance(int arr[],int n,int k)
{
    int s=0;
    int end=n-1;
    int mid=(s+end)/2;
    int ans1=-1;
    while(s<=end)
    {
        //int mid=(s+end)/2;
        if(arr[mid]==k)
        {
            ans1=mid;
            end=mid-1;
        }
        if(k>arr[mid])
        {
            s=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(s+end)/2;
    }
    return ans1;
}
int lastOccurance(int arr[],int n,int k)
{
    int s=0;
    int end=n-1;
    int mid=s+(end-s)/2;
    int ans1=-1;
    while(s<=end)
    {
        //int mid=(s+end)/2;
        if(arr[mid]==k)
        {
            ans1=mid;
            s=mid+1;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=s+(end-s)/2;
    }
    return ans1;
}
int main()
{
  int arr[]={1,2,3,3,5};
  int n=5;
  int k=3;
  int index1=firstOccurance(arr,n,k);
  int index2=lastOccurance(arr,n,k);
  //cout<<index2;
  cout<<index1<<" "<<index2<<endl;
  cout<<"Number of 3's are : "<<(index2-index1+1)<<endl;
}*/


//-------------------------------------------Return of pivot element in sorted rotated array
/* int pivot(int arr[],int n)
{
  int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
      if(arr[mid]>=arr[0])
      {
        s=mid+1;
      }
      else
      {
        e=mid;
      }
      mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
  int arr[5]={3,8,10,17,1};
  int n=5;
  int index=pivot(arr,n);
  cout<<index;
}*/

// int main()
// {
//   cout<<"Hello";
// }



//DSA Sheet questions
//Permute two arrays such that sum of every pair is greater or equal to K
/*bool functions(int a[],int b[])
{
  int k =10;
  int sum;
  int maxsum=INT_MIN;
  sort(a,a+4);
  sort(b,b+4,greater<int>());
  for(int i=0;i<4;i++)
  {
    if(a[i]+b[i]<k)
    return false;
  }
  return true;
}

int main()
{
  int a[]={1,2,1,3};
  int b[]={3,3,3,4};
  bool res = functions(a,b);
  cout<<res;
}*/

//Find common elements in three sorted arrays

/*int findCommon(int ar1[],int ar2[],int ar3[],int n1,int n2,int n3)
{
  int i=0,j=0,k=0;
  while(i<n1 && j<n2 && k<n3)
  {
    if(ar1[i]==ar2[j] && ar2[j]==ar3[k])
    {
      cout<<ar1[i]<<" "<<endl;
      i++;
      j++;
      k++;
    }
    else if(ar1[i]<ar2[j])
    i++;
    else if(ar2[j]<ar3[k])
    j++;
    else
    k++;

  }
}

int main()
{
  int ar1[] = { 1, 5, 10, 20, 40, 80 };
  int ar2[] = { 6, 7, 20, 80, 100 };
  int ar3[] = { 3, 4, 15, 20, 30, 70, 80, 120 };
  int n1=6,n2=5,n3=8;
  findCommon(ar1, ar2, ar3, n1, n2, n3);
  return 0;
}*/


//Searching in an array where adjacent differ by at most k

/*int search(int arr[],int n,int x,int k)
{
  int i=0;
  while(i<n)
  {
    if(arr[i]==x)
    {
      cout<<i;
    }
    i=i+max(1,abs(arr[i]-x)/k);
  }
  return -1;
}

int main()
{
  int arr[] = {2, 4, 5, 7, 7, 6};
  int x = 6;
  int k = 2;
  int n = sizeof(arr)/sizeof(arr[0]);
  search(arr,n,x,k);
}*/

//Ceiling in a sorted array

/*int ceiling(int arr[],int n,int x)
{
  if(arr[n-1]==x)
  {
    cout<<"No ceiling valur occur"<<endl;
  }
  for(int i=0;i<n;i++)
  {
    if(arr[i]>x)
    return arr[i];
  }
}

int main()
{
  int arr[] = {1, 2, 8, 10, 10, 12, 19};
  int n = sizeof(arr)/sizeof(arr[0]);
  int x = 3;
  int cvalue=ceiling(arr,n,x);
  cout<<"ceiling value is : "<<cvalue<<endl;
}*/

//Find a pair with the given difference

/*int findPair(int arr[],int n,int diff)
{
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]-arr[j]==diff || arr[j]-arr[i]==diff)
      cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
      //return 0;
    }
  }
}

int main()
{
  int arr[] = { 5, 20, 3, 2, 50, 80 };
  int n = sizeof(arr)/sizeof(arr[0]);
  int diff = 78;
  findPair(arr, n, diff);
  return 0;
}*/

//Majority Element

/*int findMajority(int arr[],int n)
{
  int res[n];
  for(int i=0;i<n;i++)
  {
    res[i]=0;
  }
  for(int i=0;i<n;i++)
  {
    for(int j=1;j<n;j++)
    {
      if(arr[i]=arr[j])
      {
        res[i]=res[i]+1;
      }
    }
    if(res[i]>n/2)
    {
      return arr[i];
    }
  }
  
}

int main()
{
  int arr[] = { 3, 3, 4, 2, 4, 4, 2, 4, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int ans=findMajority(arr,n);
  cout<<ans<<endl;
}*/

//Count triplets with sum smaller than a given value

/*int tripletsum(int arr[],int n,int sum)
{
  int ans=0;
  for(int i=0;i<n;i++)
  {
    int j=i+1;
    int k=n-1;
    while(j<k)
    {
      if(arr[i]+arr[j]+arr[k]>=sum)
      {
        k--;
      }
      else
      {
        ans=ans+(k-j);
        j++;
      }
    }
  }
  return ans;
}
int main()
{
  int arr[] = {5, 1, 3, 4, 7 };
  int n = sizeof arr / sizeof arr[0];
  int sum=12,ans;
  ans=tripletsum(arr,n,sum);
  cout<<ans<<endl;
}*/


//Maximum sum such that no two elements are adjacent
/*int rec(vector<int> &nums,int idx)
{
  if (idx>=nums.size())
  {
    return 0;
  }
  return max(nums[idx]+rec(nums,idx+2),rec(nums,idx+1));
}


int findmax(vector<int> arr,int n)
{
  return rec(arr,0);
}

int main()
{
  vector<int> arr={5, 5, 10, 100, 10, 5};
  int n=arr.size();
  cout<<findmax(arr,n)<<endl;
}*/

//Inversion count

/*int inversioncount(int arr[],int n)
{
  int count=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]>arr[j])
      {
        count++;
      }
    }
  }
  return count;
}
int main()
{
  int arr[3]={10, 10, 10};
  //cout<<arr[0];
  int n=3;
  cout<<inversioncount(arr,n);
}*/

//Find duplicates in O(n) time and O(1) extra space | Set 1

/*void duplicates(int arr[],int n)
{
  int temp[n];
  for(int i=0;i<n;i++)
  {
    temp[i]=1;
  }
  
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        temp[arr[i]]=temp[arr[i]]+1;
      }
      
    }
  }
  for(int i=0;i<n;i++)
  {
   // cout<<temp[i]<<endl;
    if(temp[i]>=2)
    {
      cout<<i<<" ";
    }
  }
}
int main()
{
  int arr[7]={1, 2, 3, 6, 3, 6, 1};
  int n=7;
  duplicates(arr,n);
  return 0;
}*/

// void product(int arr[],int n)
// {
//   for(int i=0;i<n;i++)
//   {
//     int prod=1;
//     for(int j=0;j<n;j++)                       //this method not allowed
//     {
//       prod=prod*arr[j];
//     }
//     cout<<(prod/arr[i])<<endl;
//   }
// }

/*void product(int arr[],int prod[],int n)
{
  int prefix[n],suffix[n];
  prefix[0]=1;
  for(int i=1;i<n;i++)
  {
    prefix[i]=prefix[i-1]*arr[i-1];
  } 
  suffix[n-1]=1;
  for(int i=n-2;i>=0;i--)
  {
    suffix[i]=suffix[i+1]*arr[i+1];
  } 
  for(int i=0;i<n;i++)
  {
    prod[i]=prefix[i]*suffix[i];
  }
}

int main()
{
  int arr[5]={ 1 , 4 , 6 , 2 , 3};
  int n=5;
  int prod[n];
  product(arr,prod,n);
  for(int i=0;i<n;i++)
  {
    cout<<prod[i]<<" ";
  } 
  
}*/

//Make Array Elements Equal
/*int main()
{
  int arr[3]={101,1,100};
  int n=3;
  sort(arr,arr+n);
  int mid=(n/2);
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+abs(arr[i]-arr[mid]);
  }
  cout<<sum<<endl;
}*/

//Check if reversing a sub array make the array sorted

/*bool check(int arr[],int n)
{
  int s=-1,e=-1;
  for(int i=0;i<n-1;i++)
  {
    if(arr[i]>arr[i+1])
    {
      s=i;
      break;
    }
  }
  if(s==-1)
  {
    return true;
  }
  for(int i=n-1;i>s;i--)
  {
    if(arr[i]<arr[i-1])
    {
      e=i;
      break;
    }
  }
  reverse(arr+s,arr+e+1);
  for(int i=0;i<n;i++)
  {
    if(arr[i]>arr[i+1])
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int arr [5] = {1, 2, 4, 5, 3};
  int n=5;
  if(check(arr,n))
  {
    cout<<"True";
  }
  else{
    cout<<"false";
  }
  return 0;
}*/

//Lets first write all the code for linear,binary searches, bubble selction insertion merge quick heap sort

//---------------------------linear search
/*
int linearSearch(int arr[],int n)
{
  int k;
  cin>>k;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==k)
    {
      cout<<"Index : "<<i<<endl;
    }
  } 
}

int main()
{
  int arr[5]={12,8,3,65,9};
  //cout<<arr[0];
  int n=5;
  linearSearch(arr,n);
}*/

//----------------------------Binary Search

/*int binarySearch(int arr[],int n)
{
  int low=0;
  int high=n-1;
  int mid=(low+high)/2;
  int k;
  cin>>k;
  while(low<=high)
  {
    if(arr[mid]==k)
  {
    return mid;
  }
  else if(arr[mid]<k)
  {
    low=mid+1;
  }
  else
  {
    high=mid-1;
  }
  mid=(low+high)/2;
  }

}

int main()
{
  int arr[5]={12,8,3,65,9};
  //cout<<arr[0];
  sort(arr,arr+5);
  int n=5;
  int index=binarySearch(arr,n);
  cout<<index;
}*/

//---------------------------------------------Bubble sort
/*int bubbleSort(int arr[],int n)
{
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(arr[j],arr[j+1]);
      }
    }
  }
}

void printArray(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" "<<endl;
  }
}
int main()
{
  int arr[] = { 5, 1, 4, 2, 8};
  int n=5;
  bubbleSort(arr,n);
  printArray(arr,n);
}*/

//---------------------------Selection Sort

/*int selectionSort(int arr[],int n)
{
  int min,i,j;
  for(i=0;i<n-1;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
    {
      if(arr[j]<arr[min])
      { 
        min=j;
      }
    }
    swap(arr[min],arr[i]);
  }
}

void printArray(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" "<<endl;
  }
}

int main()
{
  int arr[] = { 5, 1, 4, 2, 8};
  int n=5;
  selectionSort(arr,n);
  printArray(arr,n);
}*/

//Merge Sort

/*void merge(int arr[],int l,int mid,int r)
{
  int n1=mid-l+1;
  int n2=r-mid;
  int a[n1];
  int b[n2];
  for(int i=0;i<n1;i++)
  {
    a[i]=arr[l+i];
  }
  for(int j=0;j<n2;j++)
  {
    b[j]=arr[mid+1+j];
  }
  int i=0,j=0,k=l;
  while(i<n1 && j<n2)
  {
    if(a[i]<=b[j])
    {
      arr[k]=a[i];
      i++;
      k++;
    }
    else{
      arr[k]=b[j];
      j++;
      k++;
    }
  }
  while(i<n1)
  {
    arr[k]=a[i];
    i++;
    k++;
  }
  while(j<n2)
  {
    arr[k]=b[i];
    j++;
    k++;
  }
}

int MergeSort(int arr[],int l,int r)
{
  if(l<r)
  {
    int mid=(l+r)/2;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
  }
}


int main()
{
  int arr[] = {57,5,1,6,4};
  MergeSort(arr,0,4);
  for(int i=0;i<5;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;

}*/

//-----------------------------Insertion sort
/*void insertionsort(int arr[],int n)
{
  int i,j,temp;
  for(i=1;i<n;i++)
  {
    temp=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>temp)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=temp;
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
  int arr[]={57,5,1,6,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  insertionsort(arr,n);
}*/

/*int partion(int arr[],int s,int e)
{
  int pivot=arr[s];
  int cnt=0;
  for(int i=s+1;i<=e;i++)
  {
    if(arr[i]<pivot)
    {
      cnt++;
    }
  }
  int pivotindex=s+cnt;
  swap(arr[pivotindex],arr[s]);
  int i=s,j=e;
  while(i<pivotindex && j>pivotindex)
  {
    while(arr[i]<pivot)
    {
      i++;
    }
    while(arr[j]>pivot)
    {
      j--;
    }
    if(i<pivotindex && j>pivotindex)
    {
      swap(arr[i++],arr[j--]);
    }
  }
  return pivotindex;
  
}

void quicksort(int arr[],int s,int e)
{
  if(s<e)
  {
    int index=partion(arr,s,e);
    quicksort(arr,s,index-1);
    quicksort(arr,index+1,e);
  }
}

void print(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int arr[]={57,5,1,6,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  quicksort(arr,0,n-1);
  print(arr,n);

}*/

/*int partition(int arr[],int l,int r)
{
  int pi=arr[r];
  int i=l-1;
  for(int j=l;j<r;j++)
  {
    if(arr[j]<pi)
    {
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[r]);
  return i+1;
}

void quicksort(int arr[],int l,int r)
{
  if(l<r)
  {
    int pi=partition(arr,l,r);
    quicksort(arr,l,pi-1);
    quicksort(arr,pi+1,r);
  }
  
}

void print(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
  int arr[]={57,5,1,6,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  quicksort(arr,0,n-1);
  print(arr,n);

}*/