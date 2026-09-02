// #include<iostream>
// #include<string>
// using namespace std;

// int main(){ 
//     int t;
// 	cin>>t;
//     cin.ignore();
// 	while(t--){
// 	    string s;
// 	    getline(cin,s);
// 	    int n = s.size();
// 	    int count = 0;
// 	    for(int i=0;i<n;i++){
// 	        if(s[i]=='<') s[i]='>';
// 	        else if(s[i]=='>') s[i]='<';
// 	    }
// 	    for(int i=0;i<n-1;i++){
// 	        if(s[i]=='>' && s[i+1]=='<') count++;
// 	    }
// 	    cout<<count<<endl;
// 	}
// return 0;
// }

//codechef 1049
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int mn = INT_MAX;
        int mx = INT_MIN;
        int minidx = 0;
        int maxidx = 0;
        for(int i=0;i<n;i++){
            if(arr[i] < mn){
                mn = arr[i];
                minidx = i;
            }
            if(arr[i] > mx){
                mx = arr[i];
                maxidx = i;
            }
        }
        int ans = minidx + (n-1-maxidx);  // formula hai
        if(maxidx < minidx){
            ans--;
        }
        cout << ans << endl;
    }
    return 0;
}