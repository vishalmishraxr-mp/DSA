// #include<iostream>
// using namespace std;
// // merge sort
// void merge(vector<int>& arr,vector<int> & brr,vector<int> & res){
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while(i<arr.size() && j<brr.size()){
//         if(arr[i]<brr[j]) res[k++] = arr[i++];
//         else res[k++] = brr[j++];
//     }
//     if(i==arr.size()){
//         while(j<brr.size()) res[k++] = brr[j++];
//     }
//     if(j==brr.size()){
//         while(i<arr.size()) res[k++] = arr[i++];
//     }
// }

// void mergeArray(vector<int>& v){
//     // v size ke vector ko do vector me tod lo phir 
//     //uspr merge sort laga do 
//     int n = v.size();
//     if(n==1) return;
//     int n1 = n/2, n2 = n-n1;
//     vector<int> arr(n1);
//     for(int i=0;i<n1;i++){
//         arr[i] = v[i];
//     }
//     vector<int> brr(n2);
//     for(int i=0;i<n2;i++){
//         brr[i] = v[n1+i];
//     }
//     mergeArray(arr);
//     mergeArray(brr);

//     merge(arr,brr,v);
//     //  delete used arr to improve space complexity
//     arr.clear();
//     brr.clear();
// }
// int main(){ 
//     int n = 10;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     mergeArray(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// return 0;
// }

//APPLICATIN OF MERGE SORT
// 1.) it is used in sorting of linked kist and 
//other data structure
//  2.) it is used in count inversion  problem
// 3.)  external sorting 


// decreasing order 
#include<iostream>
using namespace std;
// merge sort
void merge(vector<int>& arr,vector<int> & brr,vector<int> & res){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<arr.size() && j<brr.size()){
        if(arr[i]>brr[j]) res[k++] = arr[i++];
        else res[k++] = brr[j++];
    }
    if(i==arr.size()){
        while(j<brr.size()) res[k++] = brr[j++];
    }
    if(j==brr.size()){
        while(i<arr.size()) res[k++] = arr[i++];
    }
}

void mergeArray(vector<int>& v){
    // v size ke vector ko do vector me tod lo phir 
    //uspr merge sort laga do 
    int n = v.size();
    if(n==1) return;
    int n1 = n/2, n2 = n-n1;
    vector<int> arr(n1);
    for(int i=0;i<n1;i++){
        arr[i] = v[i];
    }
    vector<int> brr(n2);
    for(int i=0;i<n2;i++){
        brr[i] = v[n1+i];
    }
    mergeArray(arr);
    mergeArray(brr);

    merge(arr,brr,v);
    //  delete used arr to improve space complexity
    arr.clear();
    brr.clear();
}
int main(){ 
    int n = 10;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    mergeArray(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
return 0;
}