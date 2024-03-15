#include<iostream>
using namespace std;
int n;
void print(){
    for(int i=1; i<=n; i++){
        for(char ch = 'A'; ch < 'A'+i; ch++){
            cout<<ch<<" ";
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

// Output ->
// A       
// A B     
// A B C   
// A B C D 