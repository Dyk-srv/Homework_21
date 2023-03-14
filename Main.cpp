#include <iostream>

int main() {
	int x, y;
	int* px = &x, * py = &y;
	std::cout << "Enter 2 numbers -> ";
	std::cin >> x >> y;
	std::cout << "Ariphmetic mean = " << double(*px + *py) / 2.0 << '\n';

	return 0;
}