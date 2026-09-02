#include<iostream>
using namespace std;

void permutation(vector<string> & finalans, string ans, string original){
       if(original==""){
          finalans.push_back(ans);
          return;
       }
       for(int i=0;i<original.length();i++){
          char ch = original[i];
          string left = original.substr(0,i);   // ch ke left side 
          string right = original.substr(i+1);  // ch ke rigth side
          permutation(finalans,ans+ch,left+right);  
          // dono ko add krke new string bana diya 
       }
}
int main(){ 
    string ans = "123";
    vector<string> finalans;
    permutation(finalans,"",ans);
    for(int i=0;i<finalans.size();i++){
        cout<<finalans[i]<<endl;
    }
return 0;
}