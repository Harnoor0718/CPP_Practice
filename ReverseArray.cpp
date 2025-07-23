
#include <iostream>
using namespace std;
    void ReverseArray(int arr[],int sz){
        int start=0;
        int endd=sz-1;
        while(start<endd){
            swap(arr[start],arr[endd]);
            start++;
            endd--;
                    }
        }

int main() {
    int arr[]={2,4,56,78,5};
    int sz = sizeof(arr)/sizeof(int);
    ReverseArray(arr,sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
