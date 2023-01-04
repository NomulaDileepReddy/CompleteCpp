#include<iostream>
using namespace std;
int main(){
    int n,all=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=a[j];
            all+=a[j];
        }
        cout<<sum<<' ';
    }
    cout<<all;
}