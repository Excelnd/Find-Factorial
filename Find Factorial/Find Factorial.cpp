// Find Factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n, fact=1;
	cout << "Enter positive number: ";
	cin >> n;
	
	for (int i = 1; i <= n; ++i)
		fact = fact * i;
	cout << fact << " Factorial of " << n <<  endl;
    return 0;
}

