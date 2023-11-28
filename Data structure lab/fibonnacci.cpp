#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0 or n==1){
        return n;
    }
    int f1=fibo(n-1);
    int f2=fibo(n-2);

    return f1+f2;
}

int main(){
    cout << "How many Fibonacci number to print: ";
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cout << fibo(i) << " ";
    }
    return 0;
}
