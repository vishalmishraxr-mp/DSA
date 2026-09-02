// remove element which is less then x and sort them in decresing order
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){ 

    int n;
   cout<<"enter the size of string:-";
    cin>>n;
    string s;
    string str;
    cout<<"enter the element of an string:- ";
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    sort(str.begin(),str.end());
    reverse(str.begin(),str.end());
    cout<<str<<endl;
return 0;
}