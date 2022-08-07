#include <iostream>
using namespace std;

int main (int argc , char *argv[]) {
	int size = 0;

	for (int i = 0 ; argv[1][i] != '\0' ; i++) {
		size++;
	}	

	int temp = size - 1;

	for (int i = 0 ; i < size/2 ; i++) {
		char temp1 = argv[1][i];
		argv[1][i] = argv[1][temp];
		argv[1][temp] = temp1;
		temp--;
	}	

	cout << "	Reversed Argument= " << argv[1] << endl;
	exit(1);
}
