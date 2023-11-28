#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char text[100], pat[10];
    cin >> text >> pat;

    int s=strlen(text);
    int r=strlen(pat);
    //cout << s << " " << r;
    int k=0, maxl=s-r, index=-1;
    while(k<=maxl){
        int l=0;
        while(l<r){
            if(pat[l]!=text[k+l]) break;
            l=l+1;
            if(l==r){
                index=k;
                cout << index+1 << endl;
                return 0;
            }
        }
        k=k+1;
    }
    cout << index << endl;
    return 0;
}
