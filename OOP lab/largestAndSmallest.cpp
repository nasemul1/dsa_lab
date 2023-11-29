#include<iostream>
using namespace std;

class B;
class A{
    int a;
public:
    A(){
        cout << "Enter first number: ";
        cin >> a;
    }
    friend void largest(A a1, B b1);
    friend void smallest(A a1, B b1);
};

class B{
    int b;
public:
    B(){
        cout << "Enter second number: ";
        cin >> b;
    }
    friend void largest(A a1, B b1);
    friend void smallest(A a1, B b1);
};

void largest(A a1, B b1){
    if(a1.a > b1.b){
        cout << "Largest: " << a1.a;
    }
    else{
        cout << "Largest: " << b1.b;
    }
}
void smallest(A a1, B b1){
    if(a1.a < b1.b){
        cout << "Smallest: " << a1.a;
    }
    else{
        cout << "Smallest: " << b1.b;
    }
}

int main(){
    A obj1;
    B obj2;
    largest(obj1, obj2);
    cout << endl;
    smallest(obj1, obj2);
    return 0;
}
