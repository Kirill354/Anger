//============================================================================
// Name        : Twice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, y, e, i = 0;
    vector<int> v;
    cin >> N;
    while (N >=1) {
        y = N % 2;
        N = N / 2;
        v.push_back(y);
        ++i;
    }
    for (e = i - 1;e >= 0;e--) {
        cout << v[e];
    }
    return 0;
}
