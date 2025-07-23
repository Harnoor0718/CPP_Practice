#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
using namespace std;

int main(){
    map<string,int> m;
    m["tv"]=100;
    m["earphones"]=90;
    m["buds"]=45;
    m["tablets"] = 120;
    m["watch"] = 65;

    m.insert({"camera",67});
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.count("watch")<<endl;


    return 0;
    }
