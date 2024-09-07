#include <iostream>

using namespace std;

int mini(int a,int b)
{
    return a<b?a:b;
}

void floyds(int n,int c[10][10])
{
    int d[10][10],i,j,k;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           d[i][j]=c[i][j];
    for(k=0;k<n;k++)
        for(i=0;i<n;i++)
           for(j=0;j<n;j++)
              d[i][j]=mini(d[i][j],d[i][k]+d[k][j]);
    cout<<"Distance matrix is:"<<endl;
    for(i=0;i<n;i++)
       {
        for(j=0;j<n;j++)
              cout<<d[i][j]<<" ";
          cout<<endl;
       }
}

int main()
{
    int c[10][10],n,i,j;
    cout << "Enter no of nodes:" << endl;
    cin>>n;
    cout<<"Enter cost matrix:"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           cin>>c[i][j];
    floyds(n,c);
    return 0;
}
