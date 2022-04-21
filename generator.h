#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Generator {
public:
    vector<int> ReadInput;
    vector<int> Result;
    Generator() {};
    void Read(vector<int>);
    bool Recursive(vector<int>, int, int = 0);
    void Find();
    void print();
};