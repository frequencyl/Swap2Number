#include <iostream>
using namespace std;
void swap(int* a, int* b);
int main() {
	//SWAP 2 Number USING POINTER
	int x = 15;
	int y = 5;
	cout << "value of x " << x << endl;
	cout << "value of y " << y << endl;
	swap(&x, &y);
	cout << "value of x " << x << endl;
	cout << "value of y " << y << endl;
}
void swap(int* a, int* b) {
	int temp1 = *a;
	int temp2 = *b;
	*b = temp1;
	*a = temp2;

}