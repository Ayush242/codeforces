// D. The Sincere Ones
//         time limit per test: 1 second
//      memory limit per test: 256 megabytes
//            input: standard input
//            output:standard output
// While everyone was busy stealing chocolates, Shreya and Riddhi were occupied with their homework. It was a maths assignment where they were given 2 numbers and they had to calculate the value of ab.
// Since they are sincere, Ayman decided to help them out with the assignments.

// Input
// The first line contains two numbers a,b(0<a,b<1000).

// Output
// Print the number a. The answer will be considered correct if its absolute or relative error doesn't exceed 10^−6.

// Examples
// input
// 5 2
// output
// 2.500000
// input
// 459.93 34.78
// output
// 13.223979
// Note
// Given a=5 and b=2:
// a/b=5/2=2.500000

// Solution
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    float a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(6)<<a/b;
}

// // EDITORIAL SOLUTION
#include<bits/stdc++.h>
using namespace std;

int main(){
    float a,b,ans;
    cin>>a>>b;
    ans=a/b;
    cout <<fixed<<setprecision(6) << ans <<endl;
return 0;
}

}
