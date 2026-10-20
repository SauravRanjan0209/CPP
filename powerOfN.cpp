#include<iostream>
using namespace std;
int main(){
    int n,pow,i,num;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>pow;

    num = n;
    for(i=1;i<pow;i++){
        num=num*n;
    }
    cout<<num;
}