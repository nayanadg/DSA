#include<stdio.h>
#include<stdlib.h>

int v=5;
int m[10][10]={{0,1,1,0,0},{1,0,0,1,1},{1,0,0,0,1},{0,1,0,0,0},{0,1,1,0,0}};
int source=4,visited[10];

void dfs(int m[10][10],int v,int source)
{
   int i;
   visited[source]=1;
   for(i=0;i<v;i++)
   {
       if(m[source][i]==1&&visited[i]==0)
       {
           printf("%d\t",i);
           dfs(m,v,i);
       }
   }
}

int main()
{
   int i;
   for(i=0;i<v;i++)
       visited[i]=0;
   printf("\nThe DFS Traversal is");
   printf("\n%d\t",source);
   dfs(m,v,source);
   return 0;
}


/* int v=5;
    int m[6][6]={{0,1,1,0,0},{1,0,0,1,1},{1,0,0,0,1},{0,1,0,0,0},{0,1,1,0,0}};
    int source=4,visited[10];

void dfs(int m[6][6],int v,int source);

int main()
{

    int i;
    for(i=0;i<v;i++)
    {
        visited[i]=0;
    }
    printf("\nVisited traversal is:");
    printf("\n %d",source);
    dfs(m,v,source);
    return 0;
}

void dfs(int m[6][6],int v,int source)
{
    int i;
     visited[source]=1;
    for(i=0;i<v;i++)
    {
        if(m[source][i]==1&&visited[i]==0)
        {
            printf("\n %d",i);
            dfs(m,v,i);
        }
    }
}
 */

/*#include <stdio.h>
#include <stdlib.h>

void print(int a[], int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void heapify(int h[], int n)
{
    int i;
    for (i = (n / 2); i >= 1; i--)
    {
        int k = i;
        int val = h[i];
        int heap = 0;
        while (heap == 0 && 2 * k <= n)
        {
            int j = 2 * k;
            if (j < n)
                if (h[j + 1] > h[j])
                    j = j + 1;
            if (val >= h[j])
                heap = 1;
            else
            {
                h[k] = h[j];
                k = j;
            }
        }
        h[k] = val;
    }
}

void heapsort(int h[], int m, int n)
{
    heapify(h, n);
    int i = 0, j = 0, temp;
    for (i = n; i >= 1; i--)
    {
        j++;
        temp = h[i];
        h[i] = h[1];
        h[1] = temp;
        heapify(h, n - j);
    }
}

int main()
{
    int n;
    printf("enter the no of elements\n");
    scanf("%d", &n);
    int m = n + 1;
    int a[m];
    a[0] = 0;
    for (int i = 1; i < m; i++)
    {
        printf("enter the elemets\n");
        scanf("%d", &a[i]);
    }
    printf("before sorting\n");
    print(a, m);
    printf("\n");
    printf("after sorting\n");
    heapsort(a, m, n);
    print(a, m);
    return 0;
}*/