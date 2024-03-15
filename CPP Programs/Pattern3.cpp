#include<iostream>
using namespace std;
void pattern(){
    int n;
    cout<<"Give a number of rows-columns : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern();
    return 0;
}