//   B. Stolen Chocolate Stolen
//                             time limit per test:1 second
//                           memory limit per test:256 megabytes
//                               input:standard input
//                               output:standard output

// Raadhes knows that Dev has been hiding something in his room. One day when Dev was not in the room, Raadhes snuck into his room and found out that he has a
// chocolates.He decided to take b chocolates for himself and leave room.
// Can you help Dev figure out how many chocolates are left with him?

//     Input
// The first line contains two integers a,b (0<b≤a≤100) — the number of chocolates Dev had and the number of chocolates Raadhes took.

//     Output
// Output a single integer x — the number of chocolates Dev was left with.

//     Examples
// input 
// 7 5
// output 
// 2
// input 
// 80 69
// output 
// 11
//     Note
// In the first example, Dev had 7 chocolates but after Raadhes stole 5 of them, there are 2 chocolates left.
// Similarly, in the second example, Dev had 80 chocolates but after Raadhes stole 69 of them, there are 11 chocolates left.

// SOLUTION

#include<iostream>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a-b;
}
