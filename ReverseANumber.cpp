#include<iostream>
using namespace std;

int reverseNum(int n){
    int ans = 0;
    while(n > 0){
        int rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }
    return ans;
}

int main(){
    cout << reverseNum(123);
    return 0;
}
