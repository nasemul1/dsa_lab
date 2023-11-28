#include<iostream>
using namespace std;

void tower(int n, char begp, char auxp, char endp){
    if(n==1){
        cout << "Moving disk 1 from peg " << begp << " to peg " << endp << endl;
        return;
    }
    tower(n-1, begp, endp, auxp);
    cout << "Moving disk " << n << " from peg " << begp << " to peg " << endp << endl;
    tower(n-1, auxp, begp, endp);
}

int main(){
    cout << "Enter the number of disk: ";
    int n; cin >> n;
    tower(n, 'A', 'B', 'C');
    return 0;
}
