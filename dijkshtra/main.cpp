#include <iostream>

using namespace std;

void dijkstra(int a[10][10],int n,int source,int dest,int d[10],int p[10])
{
    int i,j,u,v,min1;
    int s[10];
    for(i=0;i<n;i++)
    {
        d[i]=a[source][i];
        s[i]=0;
        p[i]=source;
    }
    s[source]=1;
    for(i=0;i<n;i++)
    {
        min1=9999;
        u=-1;
        for(j=0;j<n;j++)
          if(s[j]==0)
            if(d[j]<min1)
            {
                min1=d[j];
                u=j;
            }
        if(u==-1)
            return;
        s[u]=1;
        if(u==dest)
            return;
        for(v=0;v<n;v++)
        {
            if(s[v]==0)
            {
                if(d[u]+a[u][v]<d[v])
                {
                    d[v]=d[u]+a[u][v];
                    p[v]=u;
                }
            }
        }

    }
}

int main()
{
    int a[10][10],n,source,dest,i,j,d[10],p[10];
    cout <<"Enter no of nodes:" << endl;
    cin>>n;
    cout<<"enter the cost matrix:"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
          cin>>a[i][j];
    cout<<"Enter the source node:"<<endl;
    cin>>source;
    cout<<"The shortest paths for the given source are:"<<endl;
    for(dest=0;dest<n;dest++)
    {
        dijkstra(a,n,source,dest,d,p);
        i=dest;
        if(i==source)
            cout<<i<<"<---"<<i<<" cost:"<<d[i]<<endl;
        else
        {
            while(i!=source)
            {
                cout<<i<<"<---";
                i=p[i];
            }
            cout<<i<<" cost:"<<d[dest]<<endl;
        }
    }
    return 0;
}
