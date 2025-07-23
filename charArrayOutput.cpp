#include<iostream>
using namespace std;
int main(){
    char str[12];
    cout<<"Enter char array"<<endl;
    cin.getline(str,12);
    for(char ch : str){
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
    }
