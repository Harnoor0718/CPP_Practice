#include<iostream>
using namespace std;
    int binaryToDecimal(int binNum){
    int ans = 0;
    int pow = 1;
    while(binNum>0){
        int rem = binNum % 2;
        ans += rem *pow;
        binNum = binNum/10;
        pow = pow*2;
            }
        return ans;
        }

int main(){
    int binNum = 101010 ;
    cout<<binaryToDecimal(binNum)<<endl;
    return 0;
    }

