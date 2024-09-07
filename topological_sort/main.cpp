#include <iostream>

using namespace std;
int indegree[10];

void fin(int a[10][10],int n)
{
    int sum,i,j;
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
            sum=sum+a[i][j];
        indegree[j]=sum;
    }
}

void topo(int a[10][10],int n)
{
    int s[10],top,i,t[10],k=0;
    top=-1;
    int u,v;
    fin(a,n);
    for(i=0;i<n;i++)
    {
        if(indegree[i]==0)
            s[++top]=i;
    }
    while(top!=-1)
    {
       u=s[top--];
       t[k++]=u;
       for(v=0;v<n;v++)
       {
           if(a[u][v]==1)
           {
              indegree[v]--;
           if(indegree[v]==0)
                s[++top]=v;
           }
       }
    }
    cout<<"The topological sort sequence is:";
    for(i=0;i<k;i++)
        cout<<t[i]<<" ";
}

int main()
{
    int n,a[10][10],i,j;
    cout << "Enter no of nodes:" << endl;
    cin>>n;
    cout<<"Enter adjacency matrix:"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           cin>>a[i][j];
    topo(a,n);
    return 0;
}
