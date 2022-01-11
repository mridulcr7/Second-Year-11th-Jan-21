#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m,l;
    float ans;
    cin>>n>>m;
    vector<int> a(n),b(m),c(m+n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    for(int i=0;i<m+n;i++)
    {
        if(i<n)
            c[i]=a[i];
        else
            c[i]=b[i-n];
    }
    sort(c.begin(),c.end());
    l=m+n;
    if(l%2==0)
        ans=(c[l/2-1]+c[l/2])/2.0;
    else
        ans=c[l/2];
    cout<<ans;
    return 0;
}
