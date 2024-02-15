#include <bits/stdc++.h>
using namespace std;
    string longestCommonPrefix(vector<string>& strs) {
        int x=strs.size();
        int len=strs[0].length();
        string s=strs[0];
        for(int i=0;i<x;i++){
            if(strs[i].length()<len){
                len=strs[i].length();
                s=strs[i];
            }
        }
        int n=s.length();
        int j;
        for(j=0;j<n;j++){
            for(int i=0;i<x-1;i++){
                if(strs[i][j]!=strs[i+1][j]){
                    goto label;
                }
            }
        }
        cout<<s<<endl;
        cout<<j<<endl;
       label:
        string ans=s.substr(0,j);
        return ans;
          
            }
int main(){
    vector<string> strs={"cir","car"};
    cout<<longestCommonPrefix(strs)<<endl;
}