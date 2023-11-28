#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int data[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; ++i){
        cin >> data[i];
    }

    int item;
    cout << "Enter the element to find: ";
    cin >> item;

    int k=0, loc=-1;
    while(k<n){
        if(data[k]==item){
            loc=k;
            cout << item << " found at : " << loc+1 << endl;
            return 0;
        }
        k=k+1;
    }
    cout << "Not found" << endl;
    return 0;
}
