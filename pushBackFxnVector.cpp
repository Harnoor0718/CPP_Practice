#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec(0);
    cout<<"size :"<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(45);
    vec.push_back(35);
    cout<<"size :"<<vec.size()<<endl;
    vec.pop_back();
    cout<<"size :"<<vec.size()<<endl;
    cout<<"Element at front :"<<vec.front()<<endl;
    cout<<"Element at back :"<<vec.back()<<endl;
    cout<<vec.at(1)<<endl;
    return 0;
    }

