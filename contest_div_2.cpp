#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int ans=0;
        vector<int> v(n);
        vector<int> a;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++){
            if(v[i]!=v[i+1]){
                a.push_back(v[i]);
            }
        }
        a.push_back(v[n-1]);
        for(int i=0;i<a.size();i++){
            int x = a[i]+n;
            int y = lower_bound(a.begin(),a.end(),x) - a.begin();
            y--;
            ans = max(ans,y-i+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}