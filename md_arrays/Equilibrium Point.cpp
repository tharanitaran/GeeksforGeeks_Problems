#include <bits/stdc++.h>
using namespace std;

int equilibriumPoint(long long a[], int n) {
    
    int i=0,c=-1;
    long long ll[n];
    long long la[n],lb[n];
    
    for(i=0;i<n;++i)
    {
        la[0]=-1;
        lb[0]=-1;
    }
    
    long long tt=0;
    
    for(i=0;i<n;++i)
    {
        tt+=a[i];
    }
    
    lb[n-1]=tt-a[n-1];
    la[0]=tt-a[0];
    
    lb[0]=0;
    la[n-1]=0;
    
    for(i=1;i<n-1;++i)
    {
        la[i]=la[i-1]-a[i];
        lb[n-i-1]=lb[n-i]-a[n-i-1];
        if(lb[i] != -1 && la[i] != -1 && la[i] == lb[i])
        {
            c=i;
            return c+1;
        }
    }
    
    for(i=0;i<n;++i)
    {
        
        if(lb[i] != -1 && la[i] != -1 && la[i] == lb[i])
        {
            c=i;
            return c+1;
        }
    }
    return c;
}

int main()
{
    int n=0,i=0;
    cin>>n;
    long long a[n];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    cout<<equilibriumPoint(a,n);
    return 0;
}
