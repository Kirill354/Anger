//============================================================================
// Name        : MyFirstProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main(){
 int a,b,c,D;
 double x1,x2;
 cin>>a>>b>>c;
 if(a==0&&b==0&&c==0) {
	 cout<<" net resheniya ";
 }
 else {
	 D =(b*b- 4*a*c);
	 x1=(-b-sqrt(D))/2*a;
	 x2=(-b+sqrt(D))/2*a;
 }
 if ((a=0)&&(b=0)) {
	 cout<<"error"<<endl;
 }
 cout<<"x1="<<x1<<" "<<"x2="<<x2<<endl;
 }







