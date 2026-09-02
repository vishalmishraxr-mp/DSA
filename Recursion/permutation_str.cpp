#include<iostream>
#include<string>
using namespace std;

void permutation(string ans, string str){
    if(str.size()==0) {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        permutation(ans+ch,left+right);
    }
}
int main(){ 
    string str = "abc";
    permutation("", str);
return 0;
}

//substring str.substr(1,3) -> it implies that a is starting
//index inclusively and b length tk print krna hai substring me
// jaiise abcd hai a = 1 hai to b se shuru or 3 number 
// print honge to bcd output