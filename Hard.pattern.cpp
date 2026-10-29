#include <iostream>
using namespace std;


//Pattern: 01
// Enter number:5
//     *
//    ***
//   *****
//  *******
// *********

// int main() {
//     int n;
//     cout<<"Enter number:";
//     cin>>n;
//     //for printing space
//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=n-row;col++){
//             cout<<" ";   
//         }
//     //for printing starts
//     for(int col=1;col<=2*row-1;col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//     }
// }

// Pattern :02
// Enter number:6
//      1 
//     1 2 1 
//    1 2 3 2 1 
//   1 2 3 4 3 2 1 
//  1 2 3 4 5 4 3 2 1 
// 1 2 3 4 5 6 5 4 3 2 1 


// int main() {
//     int n;
//     cout<<"Enter number:";
//     cin>>n;
//     
//     for(int row=1;row<=n;row++){
//        //for printing space
//         for(int col=1;col<=n-row;col++){
//             cout<<" ";   
//         }
//    //for 1 to row
//     for(int col=1;col<=row;col++){
//         cout<<col<<" ";
//     }
//           //for printing row-1  to1
//         for(int col=row-1;col>=1;col--){
//             cout<<col<<" ";
//         }
//     cout<<endl;
//     }
// }


// Pattern 02:-
// Enter number:5
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 
        
// int main() {
//     int n;
//     cout<<"Enter number:";
//     cin>>n;
//     for(int row=n;row>=1;row=row-1){
//         //space
//         for(int col=1;col<=n-row;col++){
//             cout<<" ";
//         }
//         //prinitng stars
//         for(int col=1;col<=2*row-1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

