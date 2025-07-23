#include<iostream>
using namespace std;
int minValue(int a,int b){
    if(a<b){
        return a;
        }
    else{
        return b;
        }
    }
int main(){
    int val = minValue(3,6);
    cout<<val;
    }

