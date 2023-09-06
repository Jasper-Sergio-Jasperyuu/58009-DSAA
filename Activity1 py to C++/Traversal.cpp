#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
int sum = 0;
int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
for (int i = 0; i < 10; i++){
cout << "numbers["<< i << "] = " << numbers[i]<< endl;
sum = sum + numbers[i];
 }
cout << "\nThe sum of the numbers are: " << sum;
	return 0;
}
