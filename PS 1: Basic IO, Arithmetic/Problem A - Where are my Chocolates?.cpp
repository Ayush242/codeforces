//   A. Where are my Chocolates?
//                 time limit per test:1 second
//                 memory limit per test:256 megabytes
//                 input:standard input
//                 output:standard output
// Chahel, Shaun, Haricharan and Abhinav live in a hostel, and they have a, b, c, d chocolates respectievely. One night, Dev secretly sneaks inside their rooms and steals all the chocolates.
// Can you help him out try to figure out how many chocolates he has?

//     Input
// The first line contains 4 integers: a,b,c,d (1≤a,b,c,d≤100) — the number of chocolates they have each.

//     Output
// Output a single integer — the number of chocolates Dev has after the theft.
// ```
// Examples
// input 
// 2 4 5 7
// output 
// 18
// input 
// 1 9 11 59
// output 
// 80
// ```
//     Note
// In the first example, they have 2,4,5,7
//  chocolates each. So Dev steals 2+4+5+7=18
//  chocolates in total.

// In the second example, they have 1,9,11,59
//  chocolates each. So Dev steals 1+9+11+59=80
//  chocolates in total.


//   SOLUTION
 include<iostream>
 include<numeric>
using namespace std;
 
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int sum =0;
    cout<< accumulate(a,a+4,sum);
   
}

