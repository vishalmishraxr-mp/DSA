#include<iostream>
using namespace std;

void generate_string(string s,int n){
    if(n==0) {
        cout<<s<<endl;
        return;
    }
    generate_string(s+'0',n-1);
    if(s=="" || s[s.length()-1]=='0')
    generate_string(s+'1',n-1);
}
int main(){ 
    int n = 3;
    generate_string("",n);
return 0;
}