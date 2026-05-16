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
	addresses() {}

	addresses(const std::string& c, const std::string& s, const int& h, const int& a) : city(c), street(s), house(h), apartment(a) {}

	std::string to_string() const {
		return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
	}
};

int main() {
	std::ifstream file("in.txt");
	std::ofstream outFile("out.txt");
	if (file.is_open()) {
		int n;
		file >> n;
		file.ignore();
		addresses* array = new addresses[n];
		for (int i = 0; i < n; i++) {
			std::string city, street, house, apartment;

			std::getline(file, city);
			std::getline(file, street);
			std::getline(file, house);
			std::getline(file, apartment);

			array[i] = addresses(city, street, std::stoi(house), std::stoi(apartment));
		}
		file.close();
		outFile << n << std::endl;
		for (int i = n - 1; i >= 0; i--) {
			outFile << array[i].to_string() << std::endl;
		}

		outFile.close();

		delete[] array;

		return 0;
	}
}