#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character :";
    cin>>ch;
    if(ch >= 65 && ch <=90){
        cout<<"UpperCase";
    }
    else{
        cout<<"LowerCase";
    }
    return 0;
     }

