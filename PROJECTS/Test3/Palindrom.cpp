//============================================================================
// Name        : Palindrom.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>

using namespace std;

bool check_polindrom(string word)
{
	int len = word.length();
	for(int i = 0; i < len/2; ++i)
	{
		if(word[i] != word[len-i-1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string str;
	cout << "Enter the word: ";
	cin >> str;
	if(check_polindrom(str))
	{
		cout << "Word is Polindrom.";
	}
	else
	{
		cout << "Word is not Polindrom";
	}
	return 0;
}
