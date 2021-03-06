#include <iostream>
#include "generator.h"
#include "dinamic.h"
#include "primitive.h"
#include "optimal.h"
#include <fstream>
using namespace std;


// ????? ???????? ??? ??????, ? ???? ???? ??????????? ????????? ???? for (auto x: )
//template <class T>
//void Print(T someList) {
//   for (auto &x: someList) cout<<" "<<x;
//   cout<<endl;
//}

int main() {
    vector<int> input{-2,5,-1,6,4,0,-3,-4,2,1,0};
    cout << endl;
    Generator a;
    a.Read(input);
    a.Find();
    a.print();
    cout << endl;
    cout << endl;
    Dinamic b;
    b.Read(input);
    b.Find();
    b.print();
    cout << endl;
    cout << endl;
    vector<double> content{ 0.5, 1, 0, 2, 2.5, 50, 0.01};
    Optimal c;
    c.Read(content);
    c.print();
    cout << endl;
    cout << endl;
    Primitive z;
    z.Read(content);
    z.Go();
    z.print();
    return 0;
}