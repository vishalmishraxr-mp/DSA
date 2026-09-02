#include<iostream>
#include<string>
using namespace std;

void removechar(string ans, string original){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    // original.substr(1) is reduce string by 1
    if(ch=='a') removechar(ans,original.substr(1));
    else removechar(ans+ch,original.substr(1));

}
int main(){ 
    string str = "vishal mishra";
    removechar("",str);
return 0;
}