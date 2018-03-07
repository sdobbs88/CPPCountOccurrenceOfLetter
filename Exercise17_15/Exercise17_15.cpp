/**
* Class: CSCI2490 C++ Programming
* Instructor: Y. Daniel Liang
* Description: Receives character string and counts occurrences of a specific 
* letter that the user types in. 
* Due: 11/14/2016
* @author Shaun C. Dobbs
* @version 1.0

* I pledge by honor that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.

Sign here: Shaun C. Dobbs
*/



#include "stdafx.h"
#include <iostream>
#include <string> 
using namespace std;
int count(const string& s, char a);
int count(const string& s, char a, int high);

int c = 0;

int count(const string& s, char a, int high) 
{

	if (high >= 0) {
		if (s[high] == a) {
			c++;
			count(s, a, high - 1);
		}
		else {
			count(s, a, high - 1);
		}
	}
	return c;
}

int count(const string& s, char a) 
{
	return count(s, a, s.size() - 1);
}

int main()
{
	string s1;
	char character;

	cout << "Enter a string: " << endl;
	getline(cin, s1);
	cout << "Enter character to search for: " << endl;
	cin >> character;

	cout << "The character " << character << " appears " << count(s1, character) << " times." << endl;

	return 0;
}

