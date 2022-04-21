#include "Generator.h"
template <class T>
void Print(T someList) {
    for (auto& x : someList) cout << " " << x;
    cout << endl;
}

void Generator::Read(vector<int> input)
{
    if (input.size() == 0)
    {
        cout << "Vector don't input" << endl;
        exit(0);
    }
    else
        ReadInput = input;
}

bool Generator::Recursive(vector<int> combo, int max, int index)
{
    if (index == ReadInput.size()) {
        if (combo.size() > Result.size())
            Result = combo;
        return false;
    }
    if (ReadInput[index] < max && combo.size() == 0 || max - ReadInput[index] == 2)
    {
        vector<int> tmp = combo;
        int tmpMax = max;
        tmp.push_back(ReadInput[index]);
        tmpMax = ReadInput[index];
        if (index < ReadInput.size())
            Recursive(tmp, tmpMax, index + 1);
    }
    if (index < ReadInput.size()) 
        Recursive(combo, max, index + 1);
}

void Generator::Find()
{
    int Max = ReadInput[0];
    for (int i : ReadInput)
        if (i > Max)
            Max = i;
    Max++;
    Recursive(Result, Max);
}

void Generator::print()
{
    cout << " @ Primitive recursive algorithm of full iteration : ";
    Print(Result);
}
