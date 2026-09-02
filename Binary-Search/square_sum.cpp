#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std; 

bool isperfect(int n){
    if(n==sqrt(n)*sqrt(n)){
        return true;
    }
    else{
        return false;
    }
}
int main(){ 
    int c;
    cin>>c;
    int a = 0;
    int b = c;
    while(a<=b){
    if(isperfect(a) && isperfect(b)){
       return true;
    } 
    else if(!isperfect(b)){
        b = (int)(sqrt(b)*sqrt(b));
        a = c-b;
    }
    else if(!isperfect(a)){
        a = (int)((sqrt(a)+1)*(sqrt(a)+1));
        b = c-a;
    }
}
return 0;
}