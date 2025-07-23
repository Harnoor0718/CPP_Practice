#include<iostream>
using namespace std;
int decToBinary(int deciNum){
    int ans = 0;
    int pow = 1;
    while(deciNum >0){
        int rem = deciNum % 2;
        deciNum = deciNum / 2;
        ans += (rem*pow);
        pow = pow*10;
        }
        return ans;
    }
int main(){
    int deciNum = 6;
    cout<<decToBinary(deciNum)<<endl;
    return 0;
    }
