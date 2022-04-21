#include "primitive.h"
template <class T>
void Print(T someList) {
    for (auto& x : someList) cout << " " << x;
    cout << endl;
}

void Primitive::Read(vector<double> input)
{
    if (input.size() == 0)
    {
        cout << "Vector don't input" << endl;
        exit(0);
    }
    else {
        ReadInput = input;
        N = input.size();
    }
}

bool Primitive::Madness(vector<double> crazy)
{
    int n = crazy.size();
    Combos.push_back(crazy);
    if (n == 1) {
        if (crazy[0] > Max)
            Max = crazy[0];
        return false;
    }
    for (int i = 0; i < n - 1; i++) {
        vector<double> tmp = crazy;
        double q = tmp[i] + tmp[i + 1];
        auto iter = tmp.cbegin();
        tmp.erase(iter + i + 1);
        tmp[i] = q;
        Madness(tmp);
    }
    for (int i = 0; i < n - 1; i++) {
        vector<double> tmp2 = crazy;
        double q = tmp2[i] * tmp2[i + 1];
        auto iter = tmp2.cbegin();
        tmp2.erase(iter + i + 1);
        tmp2[i] = q;
        Madness(tmp2);
    }
    for (int i = 0; i < n - 1; i++) {
        vector<double> tmp3 = crazy;
        if (tmp3[i + 1] == 0)
            return false;
        double q = tmp3[i] / tmp3[i + 1];
        auto iter = tmp3.cbegin();
        tmp3.erase(iter + i + 1);
        tmp3[i] = q;
        Madness(tmp3);
    }
}

void Primitive::Go()
{
    Madness(ReadInput);
}

void Primitive::print()
{
    cout << " @ Primitive full iterations resursive algoritmh [ + * / ] " << endl;
    cout << " Iterations: " << Combos.size() << "\n" << " Max: " << Max << endl;
    cout << endl;
}
