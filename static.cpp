#include <bits/stdc++.h>
using namespace std;
int cnt(){
    static int count=0;
    count++;
    return count;
}
int main(){
cout<<cnt()<<endl;
cout<<cnt()<<endl;
return 0;
}