#include<iostream>
using namespace std;

class Time{
    int h, m;
    char ch;
public:
    Time(){
        h=m=0;
    }
    void getData(){
        cout << "Enter time h:m format: ";
        cin >> h >> ch >> m;
    }
    void add(Time t1, Time t2);
    void display();
};

void Time::add(Time t1, Time t2){
    m=t1.m+t2.m;
    h=m/60;
    h= h + t1.h + t2.h;
    m=m%60;
}

void Time::display(){
    cout << "Added time is: " << h <<":" << m;
}

int main(){
    Time obj1, obj2, obj3;
    obj1.getData();
    obj2.getData();
    obj3.add(obj1, obj2);
    obj3.display();
    return 0;
}
