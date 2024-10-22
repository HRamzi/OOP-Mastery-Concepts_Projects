#include <iostream>

using namespace std;

class ClsCalculator {

private:
	float Number = 0;
	float operand = 0;
	string operation = "";

public:

	void setNumber(float Number) {
		this->Number = Number;
	}
	float getNumber() const {
		return Number;
	}

	float clear() {
		Number = 0;
		return Number;
	}
	float add(float numberToAdd) {
		operation = "adding";
		operand = numberToAdd;
		return Number += operand;
	}
	float substract(float numberToSubtract) {
		operation = "subtracting";
		operand = numberToSubtract;
		return Number -= operand;
	}
	float multiply(float numberToMultiply) {
		operation = "multiplying by";
		operand = numberToMultiply;
		return Number *= operand;
	}
	float divide(float numberToDivide) {
		operation = "dividing by";
		operand = numberToDivide;
		if (operand == 0) {
			operand = 1;
		}
		return Number /= operand;
	}

	void printResult() const {
		cout << "the result after " << operation << " " << operand << " is: " << Number;
	}

};

int main() {

	ClsCalculator calculator1;

	calculator1.clear();

	calculator1.add(10);
	calculator1.printResult();

	cout << "\n";
	calculator1.add(100);
	calculator1.printResult();

	cout << "\n";
	calculator1.substract(20);
	calculator1.printResult();

	cout << "\n";
	calculator1.divide(0);
	calculator1.printResult();

	cout << endl;

	return 0;
}