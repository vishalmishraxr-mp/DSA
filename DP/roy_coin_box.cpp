// Roy has N coin boxes numbered from 1 to N.
// Every day he selects two indices [L,R] and adds 1 coin to each coin box starting from L to R (both inclusive).
// He does this for M number of days.

// After M days, Roy has a query: How many coin boxes have atleast X coins.
// He has Q such queries.

#include <iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> arr(n+1,0);   
	int m;
	cin>>m;
	vector<int> l(n+1,0);
	vector<int> r(n+1,0);
	for(int i=0;i<m;i++){
		int L,R;
		cin>>L>>R;
		l[L]++;
		r[R]++;
	}
	arr[1] = l[1];
	for(int i=2;i<=n;i++){
		arr[i] = l[i] + arr[i-1] - r[i-1];
	}
	vector<int> iter(n+1,0);
	for(int i = 0; i<=n;i++){
		int coins = arr[i];
		iter[coins]++;
	}
	for(int i = iter.size()-2;i>=0;i--){
		iter[i] = iter[i+1] + iter[i];
	}
	int q;
	cin>>q;
	while(q--){
		int num;
		cin>>num;
		cout<<iter[num]<<endl;
	}
	return 0;
}