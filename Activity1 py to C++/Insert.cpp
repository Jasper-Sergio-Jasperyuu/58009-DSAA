#include <iostream>
using namespace std;
int main(int argc, char** argv) {
int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int n = 12;
int Newnumbers[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 for (int i = 0, j = 0; i < 11; i++) {
        if (i == 1) {
            Newnumbers[i] = n;
        } else {
            Newnumbers[i] = numbers[j++];
        }
    }
cout << "Numbers[ ";
for (int i = 0; i < 10; i++){
	cout << numbers[i] <<" ";
}
cout <<"]"<< endl;

cout << "Inserted Numbers[ ";
for (int i = 0; i < 11; i++){
	cout << Newnumbers[i] <<" ";
}
cout <<"]";
return 0;
}
