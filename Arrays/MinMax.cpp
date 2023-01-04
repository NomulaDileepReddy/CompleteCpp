#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int maxx = max(a,b);
    int minn = min(a,b);
    cout<<"Max="<<maxx;
    cout<<"Min="<<minn;
}