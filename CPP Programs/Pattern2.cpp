#include<iostream>
using namespace std;
void pattern(){
    int n;char s;
    cout<<"Give a number of rows-columns : ";
    cin>>n;
    cout<<"Give a symbol : ";
    cin>>s;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<s<<" ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<s<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern();
    return 0;
}

/* output-> n=4
*         
* *       
* * *     
* * * *   
* * * * * 
* * * * * 
* * * *   
* * *     
* *       
*
*/