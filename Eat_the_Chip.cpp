#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll h,w,xa,xb,ya,yb,mvreq,mvlos;
int main(){
int t;
cin>>t;
while(t--){
cin>>h>>w>>xa>>ya>>xb>>yb;
if(xa>=xb){
    cout<<"Draw"<<endl;
}
else{
ll int x = abs(xa-xb);
if(x%2 == 0){
    x/=2;
    mvlos = x;
    ll int y = abs(ya-yb);
    if(ya==yb){
        mvreq= 0 ;
    }
    else if(ya<yb){
        mvreq = y + min(ya-1,mvlos);
    }
    else{
        mvreq = y + min(w-ya,mvlos);
    }
    if(mvreq > x){
        cout<<"Draw"<<endl;
    }
    else{
        cout<<"BOB"<<endl;
    }
}
else{
    x/=2;
    ll int y = abs(ya-yb);
    mvlos = x;
    x++;
    if(ya==yb){
        mvreq = 0;
    }
    else if(ya< yb){
        mvreq = y + min(w-yb,mvlos);
    }
    else{
        mvreq = y +  min(yb-1,mvlos);
    }
    if(mvreq > x){
        cout<<"Draw"<<endl;
    }
    else{
        cout<<"ALICE"<<endl;
    }
}
}
}
return 0;
}