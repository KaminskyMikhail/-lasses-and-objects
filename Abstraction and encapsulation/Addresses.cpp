#include <iostream>
#include <fstream>
#include <string>
class addresses {
private:
	std::string city{};
	std::string street{};
	int house{};
	int apartment{};
	
public:
	addresses() {
		std::ifstream file("in.txt");
		if (file.is_open()) {
			//std::string data{};
			while (!file.eof()) {
				file >> city >> street;

			}
			file.close();
		}
		
		
	}

	std::string get_input_address()  {
		std::string input_add = city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
		return input_add;
	}
	
};
int main() {
	addresses C;
	std::cout << C.get_input_address();
	return 0;
}