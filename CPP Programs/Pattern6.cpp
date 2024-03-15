#include<iostream>
using namespace std;
void pattern(int n){
    // int n;
    // cout<<"Give a number of rows-columns : ";
    // cin>>n;
    for(int i=1; i<=n; i++){
        //space
        for(int j=0; j<= n-i-1; j++){
            cout<< " ";
        }
        //stars
        for(int j=1; j<= 2*i-1; j++){
            cout<< "*";
        }
        //space
        for(int j=0; j<= n-i-1; j++){
            cout<< " ";
        }
        cout<< endl;
    }
}
    void pattern2(int n){
        // int n;
        // cin>>n;
       for(int i=n; i>=1; i--){
        //space
        for(int j=0; j<= n-i-1; j++){
            cout<< " ";
        }
        //stars
        for(int j=1; j<= 2*i-1; j++){
            cout<< "*";
        }
        //space
        for(int j=0; j<= n-i-1; j++){
            cout<< " ";
        }
        cout<< endl;
    } 
}
int main(){
    pattern(5);
    pattern2(5);
    return 0;
}

/*
OUTPUT-> n=5
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    * 
*/