#include<iostream>
using namespace std;
void changeA(int &b){ // Pass by refernce using alias
    b = 20;
    }
int main(){
    int a = 10;
    changeA(a);
    cout<<"inside main fxn:"<<a<<endl;
    return 0;
    }

