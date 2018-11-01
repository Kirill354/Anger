//============================================================================
// Name        : Max.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){
int a, b, d;
cin >> a >> b;
int x = a;
if(b > a){
x = b;
}
for(int i = 1; i <= x; i++){
        if(a%i == 0 && b%i == 0){
                  d = i;
                  }
        }
       cout << d;
return 0; }



