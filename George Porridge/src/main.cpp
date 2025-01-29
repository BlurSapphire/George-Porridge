#include "../include/header.h"
#include <iostream>


using namespace std;

int a;
int b;
int total;
char op;

int main() {

	cout << "Number a: " << endl;
	cin >> a;
	cout << "Number b: " << endl;
	cin >> b;
	cout << "Enter the operation " << endl;
	cin >> op;
	if (op == '+') {
		Operations::Add result(a, b);
		result.PrintResult(total);
	}
	else if (op == '-') {
		Operations::Substract result(a, b);
		result.PrintResult(total);

	}
	else if (op == '*') {
		Operations::Multiply result(a, b);
		result.PrintResult(total);
	}
	else if (op == '/') {
		Operations::Divide result(a, b);
		result.PrintResult(total);
	}
	else
	{
		cout << "Error, restart the code" << endl;
	}
}