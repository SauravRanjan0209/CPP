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

// #include <iostream>
// using namespace std;

// int main() {
//     for (int row = 1; row <= 5; row++) {
//         for (int col = 1; col <= 5; col++) {
//             cout << col * col << " ";
//         }
//         cout << endl;
//     }
// }



//Pattern 5:-
// a a a a a a 
// b b b b b b 
// c c c c c c 
// d d d d d d 
// e e e e e e

// int main(){
//     for(int row=1;row<=5;row++){
//         char name='a'+row-1;
//         for(int col=1;col<=5;col++){
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }

//Partten 6:-
//a b c d e
//a b c d e
//a b c d e
//a b c d e
//a b c d e

// int main(){
//     for(char row=1;row<=5;row++)
//     {
//     for(char col='a';col<='e';col++){
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }
// }

// ------OR-------
// int main(){
//     for(char row=1;row<=5;row++)
//     {
//     for(char col='a';col<='e';col++){
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }
// }

// Pattern 7:-
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 

// int main(){
//     int row,col,count=1;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5;col++){
//            cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }

//-----------OR-------------
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5;col++){
//            cout<<(row-1)*5+col<<" ";
//         }
//         cout<<endl;
//     }
// }

//Pattern 8:-

