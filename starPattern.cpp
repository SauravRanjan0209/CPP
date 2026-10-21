#include<iostream>
using namespace std;

// Pattern 1:-
// int main(){
//     for(int j=0;j<5;j++)
//     {
//     for(int i=0;i<5;i++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
//     }
// }


//Pattern 2:-
// int main(){
//     for(int j=1;j<5;j++){
//         for(int i=1;i<6;i++){
//             cout<<"10";
//         }
//         cout<<endl;
//     }
// }

// Pattern 3:-
// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3 
// 4 4 4 4 4 
// 5 5 5 5 5 
// int main() {
//     for(int row=1;row<=5;row++){
//         for(int col=1;col<=5;col++){
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }


//pattern 4:-
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5

// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5;col++){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

//pattern 5:-
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1


// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=5;col>=1;col--){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

//pattern 4:
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25

#include <iostream>
using namespace std;

int main() {
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= 5; col++) {
            cout << col * col << " ";
        }
        cout << endl;
    }
}

