#include<iostream>
using namespace std;
int n,num=1;
void print(){
    for(int i=1; i<=n; i++){
     for(int j=1; j<=i; j++){
       cout<<num<<" ";
       num+=1;  
     }
     cout<<endl;  
    }
}
int main(){
    cout<<"Enter no. of rows: ";
    cin>>n;
    print();
    return 0;
}
// output->
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10       
// 11 12 13 14 15