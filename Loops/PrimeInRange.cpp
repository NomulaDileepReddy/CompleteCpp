#include<iostream>
using namespace std;
int main(){
    int a,b,num;
    cin>>a>>b;
    int i,flag=0;
    for(num=a;num<b;num++){
        flag=0;
        for(i=2;i<num;i++){
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<num<<endl;
        }
    }
}