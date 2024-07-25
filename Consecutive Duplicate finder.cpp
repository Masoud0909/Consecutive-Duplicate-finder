//Using while loops, write a program that asks the user to enter several integers.The program stops(and prints an appropriate message) when two consecutive duplicates are entered.

#include <iostream>
#include <string>
#include <iomanip>	

using namespace std;

int main() {

	int num1, num2;
	cout << "Please enter several integers and I'm telling you if you put duplicates, I will show you sth interesting!  "<< endl;
	cin >> num1 >> num2;

	while (num1 != num2) {
		num1 = num2;
		cin >> num2;
	}
	cout << "\n" << "sth interesting ! " << endl;

}