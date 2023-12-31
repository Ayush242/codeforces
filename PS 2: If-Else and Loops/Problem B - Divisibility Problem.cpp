// B. Divisibility Problem
			// time limit per test : 1 second
			// memory limit per test : 256 megabytes
			// input : standard input
			// output : standard output
// You are given two positive integers a and b. In one move you can increase a by 1 (replace a  with a+1). Your task is to find the minimum number of moves you need to do in order to make a  divisible by b . It is possible, that you have to make 0 moves, as a is already divisible by b. You have to answer t independent test cases.

// Input
// The first line of the input contains one integer t (1≤t≤10^4) — the number of test cases. Then t test cases follow.
The only line of the test case contains two integers a and b (1≤a,b≤10^9).

// Output
// For each test case print the answer — the minimum number of moves you need to do in order to make a divisible by b

// Example
// input 
	// 5
	// 10 4
	// 13 9
	// 100 13
	// 123 456
	// 92 46
// output 
	// 2
	// 5
	// 4
	// 333
	// 0


#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main(){https://codeforces.com/group/7mxf4oQFY7/contest/452362/customtest
    ll t;
    cin>>t;
    while(t--){
        ll a,b,count=0;
        cin>>a>>b;
        if(a<b){
            cout<<b-a<<endl;
        }
        else if(a%b==0){
            cout<<0<<endl;
        }
        else{
            int rem = a/b;
            cout<<b*(rem+1)-a<<endl;
        }
    }
}

// Editorial Solution
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a % b == 0) cout << 0 << endl;
		else cout << b - a % b << endl;

    }
}
