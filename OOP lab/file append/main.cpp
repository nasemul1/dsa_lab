#include <bits/stdc++.h>
#include<fstream>
using namespace std;
int main() {
   fstream f;
   ifstream fin;
      fin.open("source.txt");
      ofstream fout;
      fout.open("target.txt", ios::app);
   if (!fin.is_open()) {
      cout << "Not found";
      return 0;
   } else {
      fout << fin.rdbuf();
   }
   //string word;
   //f.open("target.txt");
   //while (f >> word) {
   //   cout << word << " ";
   //}
   cout << "File appended!";
   return 0;
}
