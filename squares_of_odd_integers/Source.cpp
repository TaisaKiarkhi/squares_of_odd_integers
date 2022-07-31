#include <iostream>
#include <numbers>
using namespace std;

int main() {
	size_t limit{};
	cout << "This program will calculate the square of the odd numbers from 1 to the user's limit. ";
	cout << "Enter your limit: ";
	cin >> limit;

	//put a limit to an array (we will have problems if an array will be very huge)
	unsigned odds[1000]{};

	for (size_t i{1}; i < limit; ++i) {
		odds[i] += i;
		if (odds[i] % 2 == 0) {
			continue;
		}

		unsigned square{ static_cast<unsigned>(pow(odds[i],2)) };
		cout << "The square of " << odds[i] << " is " << square << endl;
	}

	return 0;
}