# SOLUTION
```c++
#include<iostream>
#include<numeric>
using namespace std;
 
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int sum =0;
    cout<< accumulate(a,a+4,sum);
   
}
```
