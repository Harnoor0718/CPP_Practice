#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
            char ch='A';
        // Print spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        // Print numbers
        for(int j=0; j<n-i; j++){
            cout<<char(ch+i);
        }
        cout<<endl;
    }
    return 0;
}
