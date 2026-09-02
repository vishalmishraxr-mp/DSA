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
//     int low = 1;
//     int high = n-2;
//     int mid = low + (high-low)/2;
//     bool flag = false;
//     while(low<=high){
//         int mid = low + (high-low)/2;
//         if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
//             flag = true;
//             cout<<mid<<endl;
//         }
//         if(arr[mid]<arr[mid-1]){
//             high = mid-1;
//         }
//        else{
//             low = mid+1;
//         }
//     }
//     if(flag == false){
//         cout<<mid<<endl;
//     }

// return 0;
// }
