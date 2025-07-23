#include<iostream>
using namespace std;
int factN(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
       fact = fact*i;
        }
        return fact;
    }
int main(){
    int val = factN(5);
    cout<<val;
    return 0;
    }

