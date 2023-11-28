#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of inputs: ";
    cin >> n;

    int data[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> data[i];
    }
    int item;
    cout << "Enter the element to find: ";
    cin >> item;

    int loc, l=0, r=n-1, mid;
    while(l<=r){
        mid=l+((r-l)/2);
        if(data[mid]==item){
            loc=mid;
            cout << item << " found at : " << loc+1 << endl;
            return 0;
        }
        else if(data[mid]<item){
            l=mid+1;
        }
        else r=mid-1;
    }
    cout << "Not found" << endl;
    return 0;
}
