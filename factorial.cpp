#include<iostream>
using namespace std;
int main(){
    int fact,n,i;
    cout<<"Enter a number: ";
    cin>>n;
    fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
}