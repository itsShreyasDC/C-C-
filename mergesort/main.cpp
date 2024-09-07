#include <iostream>

using namespace std;
#include <time.h>

void merges(int a[],int l,int m,int h)
{
    int i,j,k,c[100];
    i=k=l;
    j=m+1;
    while(i<=m&&j<=h)
    {
        if(a[i]<a[j])
            c[k++]=a[i++];
        else
            c[k++]=a[j++];
    }
    while(i<=m)
        c[k++]=a[i++];
    while(j<=h)
        c[k++]=a[j++];
    for(i=l;i<k;i++)
        a[i]=c[i];
}

void mergesort(int a[],int l,int h)
{
    int m;
    if(l<h)
    {
        m=(l+h)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,h);
        merges(a,l,m,h);
    }
}

int main()
{   int n,a[100],i;
    clock_t st,et;
    cout << "Enter the no of elements:" << endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    st=clock();
    for(i=0;i<5000;i++)
    {
       mergesort(a,0,n-1);
    }
    et=clock();
    cout<<"Sorted array is:"<<endl;
     for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"time taken:"<<(float)(et-st)*1000/(CLOCKS_PER_SEC*5000)<<"ms";
    return 0;
}
