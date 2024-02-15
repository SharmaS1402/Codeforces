#include <bits/stdc++.h>
using namespace std;
class myArr{
    int Size;                // total size
    int offset;              // used size 
    int *ptr;
    public:
   myArr(int tSize,int uSize){
    Size = tSize;
    offset = uSize;
    ptr=new int[tSize];
   }

   void traverse(){
    for(int i=0;i<offset;i++){
        cout<<ptr[i]<<" ";
    }cout<<endl;
   }

   void set_array(){
    for(int i=0;i<offset;i++){
        cout<<"Input element at index "<<i<<endl;
        cin>>ptr[i];
    }
   }
   int get_at(int idx){
    return ptr[idx];
   }
};
int main(){
myArr arr(10,4);
arr.set_array();
cout<<arr.get_at(2)<<endl;
arr.traverse();
return 0;
}