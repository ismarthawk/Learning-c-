#include <bits/stdc++.h>
using namespace std;

void print(int);

int main(void){

	int a[6] = {1, 2, 3, 4, 5, 6};
	int s = sizeof(a) / sizeof(int);
	for_each(a, a + s, print);


	return 1;
}


void print(int k){
	cout << k << " ";
}