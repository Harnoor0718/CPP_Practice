#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;
    for(int i = 2;i<n;i++){
        if(n%i==0){
            cout<<"non prime";
            break;
        }
       else{
        cout<<"prime";
        break;
       }

    }
    return 0;
    }


