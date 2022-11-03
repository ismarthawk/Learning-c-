#include <bits/stdc++.h>
using namespace std;

int main(void){

	int a = 200;

	if(a % 2 == 0){
		goto even;
	}else {
		goto odd;
	}

	odd :
		cout << "The number is odd" << endl;

	even :
		cout << "The number is even " << endl;

	return 0;
}