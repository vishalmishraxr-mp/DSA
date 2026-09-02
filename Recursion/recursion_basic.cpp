// #include<iostream>
// using namespace std;

// int factorial(int n){
//     // base cases
//     if(n==1 || n==0){
//         return 1;
//     }
//     // factoriual of n = n*(n-1) ka factorial
//     int ans =  n*factorial(n-1);
//     return ans; 
// }
// int main(){ 
//     cout<<factorial(5)<<endl;
// return 0;
// }

// // priont n to 1
// #include<iostream>
// using namespace std;
 
// int print(int n){
//     if(n==0) return 0;
//     cout<<n<<endl;
//     return print(n-1);
// }
// int main(){ 
//     print(10);
// return 0;
// }


// // priont 1 to n
// #include<iostream>
// using namespace std;
 
// void print(int n){
//     if(n==0) return;
//      print(n-1);
//     cout<<n<<endl;
// }
// int main(){ 
//     print(10);
// return 0;
// }

// // print 1 to N using an extra parameter
// #include<iostream>
// using namespace std;
// int print(int i, int n){
//     if(i>n) return 0;
//     cout<<i<<endl;
//     return print(i+1,n);
// }
// int main(){ 
//     int n;
//     cin>>n;
//     cout<<"number from 1 to "<<n<<endl;
//     print(1,n);
// return 0;
// }

// //sum from 1 to n numbers using parameter
// #include<iostream>
// using namespace std;

// void sumuptoN(int sum,int n){
//     if(n==0){
//         cout<<sum<<endl;
//         return;
//     }
//     sumuptoN(sum+n,n-1);
// }
// int main(){ 
//     sumuptoN(0,10);
// return 0;
// }

// // sum from 1 to n using return type
// #include<iostream>
// using namespace std;

// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return sum(n-1) + n;
// }
// int main(){ 
//     cout<<sum(10)<<endl;
// return 0;
// }

// // power of a using recursion
// #include<iostream>
// using namespace std;

// int power(int a, int b){
//     if(a==0) return 0;
//     if(b==0) return 1;
//     return a*power(a,b-1);
// }
// int main(){ 
//     cout<<power(3,4)<<endl;
// return 0;
// }

// //calculate fibonnaci number using recursion
// #include<iostream>
// using namespace std;

// int fibbonaci(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return fibbonaci(n-1) + fibbonaci(n-2);
// }
// int main(){ 
//     cout<<fibbonaci(8);
// return 0;
// }

// calculate power using algorithms 
#include<iostream>
using namespace std;

int pow(int a, int b){
     if(a==1) return 1;
     if(b==0) return 1;
     if(b==1) return a;
     if(b%2==0){
        return pow(a,b/2)*pow(a,b/2);
     }
     if(b%2!=0){
        return pow(a,b/2)*pow(a,b/2)*a;
     }
    return 0;
} 
int main(){ 
    cout<<pow(3,7)<<endl;
return 0;
}