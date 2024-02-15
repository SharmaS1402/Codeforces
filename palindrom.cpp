#include <bits/stdc++.h>
using namespace std;
string intToRoman(int num) {
        map<int,string> m;
        m[1]="I";m[5]="V";m[10]="X";m[50]="L";m[100]="C";m[500]="D";m[1000]="M";m[4]="IV";
        m[9]="IX";m[40]="XL";m[90]="XC";m[400]="CD";m[900]="CM";
        string ans="";
        while(num>0){
            auto itr=m.upper_bound(num);
            itr--;
            auto ele=*(itr);
            ans+=ele.second;
            num-=ele.first;
        }
        return ans;
    }
int main(){
int n;
cin>>n;
string s=intToRoman(n);
cout<<s<<endl;
return 0;
}