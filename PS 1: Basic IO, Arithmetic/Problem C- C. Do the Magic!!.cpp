// C. Do the Magic!!
//                                              time limit per test: 1 second
//                                           memory limit per test: 256 megabytes
//                                                 input: standard input
//                                                 output: standard output
// After stealing chocolates, Raadhes got greedy and went to Abhilash (who's a wizard). Abhilash agreed to magically increase the number of chocolates.
// Raadhes initially had a chocolates and Abhilash agreed to multiply those by b.
// Find out how much extra chocolates did he get?

// Input
// The first lines contain two integers a,b (1≤a,b≤100) — the initial number of chocolates Raadhes had and the number of times Abhilash multiplies them.

// Output
// Output a single integer x — the number of extra chocolates Raadhes got after Abhilash's Magic.

// Example
// input
// 9 8
// output
// 63
// Note
// In the first example, Raadhes had 9chocolates initially and after the magic he has 9⋅8=72 chocolates. So he has 72−9=63 extra chocolates now.

// Solution
#include <iostream>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    cout<<(a*b)-a;
}
