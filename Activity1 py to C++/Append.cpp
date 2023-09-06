#include <iostream>
using namespace std;
int main(int argc, char** argv) {
int c = 25;
int numbers[c] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int n = 11;
cout << "Numbers[ ";
for (int i = 0; i < 10; i++){
	cout << numbers[i] <<" ";
}
cout <<"]"<< endl;
numbers[10] = 11;
cout << "Appended Numbers[ ";
for (int i = 0; i < 11; i++){
	cout << numbers[i] <<" ";
}
cout <<"]";
	return 0;
}
