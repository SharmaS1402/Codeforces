#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        long long int n;
        long long int sum = 0;
        long long int a,p;
        long long int l = 0;
        long long int m = 0;
        long long int z=0;
        cin >> n;
        for (long long int i = 0; i < n; i++)
        {
            cin >> a;
            p = abs(a);
            sum += p;
            if (a <= 0)
            {   
                if(a==0){
                    z++;
                }
                l++;
            }
            else
            {
                if (l==z)
                {
                    continue;
                }
                if (l != 0)
                {
                    m++;
                    l = 0;
                    z=0;
                }
            }
        }
        if (z!=0 && l == z)
        {
            m = m;
        }
        else if (l != 0)
        {
            m++;
        }

       
        cout << sum << " " << m << endl;
       }
  
    return 0;
}