#include <iostream>

using namespace std;

int main()
{
    int i,j,u,v,n,a[10][10],visited[10],min1,mincost=0,ne=1;
    cout << "Enter no of nodes:" << endl;
    cin>>n;
    cout<<"enter the cost matrix:"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
         //   if(a[i][j]==0)
            //    a[i][j]=9999;
        }
     cout<<"the minimal spanning tree is:"<<endl;
    for(i=0;i<n;i++)
        visited[i]=0;
    visited[0]=1;
    while(ne<n)
    {

        for(i=0,min1=9999;i<n;i++)
          {
              if(visited[i]!=0)
                 {
                     for(j=0;j<n;j++)
                       {
                           if(a[i][j]<min1&&visited[j]==0)
                                {
                                    min1=a[i][j];
                                     u=i;
                                     v=j;
                                }
                       }
                 }
          }

            cout<<"edge "<<ne++<<" : "<<u<<"---"<<v<<" : "<<min1<<endl;
            mincost=mincost+min1;
            visited[v]=1;

        a[u][v]=a[v][u]=9999;

    }
    cout<<"The minimum cost is:"<<mincost;
    return 0;
}
