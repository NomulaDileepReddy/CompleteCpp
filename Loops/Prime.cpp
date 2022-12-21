#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int i,flag=0;
    for(i=2;i<num;i++){
        if(num%i==0){
            flag=1;
            cout<<"Not Prime";
            break;
        }
    }
    if(flag==0)
    cout<<"Prime";
}