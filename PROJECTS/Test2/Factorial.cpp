//============================================================================
// Name        : Factorial.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Factorial(int&f) {
int i=1;

if (f>=-10 && f<=10){
 for (i=1; i<=f; i++){
	 f*=i;
 }
}
else{
	cout << 1;
}
return f;
}

int main(){
	int a;
	cin >> a;
	Factorial(a);
	cout << a;
	return 0;
}







