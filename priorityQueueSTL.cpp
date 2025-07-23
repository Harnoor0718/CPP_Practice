#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q;
    q.push(5);
    q.push(2);
    q.push(10);
    q.push(3);

    while(!q.empty()){
        cout<<q.top()<<endl;
        q.pop();
    }

    return 0;
    }

