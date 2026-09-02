#include<iostream>
#include<cstring>
using namespace std;

int main(){ 
    char arr[20];
    cin>>arr;
    long long digit = strlen(arr);
    long long ans = 0;
    ans += (1<<digit) -2;
    int count = 0;
    for(int i = digit-1; i>=0;i--){
        if(arr[i]=='7') ans += (1<<count);
        count++;
    }
    cout<<ans+1<<"\n";
return 0;
}