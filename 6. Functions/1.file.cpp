#include <bits/stdc++.h>
using namespace std;

void func(int);
void func(double);

int main(void){


	func(20);
	func(30.22);
	func((int)(20.22));

	return 1;
}

void func(int k){
	cout << "Integer" << endl;
	return;
}

void func(double k){
	cout << "Float" << endl;
	return;
}