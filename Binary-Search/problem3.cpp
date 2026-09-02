// problem is that substitute the 0,1,2... in place of number
// that is present int the array min to 0 and further 1 ,2 -- its on
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){ 
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int insrt = 0;
//     for(int i=0;i<n;i++){
//         int min = INT_MAX;
//         int idx = -1;
//         for(int j=0;j<n;j++){
//             if(arr[j]<min && arr[j]>0){
//                 min = arr[j];
//                 idx = j;
//  // find min number and save index where min number appear
//             }
//         }
//         // insert 0 , -1 , -2 ... in array 
//                 arr[idx] = insrt;
//                 insrt--;
//     }
//     for(int i=0;i<n;i++){
//         // answer multiply by number -1
//         cout<<(-1*arr[i])<<" ";
//     }
// return 0;
// }

// // if arr have negative value also then 
// #include<iostream> 
// #include<vector>
// using namespace std;

// int main(){ 
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     vector<int> visited(n,0);  //initially all value 0 in array 
//     // 0 means not visited if visited then value = 1 
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int insrt = 0;
//     for(int i=0;i<n;i++){
//         int min = INT_MAX;
//         int idx = -1;
//         for(int j=0;j<n;j++){
//             if(visited[j] == 1) continue;
//             else{
//                 if(arr[j]<min && arr[j]>0){
//                 min = arr[j];
//                 idx = j;
//             }
//         }
//     }
//                 arr[idx] = insrt;
//                 visited[idx] = 1;
//                 insrt++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }

// // problem that find a valur k so that we substract the value k of each 
// // value of an array and the array will be sort value absolute hgi
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<climits>
// using namespace std;

// int main(){ 
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      int k1 = 0;
//      int k2  = INT_MAX;
//     for(int i=1;i<n;i++){
//         if(arr[i-1]-arr[i]>0){
//            k1 = max(k1,(arr[i] + arr[i-1] + 1)/2);
//         }
//         else if(arr[i-1]-arr[i]<0){
//            k2 = min(k2,(arr[i] + arr[i-1])/2);
//         }
//     }
//         if(k1>k2){
//            cout<<-1<<" ";
//         }
//    else{
//         for(int i = k1;i<=k2;i++){
//             cout<<i<<" ";
//         }
//     } 
// return 0;
// }

// to find sum of two  minimum numbers which are made by the alement of an array
// as array 42153 smallest 12345 and secsmal 12354 add 24699
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){ 
    int n;
     cin>>n;
     vector<int> arr(n);
     vector<int> x(n);
     vector<int> y(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        x[i] = (arr[i]);
        y[i] = arr[i];
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    for(int i=n-1;i>=0;i--){
        if(y[i]!=y[i-1]){
            swap(y[i],y[i-1]);
            break;
        }
    }
    int smallest = 0;
    int secsmallest = 0;
    for(int i=0;i<n;i++){
       smallest = (smallest)*10 + x[i];
       secsmallest = (secsmallest)*10 + y[i];
    }
    cout<<smallest+secsmallest<<endl;
return 0;
}