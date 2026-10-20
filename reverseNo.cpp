#include<iostream>
using namespace std;
int main(){
    int start;
    cout<<"Enter start value: "<< endl;
    cin>>start;
    
    int stop;
    cout<<"Enter stop value: "<< endl;
    cin>>stop;
    for(int i=start;i>stop;i--){
        cout<<i<<" ";
    }
}