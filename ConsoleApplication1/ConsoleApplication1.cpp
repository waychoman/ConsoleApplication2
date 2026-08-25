
#include <iostream>

int max_int(int a, int b) {
	return a > b ? a : b;
}

long max_long(long a, long b) {
	return a > b ? a : b;
}

float max_float(float a, float b) {
	return a > b ? a : b;
}

int main() {
	float a = 10.9;
		float b = 10.;

		std::cout << "Max: " << max_int(a, b) << std::endl;
		std::cout << "Max: " << max_long(a, b) << std::endl;
		std::cout << "Max: " << max_float(a, b) << std::endl;
}