// #include<iostream>
// using namespace std;

// void pip(int n){
//     if(n==0) return;
//     cout<<"Pre: "<<n<<endl; // print
//     pip(n-1);  //call1
//     cout<<"In: "<<n<<endl;  // print
//     pip(n-1);  //call2
//     cout<<"Post: "<<n<<endl; // print
// }
// int main(){ 
//     pip(3);
// return 0;
// }

// zig-zag print 321112111232111211123
#include<iostream>
using namespace std;

void zigzag(int n){
    if(n==0) return;
    cout<<n;
    zigzag(n-1);
    cout<<n;
    zigzag(n-1);
    cout<<n;
}
int main(){ 
    zigzag(2);
return 0;
}