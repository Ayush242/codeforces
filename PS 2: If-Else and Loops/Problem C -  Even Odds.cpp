// C. Even Odds
                  // time limit per test : 1 second
                  // memory limit per test : 256 megabytes
                  // input : standard input
                  // output : standard output
// Being a nonconformist, Volodya is displeased with the current state of things, particularly with the order of natural numbers (natural number is positive integer number). He is determined to rearrange them. But there are too many natural numbers, so Volodya decided to start with the first n. He writes down the following sequence of numbers: firstly all odd integers from 1 to n (in ascending order), then all even integers from 1 to n (also in ascending order). Help our hero to find out which number will stand at the position number k.

// Input
// The only line of input contains integers n and k (1 ≤ k ≤ n ≤ 10^12).
// Please, do not use the %lld specifier to read or write 64-bit integers in C++. It is preferred to use the cin, cout streams or the %I64d specifier.

// Output
// Print the number that will stand at the position number k after Volodya's manipulations.

Examples
input 
 10 3
output 
 5
input 
 7 7
output 
 6
Note
In the first sample Volodya's sequence will look like this: {1, 3, 5, 7, 9, 2, 4, 6, 8, 10}. The third place in the sequence is therefore occupied by the number 5.



#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main(){https://codeforces.com/group/7mxf4oQFY7/contest/452362/customtest
    ll n,k;
    cin>>n>>k;
    ll size;
    if(n%2==0){
        size = n/2;
    }
    else{
        size = n/2 + 1; 
    }
    if(k<=size){
        cout<<2*k -1;
    }
    else{
        cout<<2*(k-size);
    }
}


    
// Editorial Solution
#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}
