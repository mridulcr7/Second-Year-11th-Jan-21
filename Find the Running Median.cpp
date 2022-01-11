#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,l=1;
    float c;
    cin>>n;
    vector<int> a;
    vector<float>ans;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        a.push_back(t);
        sort(a.begin(),a.end());
        if(l%2!=0)
            ans.push_back(a[l/2]);
        else
        {
            c=(a[l/2-1]+a[l/2])/2.0;
            ans.push_back(c);
        }
        l++;
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<"\n";
}
