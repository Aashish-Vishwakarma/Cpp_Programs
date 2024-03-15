#include<iostream>
using namespace std;
void pattern(){
    int n;
    cout<<"Give a number of rows-columns : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern();
    return 0;
}

/* Output -> n=5
1 2 3 4 5 
1 2 3 4   
1 2 3     
1 2       
1       
*/