#include<iostream>
#include<vector>
using namespace std;

// Fractional Knapsack problem

int main(){ 
    cout<<"enter the size of cost and weigth arr: ";
    int n;
    cin>>n;
    cout<<"enter the capacity of your bag: ";
    int cap;
    cin>>cap;  // capacity of a bag
    vector<int> cost(n), weight(n);
    cout<<"enter the element of your cost arr: ";
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
    cout<<"enter the element of your wight arr: ";
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    // now we have to fill the bag so that we have to achieve max profit
    vector<vector<double>> profitable(n, vector<double>(3)); 
     // 2D vector with n rows and 3 coloumn
    for(int i=0;i<n;i++){
        profitable[i][0] = cost[i]/(weight[i]*1.0);  // jiska cost/weight ratio jayda hoga
        // vo profitable hoga
        profitable[i][1] = cost[i];  // cost 
        profitable[i][2] = weight[i];  // weight
    }
    sort(profitable.begin(),profitable.end());   // sort 
    reverse(profitable.begin(),profitable.end()); // reverse
    double totalprofit = 0;
    int i = 0;
    int remaincap = cap;
    while(remaincap>0 && i<n){
        if(remaincap>=profitable[i][2]){
            totalprofit += profitable[i][1];  // cost add kro
            remaincap = remaincap-profitable[i][2];  // weight ghatao
        }
        else{
            totalprofit += profitable[i][0]*(remaincap*1.0);  // frsctional cost
            break;
        }
            i++;
    }
    cout<<totalprofit<<endl;
return 0;
}