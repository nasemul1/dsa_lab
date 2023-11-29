#include<iostream>
using namespace std;

class facto {
    int n;
    int ans;
public:
    facto(){
        cout << "Enter the number: ";
        cin >> n;

        ans=1;
        for(int i=1; i<=n; ++i){
            ans*=i;
        }
    }
    display(){
        cout << "Factorial of " << n << " is " << ans;
    }
};

int main(){
    facto obj1;
    obj1.display();
    return 0;
}
