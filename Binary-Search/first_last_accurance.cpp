#include<iostream>
using namespace std;

int main(){ 
    int n = 8;
    int target = 8;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> ans(2);
        int low = 0;
        int high = n-1;
        int mid = low+(high-low)/2;
        ans[0] = -1;
        ans[1] = -1;
        // fisrt accurance
        while(low<=high){
            mid = low+(high-low)/2;
            if(nums[mid]==target && mid==low){
               ans[0] = low;
               break;
            } 
            if(nums[mid]==target){
                if(nums[mid-1]!=target){
                ans[0] = mid;
                break;
                }
                else{
                high = mid-1;
                }
            }
            if(nums[mid]<target){
                low = mid+1;
            }
            if(nums[mid]>target){
                high = mid-1;
                }
            }
            low = 0;
            high = n-1;
            // last accurance
        while(low<=high){
            mid = low+(high-low)/2;
            if( nums[mid]==target && mid==high){
                ans[1] = high;
                break;
            }
            if(nums[mid]==target){
                if(nums[mid+1]!=target){
                    ans[1] = mid;
                break;
                }
                else{
                low = mid+1;
                }
            }
            if(nums[mid]<target){
                low = mid+1;
            }
            if(nums[mid]>target){
                high = mid-1;
                }
            }
        cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}

// same question if given that a binary array sorted find number of 1 in the array 
// as:- 0 0 0 0 1 1 1 1 1 1
// find fisrt accurance of 1 = 4;
// find last accurance of 1 = 9;
// number of 1 is: = 9-4+1 = 6;

//                 or
// number of 1 is: n-fisrtaccurance
