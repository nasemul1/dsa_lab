#include<iostream>
#include<cmath>
using namespace std;

class primeCheck{
    bool ch;
    int n;
public:
    primeCheck(){
        cout << "Enter the number: ";
        cin >> n;
        ch=true;
        if(n>2) {
            for(int i=2; i<=sqrt(n); ++i){
                if(n%2==0){
                    ch=false;
                    break;
                }
            }
        }
        else if(n==1) ch=false;
    }
    void show(){
        if(ch==true){
            cout << n << " is prime";
        }
        else{
            cout << n << " is not prime";
        }
    }
};

int main(){
    primeCheck obj1;
    obj1.show();
    return 0;
}
