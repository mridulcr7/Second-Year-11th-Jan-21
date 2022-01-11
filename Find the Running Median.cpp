#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,l=1;
    float c;
    cin>>n;
    vector<int> a(n);
    vector<float>ans;
    for(int i=0;i<n;i++)
    {
        cin>>t;
       if(i==0)
       {
           a[i]=t;
           ans.push_back(t);
           l++;
           continue;
       }
        int low=0,high=i,pos=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(t<a[mid])
            {
                low=mid+1;
                pos=low;
            }
            else
            {
                high=mid-1;
            }
        }
        int j=i-1;
         while (j >= pos) {
            a[j + 1] = a[j];
            j--;
        }
        a[j+1]=t;
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
