#include<iostream>
using namespace std;

//Pattern 20:-
//     *
//    ***
//   *****
//  *******
// *********

// int main() {
//     int row,col,n;
//      cout<<"Enter number:";
//      cin>>n;
//     for(row=1;row<=n;row++){

//         //print Space
//         for(col=1;col<=n-row;col++){
//             cout<<" ";
//         }
//         //print *
//         for(col=1;col<=2*row-1;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }    
// }


//Pattern 21:-
// Enter number:5
//     1
//    121
//   12321
//  1234321
// 123454321

// int main(){
//     int row,col,n;
//     cout<<"Enter number:";
//     cin>>n;
//     for(row=1;row<=n;row++){
//         for(col=1;col<=n-row;col++){
//             cout<<" ";
//         }
//         for(col=1;col<=row;col++){
//             cout<<col;
//         }
//         for(col=row-1;col>=1;col--){
//             cout<<col;
//         }
//         cout<<"endl";
//     }
// }

// Pattern 22:-
