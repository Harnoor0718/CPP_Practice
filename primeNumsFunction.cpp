#include<iostream>
using namespace std;

void primeNo(int n){
    bool isPrime = true;

    if(n <= 1){
        cout << "non-prime" << endl;
        return;
    }

    for(int i = 2; i <= n/2; i++){  // check up to n/2
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << "Prime" << endl;
    }
    else{
        cout << "non-prime" << endl;
    }
}

int main(){
    primeNo(13);
    return 0;
}
