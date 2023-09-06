#include <iostream>
using namespace std;
int main(int argc, char** argv) {
int numbers[5] = {5, 4, 3, 2, 1};
cout << "Numbers[ ";
for (int i = 0; i < 5; i++){
	cout << numbers[i] <<" ";
}
cout <<"]"<< endl;

	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap numbers[j] and numbers[j + 1]
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
cout << "Sorted Numbers[ ";
for (int i = 0; i < 5; i++){
	cout <<numbers[i] <<" ";
}
cout <<"]";
	return 0;
}
