#include<iostream>
using namespace std;

int main(){
    cout << "Enter the size of array: ";
    int n; cin >> n;

    cout << "Enter the elements: ";
    int data[n];
    for(int i=0; i<n; ++i){
        cin >> data[i];
    }

    int k=0;
    while(k<n){
        int ptr=0;
        while(ptr<n-k){
            int temp;
            if(data[ptr]>data[ptr+1]){
                temp=data[ptr+1];
                data[ptr+1]=data[ptr];
                data[ptr]=temp;
            }
            ptr=ptr+1;
        }
        k=k+1;
    }
    for(auto x:data){
        cout << x << " ";
    }

    return 0;
}
