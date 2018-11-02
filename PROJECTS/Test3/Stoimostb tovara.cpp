//============================================================================
// Name        : Stoimostb.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//1. Написать программу вычисления стоимости покупки с учётом скидки.
//Скидка в X процентов предоставляется, если сумма покупки больше A рублей,
//в Y процентов - если сумма больше B рублей.

#include <iostream>
using namespace std;

    int main() {
	double X,Y,A,B,S;
	cin>>S;
	if (S>A) {
		cout<<"стоимость покупки ="<<S*(1-X/100)<<endl;
	}
	else {
		cout<<S<<endl;
	}
	if (S>B) {
		cout<<"стоимость покупки ="<<S*(1-Y/100)<<endl;
	}
	else {
		cout<<S<<endl;
	}
}



