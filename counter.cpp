#include <iostream>

class Counter {

private:
	int __a;
public:
	
	Counter() {
		std::string answer;
		std::cout << "Do you want to specify the initial value of the counter ? Enter yes or no: "; std::cin >> answer;
		if (answer == "yes") {
			std::cout << "Enter the initial value of the counter: ";
			std::cin >> __a;
		}
		 else if(answer == "no") {
			__a = 1;
		}
	}

	void inc() {
		++__a;
	}
	void dec() {
		--__a;
	}
	int get_val() const {
		return __a;
	}
	
};

int main() {
	char symbol{};
	Counter count;
	do{
		std::cout << "Enter command ('+', '-', '=' or 'x'): ";
		std::cin >> symbol;
		switch (symbol) {
		case '-': count.dec(); break;
		case '+': count.inc(); break;
		case '=': std::cout << count.get_val() << std::endl; break;
		default: std::cout << "Goodbye!" << std::endl;
		}
	} while (symbol != 'x');
	
	return 0;
}