//leetcode 209

#include<iostream>
using namespace std;


int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 1;
        int k = 1;
        for(int k=1;k<=n;k++){
               int sum = 0;
        for(int i=0;i<k;i++){
            sum += nums[i];
            }
            if(sum>=target) {
                    return k;
                }
            int i= 0;
           for(int j=k;j<n;j++){
                sum += nums[j] - nums[i];
                i++;
                if(sum>=target) return k;
               }
            }
        return 0;
    }
int main(){ 
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = minSubArrayLen(target,arr);
    cout<<ans<<endl;
return 0;
}