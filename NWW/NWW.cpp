﻿// NWW.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
	
#include<iostream>
using namespace std;

int NWD(int a, int b)
{
	int pom;

	while (b != 0)
	{
		pom = b;
		b = a % b;
		a = pom;
	}
	return a;
}

int main()
{
	unsigned int a, b;

	cout << "Podaj dwie liczby: ";
	cin >> a >> b;

	cout << "NWW(" << a << ", " << b << ") = " << a / NWD(a, b) * b << endl;

	cin.ignore();
	cin.get();

	return 0;

