// #include<iostream>
// using namespace std;

// int main(){ 
//     int n= 5;
//     int arr[] = {5,1,8,2,3};
//     int count  = 0;
//     for(int i=0;i<n-1;i++){
//        for(int j=i+1;j<n;j++){
//           if(arr[i]>arr[j]){ 
//             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
//             count++;
//           }
//        }
//       }
//     cout<<"\n"<<count<<"\n";
// return 0;
// }

// inversion count using merge sort



// decreasing order 
#include<iostream>
using namespace std;
// merge sort
int c  = 0;
void merge(vector<int>& arr,vector<int> & brr,vector<int> & res){
    int i = 0,j = 0, k = 0;
    while(i<arr.size() && j<brr.size()){
        if(arr[i]<brr[j]) res[k++] = arr[i++];
        else res[k++] = brr[j++];
    }
    if(i==arr.size())  while(j<brr.size()) res[k++] = brr[j++];
    if(j==brr.size()) while(i<arr.size()) res[k++] = arr[i++];
}
int counter(vector<int>& arr,vector<int> & brr){
   int i = 0,j = 0, k = 0, count = 0;
    while(i<arr.size() && j<brr.size()){
        if(arr[i]>brr[j]) {
         count += (arr.size()-i);
         j++;
        }
        else i++;
    }
    return count;
}
void mergeArray(vector<int>& v){
    int n = v.size();
    if(n<=1) return;
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

    c += counter(arr,brr);
    merge(arr,brr,v);
    //  delete used arr to improve space complexity
    arr.clear();
    brr.clear();
}
int main(){ 
    int n = 7;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    mergeArray(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n"<<c<<"\n";
return 0;
}