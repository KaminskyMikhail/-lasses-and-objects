#include <iostream>

class Calculator {
private:
	double __num1;
	double __num2;
public:
	Calculator() {
		do {
			std::cout << "Enter num1: ";
			std::cin >> __num1;
			if (__num1 == 0) std::cout << "Uncorrect input!" << std::endl;
		} while (__num1 == 0);
		do {
			std::cout << "Enter num2: ";
			std::cin >> __num2;
			if (__num2 == 0) std::cout << "Uncorrect input!" << std::endl;
		} while (__num2 == 0);
	}
	
	double add() {
		double sum = __num1 + __num2;
		return sum;
	}

	double multiply() {
		double mult = __num1 * __num2;
		return mult;
	}

	double subtract_1_2() {
		double sub = __num2 - __num1;
		return sub;
	}

	double subtract_2_1() {
		double sub = __num1 - __num2;
		return sub;
	}

	double divide_1_2() {
		double div = __num1 / __num2;
		return div;
	}

	double divide_2_1() {
		double div = __num2 / __num1;
		return div;
	}

	bool set_num1(double num1) {
		if (num1 != 0) {
			this->__num1 = num1;
				return true;
		}
		return false;
	}
	
	bool set_num2(double num2) {
		if (num2 != 0) {
			this->__num2 = num2;
			return true;
		}
		return false;
	}
	~Calculator () {}
};

int main()
{
	do {
		
		Calculator calc;
		std::cout << "num1 + num2 = "	<< calc.multiply()		<< std::endl
				  << "num1 - num2 = "	<< calc.subtract_1_2()	<< std::endl
				  << "num2 - num1 = "	<< calc.subtract_2_1()	<< std::endl
				  << "num1 * num2 = "	<< calc.multiply()		<< std::endl
				  << "num1 / num2 = "	<< calc.divide_1_2()	<< std::endl
				  << "num2 / num1 = "	<< calc.divide_2_1()	<< std::endl;
		
	} while (true);
	return 0;
}