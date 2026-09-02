// 1 or 2 jump allow 
#include<iostream>
using namespace std;

int totalpath(int n){
// same as fibbonacci series 
    if(n==2) return 2;
    if(n==1) return 1;
    return totalpath(n-1) + totalpath(n-2);
}
int main(){ 
     cout<<totalpath(4)<<endl;   
return 0;
}

 
// if 3 jump allow then iuf(n==3) return 4;
// totalpath(n)= totalpath(n-1)+totalpath(n-2)+totalpath(n-3)