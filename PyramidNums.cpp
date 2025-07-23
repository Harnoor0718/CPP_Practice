#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        // Print spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // Print ascending numbers
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        // Print descending numbers
        for(int j=i-1; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
