#include<iostream>
#include<climits>
using namespace std;

int GCD(int a, int b){
    int big = max(a,b);
    int small = min(a,b);
    if(small==0) return big;
    else return GCD(small,big%small);
}
int main(){ 
    int a = 24;
    int b = 60;
    cout<<GCD(a,b);
return 0;
}

// uclid's division rule gcd(a,b) = gcd(b,a%b)
//   a bada number and b chota number