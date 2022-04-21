#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Primitive {
public:
    vector<double> ReadInput;
    int N;
    double Max = INT_MIN;
    vector<vector<double>> Combos;
    Primitive() {};
    void Read(vector<double>);
    bool Madness(vector<double>);
    void Go();
    void print();
};