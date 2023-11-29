#include <iostream>
using namespace std;
void volume(int l, int b, int h){
    cout << "Volume of a rectangle: " << l * b * h << endl;
}
void volume(double r, int h){
    cout << "Volume of a cylinder: " << 3.1416 * r * r * h << endl;
}
void volume(int sl){
    cout << "Volume of a cube: " << sl * sl * sl << endl;
}
int main(){
    int l, b, h, a;
    double r;
    cout << "Enter l, b & h to calculate the volume of a rectangle: ";
    cin >> l >> b >> h;
    volume(l, b, h);
    cout << "Enter r & h to calculate the volume of a cylinder: ";
    cin >> r >> h;
    volume(r, h);
    cout << "Enter a to calculate the volume of a cube: ";
    cin >> a;
    volume(a);
    return 0;
}

