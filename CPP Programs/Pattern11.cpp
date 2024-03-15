#include<iostream>
using namespace std;
void print(int n) {
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //alphabet
        char ch ='A';
        int breakpoint = (2*i-1)/2;
        for(int j=0; j<2*i+1; j++){
            cout<<ch<<" ";
            if(j<= breakpoint)
            ch++;
            else
            ch--;
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    print(3);
    return 0;
}

// Output->
//     A             
//    A B A          
//   A B C B A       
//  A B C D C B A    
// A B C D E D C B A 