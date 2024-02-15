#include <bits/stdc++.h>
using namespace std;
class Clock{
    int hour,min,sec;
    public:
    Clock(){}
    Clock(int i,int j ,int k){
        hour=i;
        min=j;
        sec=k;
    }
    Clock operator+(Clock& t1){
        Clock t2;
        t2.sec=sec + t1.sec;
        t2.min=min + t1.min + t2.sec/60;
        t2.sec=t2.sec%60;
        t2.hour=hour+t1.hour+t2.min/60;
        t2.min=t2.min%60;
        return t2;
    }
    void display(){
        cout<<"hour : "<<hour<<endl<<"min : "<<min<<endl<<"sec : "<<sec<<endl;
    }
};
int main(){
    Clock t1(2,45,23);
    Clock t2(3,55,12);
    Clock t3=t1+t2;
    t3.display();
return 0;
}