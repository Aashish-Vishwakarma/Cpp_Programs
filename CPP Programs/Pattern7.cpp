#include<iostream>
using namespace std;
int n,start;
void print(){
    for(int i=0; i<n; i++){
       start=i;
       if(i%2==0) start=1;
       else start=0;
       for(int j=0; j<=i; j++){
        cout<< start;
        start = 1-start;
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