//============================================================================
// Name        : Delenie.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string max(string first, string second)
{
    if (first > second)
    {
        return first;
    }
    else
    {
        return second;
    }
}

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    cout << max(max(a, b), max(b, c)) << endl;
    return 0;
}
