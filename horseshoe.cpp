#include<iostream>
#include<vector>
using namespace std;
void bubble_sort (vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}
int main(){
 vector <int> v(4);
for(int i=0;i<4;i++){
    cin>>v[i];
}
bubble_sort(v);
int n=0;
for(int i=0;i<3;i++){
if(v[i]!=v[i+1]){
    n++;
}
}
cout<<4-(n+1)<<endl;

return 0;
}