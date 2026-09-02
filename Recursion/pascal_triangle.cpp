#include<iostream>
using namespace std;

int main(){ 
    int factorial(int n){
            if(n==1 || n==0) return 1;
            string s = n*factorial(n-1);
            return s;
        }
    vector<int> getRow(int rowIndex) {
        vector<int> ansarr;
        for(int i=0;i<=rowIndex;i++){
        int ans = factorial(rowIndex)/(factorial(i)*factorial(rowIndex-i));
        ansarr.push_back(ans);
        }
        return ansarr;
    }
return 0;
}