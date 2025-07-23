#include<iostream>
using namespace std;
int main(){
    char str[100];

    cout<<"Enter char array :"<<endl;
    cin.getline(str,100,'$');
    cout<<"output is "<<str<<endl;
    return 0;
    }

