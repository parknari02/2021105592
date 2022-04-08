#include<iostream>
using namespace std;

int main() {
	int i = 1;
	while (i < 9) {
		int j = 1;
		while (j < 10) {
			cout << i << "x" << j << "=" << i * j << endl;
			j++;
			
		}
		
		i++;
		cout << endl;
	}



}