#include<iostream>
using namespace std;

int main(){ 
    int arr[3][3] = {0,0,0,0,1,1,0,0,1};
    
    //  0  0  1   1st row, row is sorted
    //  1  1  1   2nd row,
    //  0  1  1   3rd row, 
    int n = 3;
    int m = 3;
    int f = 0;
    int maxf = 0;
    int idx = -1;
    for(int i=0;i<3;i++){
        int low = 0;
        int high = (m-1);
        int mid = low + (high-low)/2;
        while(low<=high){
            mid = low+(high-low)/2;
            if(arr[i][mid]==1 && mid==low){
               f = m-low;  
               break;
            } 
            if(arr[i][mid]==1){
                if(arr[i][mid-1]!=1){
                f = m-mid;
                break;
                }
                else{
                high = mid-1;
                }
            }
            if(arr[i][mid]<1){
                low = mid+1;
            }
            if(arr[i][mid]>1){
                high = mid-1;
                }
            }
        if(f>maxf){
            maxf = f;
            idx = i;  // index update when row have more 1 than prev rows
        }
        f = 0;
    }
    cout<<maxf<<" times 1 is present in "<<idx+1<<" row"<<endl;

return 0;
}