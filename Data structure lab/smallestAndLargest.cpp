/*
step 1: set K:=1, MINL:=1, MAXL:=1, MIN:=DATA[1], MAX:=DATA[1]
step 2: set K:k+1
step 3: IF K>N then,
            write MINL, MAXL, MIN, MAX and exit
step 4: IF MAX<DATA[K] then,
            set MAXL:=K, MAX:=DATA[K]
step 5: IF MIN>DATA[K] then,
            set MINL:=K, MIN:=DATA[K]
step 6: goto step 2;
*/

#include<iostream>
using namespace std;

int main(){
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    int data[n];
    cout << "Enter the integers : ";
    for(int i=0; i<n; i++){
        cin >> data[i];
    }

    int minl=0, maxl=0, minarr=data[0], maxarr=data[0], k=0;
    while(k<n){
        if(maxarr<data[k]){
            maxarr=data[k];
            maxl=k;
        }
        if(minarr>data[k]){
            minarr=data[k];
            minl=k;
        }
        k=k+1;
    }
    cout << endl << "Largest integer: " << maxarr << " found at: " << maxl+1 << endl;
    cout << "Smallest integer: " << minarr << " found at: " << minl+1 << endl;
    return 0;
}
