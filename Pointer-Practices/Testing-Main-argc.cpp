#include <iostream>

int main(int argc, const char * argv[]) {
	std::cout << "Number of command-line arguments: " << argc << std::endl;
	for (int i = 0; i < argc; i++) {
		std::cout << "Argument #" << i << ": _" << argv[i] << "_\n";
	}
	return 0;
}
// Output: 