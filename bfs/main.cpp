#include <iostream>

using namespace std;
#define Max 10

int s[Max];

void bfs(int a[Max][Max],int n,int source)
{
    int q[Max];
    int u,f,r,i,v;
    f=r=0;
    for(i=0;i<n;i++)
        s[i]=0;
    s[source]=1;
    q[r]=source;
    while(f<=r)
    {
        u=q[f++];

        for(v=0;v<n;v++)
        {
            if((a[u][v]==1) && (s[v]==0))
            {
                s[v]=1;
                q[++r]=v;
            }
        }
    }

}

int main()
{
    int a[Max][Max],n,i,j,source;
    cout << "Enter no of nodes:" << endl;
    cin>>n;
    cout<<"Enter the adjacency matrix"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
                cin>>a[i][j];
    cout<<"Enter source node:"<<endl;
    cin>>source;
    bfs(a,n,source);
    cout<<"Nodes reachable from node "<<source<<" are:";
    for(i=0;i<n;i++)
    {
        if((i!=source)&&(s[i]==1))
            cout<<"Node"<<i<<endl;
    }
    return 0;
}
