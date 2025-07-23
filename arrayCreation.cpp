#include<iostream>
using namespace std;
int main(){
    int marks[5];
    cout<<"Enter marks:";
    for(int i=0;i<5;i++){
        cin>>marks[i]>>endl;
    }
    cout<<sizeof(marks)/sizeof(int)<<endl;
    for(int i=0;i<5;i++){
        cout<<marks[i]<<endl;
    }
    return 0;
    }
