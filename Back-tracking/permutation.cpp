// #include<iostream>
// using namespace std;

// void permutation(string input, string output){

//     if(input.size()==0){
//         cout<<output<<"\n";
//         return;
//     }
//     for(int i=0;i<input.size();i++){
//         char ch = input[i];
//         string left = input.substr(0,i);
//         string right = input.substr(i+1);
//         string rest = left+right;
//         permutation(rest, output+ch);
//     }
// }
// int main(){ 
//     permutation("abc", "");
// return 0;
// }


// // permutation without repition with back-tracking
// #include<iostream>
// using namespace std;

// void permutation(string &str, int i){
//     if(i==str.size()-1){
//         cout<<str<<"\n";
//         return;
//     }
//     for(int j=i;j<str.size();j++){
//         swap(str[j],str[i]);
//         permutation(str,i+1);
//         swap(str[j],str[i]);  // back-tracking
//     }
// }
// int main(){ 
//     string str = "abc";
//     permutation(str,0);
// return 0;
// }


// permutation repition with back-tracking
#include<iostream>
#include<unordered_set>
using namespace std;

void permutation(string &str, int i){
    if(i==str.size()-1){
        cout<<str<<"\n";
        return;
    }
    unordered_set<char> st;
    for(int j=i;j<str.size();j++){
        if(st.count(str[j])) continue;
        // step of pruning:- skip the unneccesary branch in which we can't get the solution
        st.insert(str[j]);   
        swap(str[j],str[i]);
        permutation(str,i+1);
        swap(str[j],str[i]);  // back-tracking
    }
}
int main(){ 
    string str = "aba";
    permutation(str,0);
return 0;
}