// #include<iostream>
// using namespace std;

// int main(){ 
//     int arr[] = {1,5,3,8,67,2,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;
//     int maxsum = INT_MIN;
//     int maxidx = -1;
//     for(int i=0;i<n-k;i++){
//         int sum = 0;
//         for(int j=i;j<i+k;j++){
//             sum += arr[j];
//         }
//         if(sum>maxsum) {
//             maxsum = sum;
//             maxidx = i;
//         }
//     }
//     cout<<maxsum<<" at index "<<maxidx<<endl;
// return 0;
// }


//sliding window algorithms
#include<iostream>
using namespace std;

int main(){ 
    int arr[] = {1,5,113,8,67,2,98};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int i = 1;
    int j = k;
    int maxsum = INT_MIN;
    int maxidx = -1;
    int sum = 0;
    for(int x = 0;x<k;x++){
            sum += arr[x];
        }
    while(j<n){
        sum = sum + arr[j] - arr[i-1];
        if(maxsum<sum) {
            maxsum = sum;
            maxidx = i;
        }
        i++;
        j++;
    }
    cout<<maxsum<<" at index "<<maxidx<<endl;

return 0;
}