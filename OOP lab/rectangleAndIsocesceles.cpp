#include<iostream>
using namespace std;

class area_cl{
public:
    double height;
    double width;
    void area();
};

class rectangle : public area_cl{
public:
    rectangle(double h, double w){
        height=h;
        width=w;
    }
    void area(){
        cout << "Area of rectangle: " << height*width << endl;
    }
};
class isosceles : public area_cl{
public:
    isosceles(double h, double w){
        height=h;
        width=w;
    }
    void area(){
        cout << "Area of isosceles: " << 0.5*height*width << endl;
    }
};

int main(){
    double h, w;
    cout << "Enter height and width : ";
    cin >> h >> w;

    rectangle obj1(h, w);
    obj1.area();
    isosceles obj2(h, w);
    obj2.area();

    return 0;
}
