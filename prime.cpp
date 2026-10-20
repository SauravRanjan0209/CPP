#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<2)
    {
        cout<<"Not a Prime";
        return 0;
    }
    else 
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
            cout<<"Not a prime.";
            return 0;
        }
    }
        cout<<"Prime Number";
        return 0;
    }
   return 0;
}
