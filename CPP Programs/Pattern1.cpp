#include<iostream>
using namespace std;
void pattern(){
    int n;char s;
    cout<<"Give a number of rows-columns : ";
    cin>>n;
    cout<<"Give a symbol : ";
    cin>>s;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<s<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern();
    return 0;
}

// output-> n=4
//         * * * *
//         * * * *
//         * * * *
//         * * * *