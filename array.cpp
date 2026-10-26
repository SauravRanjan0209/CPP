#include<iostream>
#include <climits>  
using namespace std;

//how to  intialize array:-
//there are 5 ways:-
    // 1 way: int a[5]={6,8,5,1,9};
    
    // 2 way: int name[]={3,8,2,9};

    // 3 way: int arr[10];
    //        for(i=0;i<10;i++){
    //        cin>>arr[i];
    //         }

    // 4 way: int a[5]={8,4};

    // 5 way: int arr[5]={0}; {0} there will always be 0 no 1,2,3,....
//address of index = arr + index*(sizeOfDatatype)
int main(){

int arr[10]={1,50,5,4,78,96,48,25,36,5};
    int ans = INT_MAX;
    //Min value
    for(int i=0;i<10;i++){
        if(arr[i]<ans)
            ans=arr[i];
   } 
    cout<<ans<<endl;

    //Max value
    int maxAns=INT_MIN;
    for(int i=0;i<10;i++){
        if(arr[i]>maxAns){
            maxAns = arr[i];
        }
        cout<<maxAns;
    }
    return 0;
}