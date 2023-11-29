#include<iostream>
using namespace std;

class COMPLEX{
    int real, imaginary;
public:
    COMPLEX(){
        real=imaginary=0;
    }
    COMPLEX(int r, int i){
        real=r;
        imaginary=i;
    }
    void add(COMPLEX c1, COMPLEX c2){
        real = c1.real + c2.real;
        imaginary = c1.imaginary + c2.imaginary;
    }
    void show(){
        cout <<"The number is: " << real << "+" << imaginary <<"i" << endl;
    }
};

int main(){
    int r, i;
    char ch;
    cout << "Enter the complex number: ";
    cin >> r >> ch >> i >> ch;
    COMPLEX obj1(r, i);
    cout << "Enter the complex number: ";
    cin >> r >> ch >> i >> ch;
    COMPLEX obj2(r, i);

    COMPLEX obj3;
    obj3.add(obj1, obj2);
    obj3.show();

    return 0;
}
