#include<iostream>
using namespace std;

class Float{
    float x;
public:
    Float(){
        x=0.0;
    }
    Float(float num){
        x=num;
    }
    Float operator + (Float o){
        Float c;
        c.x = x + o.x;
        return c;
    }
    Float operator - (Float o){
        Float c;
        c.x = x - o.x;
        return c;
    }
    Float operator * (Float o){
        Float c;
        c.x = x * o.x;
        return c;
    }
    Float operator / (Float o){
        Float c;
        c.x = x / o.x;
        return c;
    }
    void display(){
        cout << "result = " << x << endl;
    }
};

int main(){
    float f1, f2;
    cout << "Enter the numbers: ";
    cin >> f1 >> f2;
    Float obj1(f1), obj2(f2), obj3;
    cout << "Addition ";
    obj3 = obj1 + obj2;
    obj3.display();
    cout << "Subtraction ";
    obj3 = obj1 - obj2;
    obj3.display();
    cout << "Multiplication ";
    obj3 = obj1 * obj2;
    obj3.display();
    cout << "Division ";
    obj3 = obj1 / obj2;
    obj3.display();
    return 0;
}
