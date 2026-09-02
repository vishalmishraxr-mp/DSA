// #include<iostream>
// #include<string>
// using namespace std;

// void printsubset(string ans, string original){
//     if(original.length()==0) {
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0]; 
// //har bar original 1 se kam ho ja rhi hai original.substr(1);
//     printsubset(ans,original.substr(1));
//     printsubset(ans+ch,original.substr(1));
// }
// int main(){ 
//     string str = "abc";
//     cout<<"the substring is: \n"; 
//     printsubset("",str);
// return 0;
// }

// solve for array and store subarray in a vector
#include<iostream>
#include<vector>
#include<string>

using namespace std;

void printsubset(int arr[],int n,int idx, vector<int> v){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    printsubset(arr,n,idx+1,v);
    v.push_back(arr[idx]);
    printsubset(arr,n,idx+1,v);
}
int main(){ 
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    printsubset(arr,n,0,v);
return 0;
}